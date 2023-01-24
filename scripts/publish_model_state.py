#!/usr/bin/env python3

import os
import rospy

import tf
from tf.transformations import *
import numpy as np

from geometry_msgs.msg import Pose
from gazebo_msgs.srv import GetModelState, GetModelStateRequest


# TODO: make class

# body frame
T_wc = np.array([[ 1,  0, 0, 0.2328 ],
                 [ 0,  1, 0, 0      ],
                 [ 0,  0, 1, 0.09204],
                 [ 0,  0, 0, 1      ]])

# camera frame
# T_wc = np.array([[ 0,  0, 1, 0.2328 ],
#                  [-1,  0, 0, 0      ],
#                  [ 0, -1, 0, 0.09204],
#                  [ 0,  0, 0, 1      ]])


def get_initial_frame():
    '''
    Get initial frame and convert to camera frame
    '''

    # translation
    t_wi = np.array([[1, 0, 0, rospy.get_param('~x')],
                     [0, 1, 0, rospy.get_param('~y')],
                     [0, 0, 1, rospy.get_param('~z')],
                     [0, 0, 0,                     1]])


    # orientation
    roll = rospy.get_param('~roll')
    pitch = rospy.get_param('~pitch')
    yaw = rospy.get_param('~yaw') # - np.pi/2

    # convert to quaternion then to rotation matrix
    q_wi = quaternion_from_euler(roll, pitch, yaw)
    R_wi = quaternion_matrix(q_wi)

    # print(R_wi)

    # initial transformation
    T_wi = np.dot(t_wi, R_wi)
    print(T_wi)

    # initial transformation from camera frame perspective
    T_wi_c = np.dot(T_wi, T_wc)

    print(T_wi_c)

    return T_wi_c

def convert_reference_frame(T_wi, pose: Pose):

    # calculating body frame relative to world frame
    q_wb = [pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w]
    R_wb = quaternion_matrix(q_wb)

    # yes this is not how you're supposed to do it
    T_wb = np.array([[0, 0, 0, pose.position.x],
                     [0, 0, 0, pose.position.y],
                     [0, 0, 0, pose.position.z],
                     [0, 0, 0,               0],]) + R_wb
    
    # calculating body frame relative to initial frame
    T_ib = np.dot(np.linalg.inv(T_wi), T_wb)

    # transform to camera frame position and orientation
    T_ib = np.dot(T_ib, T_wc)

    # print(T_ib)

    # convert to pose msg
    new_pose = Pose()
    new_pose.position.x = T_ib[0,3]
    new_pose.position.y = T_ib[1,3]
    new_pose.position.z = T_ib[2,3]

    q_new = quaternion_from_matrix(T_ib)
    new_pose.orientation.x = q_new[0]
    new_pose.orientation.y = q_new[1]
    new_pose.orientation.z = q_new[2]
    new_pose.orientation.w = q_new[3]

    return new_pose

def broadcast_pose(pose: Pose):
    '''
    Broadcast pose to ROS
    '''
    # print(pose.position)
    position = pose.position
    orientation = pose.orientation

    br = tf.TransformBroadcaster()
    br.sendTransform((position.x, position.y, position.z),
                     (orientation.x, orientation.y, orientation.z, orientation.w),
                     rospy.Time.now(), 
                     "x3", 
                     "world")


if __name__ == '__main__':

    node_name = os.path.splitext(os.path.basename(__file__))[0]
    rospy.init_node(node_name)
    rospy.loginfo('Starting [%s] node' % node_name)

    rospy.wait_for_service ('/gazebo/get_model_state')
    get_model_srv = rospy.ServiceProxy('/gazebo/get_model_state', GetModelState)

    model = GetModelStateRequest()
    model.model_name='x3'

    # publish raw pose
    pose_publisher = rospy.Publisher('/x3/pose_raw', Pose, queue_size=1)

    T_wi = get_initial_frame()

    r = rospy.Rate(40)

    while not rospy.is_shutdown():
        try:
            # wait for service to publish model state
            result = get_model_srv(model)

            # pose
            pose_publisher.publish(result.pose)

            # trajectory
            rel_pose = convert_reference_frame(T_wi ,result.pose)
            broadcast_pose(rel_pose)

            r.sleep()
        except rospy.ROSTimeMovedBackwardsException:
            print("Publish_model_state: time moved backwards, ignoring...")
            pass