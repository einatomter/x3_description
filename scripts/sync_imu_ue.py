#!/usr/bin/env python3

import os
import threading
import rospy
from sensor_msgs.msg import Imu

mutex = threading.Lock()
imu_queue = list()

def subscribe_callback(imu_in: Imu):

    mutex.acquire(blocking=True)

    imu_queue.append(imu_in)

    mutex.release()

def publish_callback(event):

    mutex.acquire(blocking=True)

    imu_out = Imu()

    try:

        # header
        imu_out.header.frame_id = imu_queue[0].header.frame_id
        imu_out.header.stamp = rospy.get_rostime()


        # orientation
        imu_out.orientation.w = imu_queue[0].orientation.w
        imu_out.orientation.x = imu_queue[0].orientation.x
        imu_out.orientation.y = imu_queue[0].orientation.y
        imu_out.orientation.z = imu_queue[0].orientation.z

        imu_out.orientation_covariance = imu_queue[0].orientation_covariance

        # angular velocity
        imu_out.angular_velocity.x = imu_queue[0].angular_velocity.x
        imu_out.angular_velocity.y = imu_queue[0].angular_velocity.y
        imu_out.angular_velocity.z = imu_queue[0].angular_velocity.z

        imu_out.angular_velocity_covariance = imu_queue[0].angular_velocity_covariance

        # linear acceleration
        imu_out.linear_acceleration.x = imu_queue[0].linear_acceleration.x
        imu_out.linear_acceleration.y = imu_queue[0].linear_acceleration.y
        imu_out.linear_acceleration.z = imu_queue[0].linear_acceleration.z

        imu_out.linear_acceleration_covariance = imu_queue[0].linear_acceleration_covariance

        imu_queue.pop(0)

        # publish
        output_pub.publish(imu_out)
    
    except:
        pass

    mutex.release()


if __name__ == '__main__':

    # Start the node
    node_name = os.path.splitext(os.path.basename(__file__))[0]
    rospy.init_node(node_name)
    rospy.loginfo('Starting [%s] node' % node_name)

    output_pub = rospy.Publisher('/unreal_ros/imu', Imu, queue_size=1)
    input_sub = rospy.Subscriber('/x3/imu', Imu, subscribe_callback)

    # initial delay
    rospy.sleep(0.5)

    rospy.Timer(rospy.Duration(0.01), publish_callback)

    # Ros Spin
    rospy.spin()

    rospy.loginfo('Shutting down [%s] node' % node_name)
