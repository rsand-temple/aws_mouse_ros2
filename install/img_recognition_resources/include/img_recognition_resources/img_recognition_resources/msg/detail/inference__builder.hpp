// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from img_recognition_resources:msg/Inference.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__BUILDER_HPP_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "img_recognition_resources/msg/detail/inference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace img_recognition_resources
{

namespace msg
{

namespace builder
{

class Init_Inference_confidence
{
public:
  explicit Init_Inference_confidence(::img_recognition_resources::msg::Inference & msg)
  : msg_(msg)
  {}
  ::img_recognition_resources::msg::Inference confidence(::img_recognition_resources::msg::Inference::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::img_recognition_resources::msg::Inference msg_;
};

class Init_Inference_labels
{
public:
  Init_Inference_labels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Inference_confidence labels(::img_recognition_resources::msg::Inference::_labels_type arg)
  {
    msg_.labels = std::move(arg);
    return Init_Inference_confidence(msg_);
  }

private:
  ::img_recognition_resources::msg::Inference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::img_recognition_resources::msg::Inference>()
{
  return img_recognition_resources::msg::builder::Init_Inference_labels();
}

}  // namespace img_recognition_resources

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__BUILDER_HPP_
