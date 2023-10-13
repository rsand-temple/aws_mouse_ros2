// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from img_recognition_resources:srv/PictureInterval.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__TRAITS_HPP_
#define IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "img_recognition_resources/srv/detail/picture_interval__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace img_recognition_resources
{

namespace srv
{

inline void to_flow_style_yaml(
  const PictureInterval_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PictureInterval_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PictureInterval_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace img_recognition_resources

namespace rosidl_generator_traits
{

[[deprecated("use img_recognition_resources::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const img_recognition_resources::srv::PictureInterval_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  img_recognition_resources::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use img_recognition_resources::srv::to_yaml() instead")]]
inline std::string to_yaml(const img_recognition_resources::srv::PictureInterval_Request & msg)
{
  return img_recognition_resources::srv::to_yaml(msg);
}

template<>
inline const char * data_type<img_recognition_resources::srv::PictureInterval_Request>()
{
  return "img_recognition_resources::srv::PictureInterval_Request";
}

template<>
inline const char * name<img_recognition_resources::srv::PictureInterval_Request>()
{
  return "img_recognition_resources/srv/PictureInterval_Request";
}

template<>
struct has_fixed_size<img_recognition_resources::srv::PictureInterval_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<img_recognition_resources::srv::PictureInterval_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<img_recognition_resources::srv::PictureInterval_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace img_recognition_resources
{

namespace srv
{

inline void to_flow_style_yaml(
  const PictureInterval_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PictureInterval_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PictureInterval_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace img_recognition_resources

namespace rosidl_generator_traits
{

[[deprecated("use img_recognition_resources::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const img_recognition_resources::srv::PictureInterval_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  img_recognition_resources::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use img_recognition_resources::srv::to_yaml() instead")]]
inline std::string to_yaml(const img_recognition_resources::srv::PictureInterval_Response & msg)
{
  return img_recognition_resources::srv::to_yaml(msg);
}

template<>
inline const char * data_type<img_recognition_resources::srv::PictureInterval_Response>()
{
  return "img_recognition_resources::srv::PictureInterval_Response";
}

template<>
inline const char * name<img_recognition_resources::srv::PictureInterval_Response>()
{
  return "img_recognition_resources/srv/PictureInterval_Response";
}

template<>
struct has_fixed_size<img_recognition_resources::srv::PictureInterval_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<img_recognition_resources::srv::PictureInterval_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<img_recognition_resources::srv::PictureInterval_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<img_recognition_resources::srv::PictureInterval>()
{
  return "img_recognition_resources::srv::PictureInterval";
}

template<>
inline const char * name<img_recognition_resources::srv::PictureInterval>()
{
  return "img_recognition_resources/srv/PictureInterval";
}

template<>
struct has_fixed_size<img_recognition_resources::srv::PictureInterval>
  : std::integral_constant<
    bool,
    has_fixed_size<img_recognition_resources::srv::PictureInterval_Request>::value &&
    has_fixed_size<img_recognition_resources::srv::PictureInterval_Response>::value
  >
{
};

template<>
struct has_bounded_size<img_recognition_resources::srv::PictureInterval>
  : std::integral_constant<
    bool,
    has_bounded_size<img_recognition_resources::srv::PictureInterval_Request>::value &&
    has_bounded_size<img_recognition_resources::srv::PictureInterval_Response>::value
  >
{
};

template<>
struct is_service<img_recognition_resources::srv::PictureInterval>
  : std::true_type
{
};

template<>
struct is_service_request<img_recognition_resources::srv::PictureInterval_Request>
  : std::true_type
{
};

template<>
struct is_service_response<img_recognition_resources::srv::PictureInterval_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__TRAITS_HPP_
