#!/usr/bin/env python3

# Keyboard teleop for the x3 rover
# Code uses uuv teleop as reference

from __future__ import print_function
import os
import time
import sys, termios
import rospy
from geometry_msgs.msg import Wrench, Twist, Vector3

from blueye.sdk import Drone

myDrone = Drone()

def callback(cmd_vel: Twist):

    myDrone.motion.surge = cmd_vel.linear.x
    myDrone.motion.sway = -cmd_vel.linear.y
    myDrone.motion.heave = -cmd_vel.linear.z
    myDrone.motion.yaw = -cmd_vel.angular.z

if __name__ == '__main__':

    # Start the node
    node_name = os.path.splitext(os.path.basename(__file__))[0]
    rospy.init_node(node_name)
    rospy.loginfo('Starting [%s] node' % node_name)

    print("Drone connected!")

    myDrone.lights = 10
    time.sleep(2)
    myDrone.lights = 0

    input_sub = rospy.Subscriber('/x3/cmd_vel', Twist, callback)

    # Ros Spin
    rate = rospy.Rate(50) # Hz
    while not rospy.is_shutdown():
        rate.sleep()

    # termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    rospy.loginfo('Shutting down [%s] node' % node_name)
