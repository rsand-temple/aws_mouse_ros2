cmake_minimum_required(VERSION 3.8)
project(img_recognition_resources)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

################################################
## Declare ROS messages, services and actions ##
################################################

## Generate added messages and services with any dependencies listed here
rosidl_generate_interfaces(${PROJECT_NAME}
   "msg/Inference.msg"
   "msg/Prediction.msg"
   "srv/PictureInterval.srv"
   "srv/SaveAction.srv"
   "srv/SelectLabel.srv"

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
