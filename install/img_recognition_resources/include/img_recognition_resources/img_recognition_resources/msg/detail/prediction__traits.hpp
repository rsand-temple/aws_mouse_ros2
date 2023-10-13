// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from img_recognition_resources:msg/Prediction.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__TRAITS_HPP_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "img_recognition_resources/msg/detail/prediction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace img_recognition_resources
{

namespace msg
{

inline void to_flow_style_yaml(
  const Prediction & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Prediction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Prediction & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace img_recognition_resources

namespace rosidl_generator_traits
{

[[deprecated("use img_recognition_resources::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const img_recognition_resources::msg::Prediction & msg,
  std::ostream & out, size_t indentation = 0)
{
  img_recognition_resources::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use img_recognition_resources::msg::to_yaml() instead")]]
inline std::string to_yaml(const img_recognition_resources::msg::Prediction & msg)
{
  return img_recognition_resources::msg::to_yaml(msg);
}

template<>
inline const char * data_type<img_recognition_resources::msg::Prediction>()
{
  return "img_recognition_resources::msg::Prediction";
}

template<>
inline const char * name<img_recognition_resources::msg::Prediction>()
{
  return "img_recognition_resources/msg/Prediction";
}

template<>
struct has_fixed_size<img_recognition_resources::msg::Prediction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<img_recognition_resources::msg::Prediction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<img_recognition_resources::msg::Prediction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__TRAITS_HPP_
