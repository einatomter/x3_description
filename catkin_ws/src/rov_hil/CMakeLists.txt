cmake_minimum_required(VERSION 3.0.2)
project(rov_hil)


find_package(catkin REQUIRED COMPONENTS
  controller_manager
  gazebo_ros
  joint_state_publisher
  robot_state_publisher
  rospy
  rviz
)

find_package(gazebo REQUIRED)
find_package(roscpp REQUIRED)
find_package(std_msgs REQUIRED)

include_directories(${roscpp_INCLUDE_DIRS})
include_directories(${std_msgs_INCLUDE_DIRS})
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${GAZEBO_INCLUDE_DIRS}
)

catkin_package(
 INCLUDE_DIRS
 LIBRARIES
 CATKIN_DEPENDS
#  DEPENDS system_lib
)

catkin_install_python(PROGRAMS
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)