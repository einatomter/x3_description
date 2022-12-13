#!/usr/bin/env python3

# converts messages from cmd_vel topic to suitable thruster values

import os
import rospy

from geometry_msgs.msg import Twist, Wrench, Vector3
from uuv_gazebo_ros_plugins_msgs.msg import FloatStamped

import numpy as np

# Helper functions

# Clamps value between minimum and maximum
def clamp(val, minimum, maximum):
    return max(minimum, min(val, maximum))

class x3ThrusterControl:
    def __init__(self, namespace="x3"):
        self.linear  = Vector3(0, 0, 0)
        self.angular = Vector3(0, 0, 0)
        self.lGain   = 180              # Multiplier from twist to thruster value - linear
        self.aGain   = 180              # Multiplier from twist to thruster value - angular
        self.xGain   = 0.8              # compensation for having 2 thrusters
        self.limit   = 1000              # soft limit for thruster values
        self.topic_prefix = "thrusters"
        self.topic_suffix = "input"

        self.TAM = np.matrix([[      -1,       -1,        0,    0],
                              [       0,        0,        1,    0],
                              [       0,        0,        0,    1],
                              [       0,        0,        0,    0],
                              [       0,        0,        0,    0],
                              [ 0.07967, -0.07967, 0.084875,    0]])

        self.TAMI = np.linalg.pinv(self.TAM)

        # publish to thrusters
        self.thruster    = dict()
        self.thruster[0] = rospy.Publisher(f"/{namespace}/{self.topic_prefix}/0/{self.topic_suffix}", FloatStamped, queue_size=1) # aft-left (x-axis)
        self.thruster[1] = rospy.Publisher(f"/{namespace}/{self.topic_prefix}/1/{self.topic_suffix}", FloatStamped, queue_size=1) # aft-right (x-axis)
        self.thruster[2] = rospy.Publisher(f"/{namespace}/{self.topic_prefix}/2/{self.topic_suffix}", FloatStamped, queue_size=1) # lateral (y-axis)
        self.thruster[3] = rospy.Publisher(f"/{namespace}/{self.topic_prefix}/3/{self.topic_suffix}", FloatStamped, queue_size=1) # vertical (z-axis)
        # subscribe to cmd_vel topic
        self.cmd_vel_Sub = rospy.Subscriber(f"/{namespace}/thruster_manager/input", Wrench, self._callback)
        # self.cmd_vel_Sub = rospy.Subscriber(f"/{namespace}/cmd_vel", Twist, self._callback)

        # Ros Spin
        rate = rospy.Rate(10) # Hz
        while not rospy.is_shutdown():
            rate.sleep()

    def _publish_thruster_forces(self, wrench):
        
        # calculate thruster forces
        thrust = self._calculate_thruster_forces(wrench)

        print(thrust)

        # publish to each thruster
        for i in range(4):
            msg = FloatStamped()
            msg.data = thrust[0,i]
            self.thruster[i].publish(msg)

    def _calculate_thruster_forces(self, wrench):

        thrustVals = self.TAMI.dot(wrench)
        for i in range (4):
            if abs(thrustVals[0,i]) > self.limit:
                thrustVals[0,i] = np.sign(thrustVals[0,i]) * self.limit

        return thrustVals

    def _callback(self, cmd):

        wrench = np.array([cmd.force.x, cmd.force.y, cmd.force.z,
                           cmd.torque.x,cmd.torque.y, cmd.torque.z])


        self._publish_thruster_forces(wrench)


if __name__ == '__main__':
    # Start the node
    node_name = os.path.splitext(os.path.basename(__file__))[0]
    rospy.init_node(node_name)
    rospy.loginfo('Starting [%s] node' % node_name)

    # Get params
    ns = 'x3'
    if rospy.has_param('~namespace'):
        ns = rospy.get_param('~namespace')

    x3Thrusters = x3ThrusterControl(namespace = ns)
    rospy.spin()
    rospy.loginfo('Shutting down [%s] node' % node_name)