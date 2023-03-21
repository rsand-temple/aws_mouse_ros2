// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from img_recognition_resources:msg/Inference.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__TRAITS_HPP_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "img_recognition_resources/msg/detail/inference__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace img_recognition_resources
{

namespace msg
{

inline void to_flow_style_yaml(
  const Inference & msg,
  std::ostream & out)
{
  out << "{";
  // member: labels
  {
    if (msg.labels.size() == 0) {
      out << "labels: []";
    } else {
      out << "labels: [";
      size_t pending_items = msg.labels.size();
      for (auto item : msg.labels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confidence
  {
    if (msg.confidence.size() == 0) {
      out << "confidence: []";
    } else {
      out << "confidence: [";
      size_t pending_items = msg.confidence.size();
      for (auto item : msg.confidence) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Inference & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labels.size() == 0) {
      out << "labels: []\n";
    } else {
      out << "labels:\n";
      for (auto item : msg.labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confidence.size() == 0) {
      out << "confidence: []\n";
    } else {
      out << "confidence:\n";
      for (auto item : msg.confidence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Inference & msg, bool use_flow_style = false)
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
  const img_recognition_resources::msg::Inference & msg,
  std::ostream & out, size_t indentation = 0)
{
  img_recognition_resources::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use img_recognition_resources::msg::to_yaml() instead")]]
inline std::string to_yaml(const img_recognition_resources::msg::Inference & msg)
{
  return img_recognition_resources::msg::to_yaml(msg);
}

template<>
inline const char * data_type<img_recognition_resources::msg::Inference>()
{
  return "img_recognition_resources::msg::Inference";
}

template<>
inline const char * name<img_recognition_resources::msg::Inference>()
{
  return "img_recognition_resources/msg/Inference";
}

template<>
struct has_fixed_size<img_recognition_resources::msg::Inference>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<img_recognition_resources::msg::Inference>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<img_recognition_resources::msg::Inference>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__TRAITS_HPP_
