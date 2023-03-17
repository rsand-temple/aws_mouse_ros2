cmake_minimum_required(VERSION 3.0.2)
cmake_policy(SET CMP0057 NEW)
project(img_recognition)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)
set(CMAKE_CXX_STANDARD 14)

find_package(rosidl_default_generators REQUIRED)

find_package(img_recognition_resources Inference)
find_package(img_recognition_resources Predicate)

## Generate added messages and services with any dependencies listed here
#rosidl_generate_interfaces(${PROJECT_NAME}
#   ${msg_files}
#   DEPENDENCIES sensor_msgs geometry_msgs std_msgs
# )

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
