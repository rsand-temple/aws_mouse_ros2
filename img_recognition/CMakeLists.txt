cmake_minimum_required(VERSION 3.0.2)
project(img_recognition)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)
set(CMAKE_CXX_STANDARD 14)

find_package(rosidl_default_generators REQUIRED)

################################################
## Declare ROS messages, services and actions ##
################################################

find_package(message_package Inference)
find_package(message_package Predicate)

## Generate added messages and services with any dependencies listed here
rosidl_generate_interfaces(${PROJECT_NAME}
   ${msg_files}
   DEPENDENCIES sensor_msgs geometry_msgs std_msgs
 )

##################################
## ament specific configuration ##
##################################
ament_export_dependencies(
)

ament_export_include_directories(
)

ament_export_libraries(
)

ament_package(
)
