// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from img_recognition_resources:msg/Prediction.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__BUILDER_HPP_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "img_recognition_resources/msg/detail/prediction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace img_recognition_resources
{

namespace msg
{

namespace builder
{

class Init_Prediction_confidence
{
public:
  explicit Init_Prediction_confidence(::img_recognition_resources::msg::Prediction & msg)
  : msg_(msg)
  {}
  ::img_recognition_resources::msg::Prediction confidence(::img_recognition_resources::msg::Prediction::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::img_recognition_resources::msg::Prediction msg_;
};

class Init_Prediction_label
{
public:
  Init_Prediction_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Prediction_confidence label(::img_recognition_resources::msg::Prediction::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Prediction_confidence(msg_);
  }

private:
  ::img_recognition_resources::msg::Prediction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::img_recognition_resources::msg::Prediction>()
{
  return img_recognition_resources::msg::builder::Init_Prediction_label();
}

}  // namespace img_recognition_resources

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__BUILDER_HPP_
