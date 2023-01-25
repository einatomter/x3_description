#!/usr/bin/env python3

import socket
import struct
import os

import rospy
from sensor_msgs.msg import Imu


# Start the node
node_name = os.path.splitext(os.path.basename(__file__))[0]
rospy.init_node(node_name)
rospy.loginfo('Starting [%s] node' % node_name)

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

addr = ("0.0.0.0", 5678)
s.bind(addr)

output_pub = rospy.Publisher('/irl/imu', Imu, queue_size=1)

while True:
    data, server = s.recvfrom(1024)
    data_raw = struct.unpack("6d2i", data)

    imu_out = Imu()
    # header
    imu_out.header.frame_id = 'imu0'
    # imu_out.header.stamp = rospy.Time.now()
    imu_out.header.stamp.secs = data_raw[6]
    imu_out.header.stamp.nsecs = data_raw[7]

    # orientation
    imu_out.orientation.w = 0
    imu_out.orientation.x = 0
    imu_out.orientation.y = 0
    imu_out.orientation.z = 0

    for index in imu_out.orientation_covariance:
        index = 0

    # angular velocity
    imu_out.angular_velocity.x = data_raw[3]
    imu_out.angular_velocity.y = data_raw[4]
    imu_out.angular_velocity.z = data_raw[5]

    for index in imu_out.angular_velocity_covariance:
        index = 0

    # linear acceleration
    imu_out.linear_acceleration.x = data_raw[0] * 10
    imu_out.linear_acceleration.y = data_raw[1] * 10
    imu_out.linear_acceleration.z = data_raw[2] * 10

    for index in imu_out.linear_acceleration_covariance:
        index = 0

    output_pub.publish(imu_out)


    # print(f"ax: {data_raw[0] * 10}")
    # print(f"ay: {data_raw[1] * 10}")
    # print(f"az: {data_raw[2] * 10}")
    # print()
    # print(f"gx: {data_raw[3]}")
    # print(f"gy: {data_raw[4]}")
    # print(f"gz: {data_raw[5]}")
    # print()
    # print()


