#!/usr/bin/env python3

# Keyboard teleop for the x3 rover
# Code uses uuv teleop as reference

from __future__ import print_function
import os
import time
import sys, termios
import rospy
from geometry_msgs.msg import Wrench, Twist, Vector3

linear_scale = 10
angular_scale = 3

def callback(cmd_vel: Twist):

    cmd_wrench = Wrench()

    # scale input commands accordingly
    # force / linear
    cmd_wrench.force.x = cmd_vel.linear.x * linear_scale
    cmd_wrench.force.y = cmd_vel.linear.y * linear_scale
    cmd_wrench.force.z = cmd_vel.linear.z * linear_scale

    # torque / angular
    cmd_wrench.torque.x = cmd_vel.angular.x * angular_scale
    cmd_wrench.torque.y = cmd_vel.angular.y * angular_scale
    cmd_wrench.torque.z = cmd_vel.angular.z * angular_scale

    # publish
    output_pub.publish(cmd_wrench)


if __name__ == '__main__':

    # Start the node
    node_name = os.path.splitext(os.path.basename(__file__))[0]
    rospy.init_node(node_name)
    rospy.loginfo('Starting [%s] node' % node_name)

    output_pub = rospy.Publisher('/x3/thruster_manager/input', Wrench, queue_size=1)
    input_sub = rospy.Subscriber('/x3/cmd_vel', Twist, callback)

    # Ros Spin
    rate = rospy.Rate(50) # Hz
    while not rospy.is_shutdown():
        rate.sleep()

    # termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    rospy.loginfo('Shutting down [%s] node' % node_name)
