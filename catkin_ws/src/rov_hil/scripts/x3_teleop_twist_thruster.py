#!/usr/bin/env python3

# converts messages from cmd_vel topic to suitable thruster values

import os

import rospy
from geometry_msgs.msg import Twist, Vector3

from uuv_gazebo_ros_plugins_msgs.msg import FloatStamped

# Helper functions

# Clamps value between minimum and maximum
def clamp(val, minimum, maximum):
    return max(minimum, min(val, maximum))

class x3ThrusterControl:
    def __init__(self, namespace="x3_rov"):
        self.linear  = Vector3(0, 0, 0)
        self.angular = Vector3(0, 0, 0)
        self.lGain   = 180              # Multiplier from twist to thruster value - linear
        self.aGain   = 180              # Multiplier from twist to thruster value - angular
        self.xGain   = 0.8              # compensation for having 2 thrusters
        self.limit   = 180              # soft limit for thruster values

        # publish to thrusters
        self.thrust    = dict()
        # aft-left (x-axis)
        self.thrust[0] = rospy.Publisher(f"/{namespace}/thrusters/0/input", FloatStamped, queue_size=1)
        # aft-right (x-axis)
        self.thrust[1] = rospy.Publisher(f"/{namespace}/thrusters/1/input", FloatStamped, queue_size=1)
        # vertical (z-axis)
        self.thrust[2] = rospy.Publisher(f"/{namespace}/thrusters/2/input", FloatStamped, queue_size=1)
        # lateral (y-axis)
        self.thrust[3] = rospy.Publisher(f"/{namespace}/thrusters/3/input", FloatStamped, queue_size=1)
        # subscribe to cmd_vel topic
        self.cmd_vel_Sub = rospy.Subscriber(f"/{namespace}/cmd_vel", Twist, self._callback)

        # Ros Spin
        rate = rospy.Rate(10) # Hz
        while not rospy.is_shutdown():
            rate.sleep()

    def _updateThrusters(self):
        msg  = dict()
        msg[0] = FloatStamped() # aft-left
        msg[1] = FloatStamped() # aft-right
        msg[2] = FloatStamped() # vertical
        msg[3] = FloatStamped() # lateral
        for i in range(4):
            msg[i].data = 0

        # linear motion
        # x-axis
        msg[0].data = msg[0].data - self.linear.x * self.lGain * self.xGain
        msg[1].data = msg[1].data - self.linear.x * self.lGain * self.xGain

        # y-axis
        if (self.linear.y > 0):
            msg[0].data = msg[0].data - self.linear.y * self.lGain * 0.7
            msg[1].data = msg[1].data + self.linear.y * self.lGain * 0.7
        elif (self.linear.y < 0):
            msg[0].data = msg[0].data - self.linear.y * self.lGain * 0.7
            msg[1].data = msg[1].data + self.linear.y * self.lGain * 0.7

        msg[3].data = msg[3].data + self.linear.y * self.lGain

        # compensation for difference in windup time between aft and lateral thrusters
        # used when ROV is moving in x and y direction at the same time
        if self.linear.x != 0:
            if self.linear.x > 0.9 or self.linear.x < -0.9:
                msg[3].data = msg[3].data * 2.4
            else:
                msg[3].data = msg[3].data * 1.5

            msg[i].data = clamp(msg[i].data, -self.limit + 1, self.limit -1)

        # z-axis
        msg[2].data = msg[2].data + self.linear.z * self.lGain

        # angular motion
        # z-axis (yaw)
        msg[0].data = msg[0].data + self.angular.z * self.aGain
        msg[1].data = msg[1].data - self.angular.z * self.aGain
        msg[2].data = msg[2].data - self.angular.z * self.aGain * 0.05
        msg[3].data = msg[3].data + self.angular.z * self.aGain * 0.25

        # publish to each thruster
        for i in range(4):
            msg[i].data = clamp(msg[i].data, -self.limit, self.limit)
            self.thrust[i].publish(msg[i])

    def _callback(self, cmd):
        # update stored values
        self.linear = cmd.linear
        self.angular = cmd.angular

        self._updateThrusters()


if __name__ == '__main__':
    # Start the node
    node_name = os.path.splitext(os.path.basename(__file__))[0]
    rospy.init_node(node_name)
    rospy.loginfo('Starting [%s] node' % node_name)

    # Get params
    ns = 'x3_rov'
    if rospy.has_param('~namespace'):
        ns = rospy.get_param('~namespace')

    x3Thrusters = x3ThrusterControl(namespace = ns)
    rospy.spin()
    rospy.loginfo('Shutting down [%s] node' % node_name)