#!/usr/bin/env python3

import os

import rospy
import numpy as np
from geometry_msgs.msg import Twist, Vector3

from std_msgs.msg import Float64

class x3Camera:
    def __init__(self, namespace="x3_rov"):
        self.angleDeg  = 0      # current angle
        self.increment = 0.5      # no. of degrees increment
        self.limitDeg  = 30     # Max/min angle

        # publish to camera joint
        self.cameraJoint = rospy.Publisher(f"/{namespace}/camera/controller/command", Float64, queue_size=1)
        # subscribe to cmd_vel topic
        self.cmd_vel_Sub = rospy.Subscriber(f"/x3/cmd_vel", Twist, self._callback)

        # Ros Spin
        rate = rospy.Rate(10) # Hz
        while not rospy.is_shutdown():
            rate.sleep()

    def _updateAngle(self, yVal, direction):
        msg = Float64()
        # calculate increment
        self.angleDeg = self.angleDeg + (self.increment * direction)
        # clamp value
        if (self.angleDeg > self.limitDeg) or (self.angleDeg < -self.limitDeg):
            self.angleDeg = self.limitDeg * direction
        # convert to radian
        msg.data = self.angleDeg * np.pi/180
        # print(msg.data)
        self.cameraJoint.publish(msg)

    def _callback(self, cmd: Twist):
        # tilt down
        if cmd.angular.y > 0:
            self._updateAngle(cmd.angular.y, -1)
        # tilt up
        elif cmd.angular.y < 0:
            self._updateAngle(cmd.angular.y, 1)

if __name__ == '__main__':
    # Start the node
    node_name = os.path.splitext(os.path.basename(__file__))[0]
    rospy.init_node(node_name)
    rospy.loginfo('Starting [%s] node' % node_name)

    # Get params
    ns = 'x3'
    if rospy.has_param('~namespace'):
        ns = rospy.get_param('~namespace')

    camera = x3Camera(namespace = ns)

    rospy.spin()
    rospy.loginfo('Shutting down [%s] node' % node_name)