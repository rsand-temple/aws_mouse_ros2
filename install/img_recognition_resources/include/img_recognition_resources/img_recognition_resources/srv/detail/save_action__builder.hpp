// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from img_recognition_resources:srv/SaveAction.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SAVE_ACTION__BUILDER_HPP_
#define IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SAVE_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "img_recognition_resources/srv/detail/save_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace img_recognition_resources
{

namespace srv
{

namespace builder
{

class Init_SaveAction_Request_value
{
public:
  Init_SaveAction_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::img_recognition_resources::srv::SaveAction_Request value(::img_recognition_resources::srv::SaveAction_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::img_recognition_resources::srv::SaveAction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::img_recognition_resources::srv::SaveAction_Request>()
{
  return img_recognition_resources::srv::builder::Init_SaveAction_Request_value();
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
auto build<::img_recognition_resources::srv::SaveAction_Response>()
{
  return ::img_recognition_resources::srv::SaveAction_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace img_recognition_resources

#endif  // IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SAVE_ACTION__BUILDER_HPP_