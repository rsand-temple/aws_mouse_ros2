// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from img_recognition_resources:srv/PictureInterval.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__BUILDER_HPP_
#define IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "img_recognition_resources/srv/detail/picture_interval__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace img_recognition_resources
{

namespace srv
{

namespace builder
{

class Init_PictureInterval_Request_value
{
public:
  Init_PictureInterval_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::img_recognition_resources::srv::PictureInterval_Request value(::img_recognition_resources::srv::PictureInterval_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::img_recognition_resources::srv::PictureInterval_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::img_recognition_resources::srv::PictureInterval_Request>()
{
  return img_recognition_resources::srv::builder::Init_PictureInterval_Request_value();
}

}  // namespace img_recognition_resources


namespace img_recognition_resources
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::img_recognition_resources::srv::PictureInterval_Response>()
{
  return ::img_recognition_resources::srv::PictureInterval_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace img_recognition_resources

#endif  // IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__BUILDER_HPP_
