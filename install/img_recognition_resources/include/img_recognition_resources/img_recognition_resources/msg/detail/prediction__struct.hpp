// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from img_recognition_resources:msg/Prediction.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__STRUCT_HPP_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__img_recognition_resources__msg__Prediction __attribute__((deprecated))
#else
# define DEPRECATED__img_recognition_resources__msg__Prediction __declspec(deprecated)
#endif

namespace img_recognition_resources
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Prediction_
{
  using Type = Prediction_<ContainerAllocator>;

  explicit Prediction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->confidence = 0.0;
    }
  }

  explicit Prediction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->confidence = 0.0;
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _confidence_type =
    double;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    img_recognition_resources::msg::Prediction_<ContainerAllocator> *;
  using ConstRawPtr =
    const img_recognition_resources::msg::Prediction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<img_recognition_resources::msg::Prediction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<img_recognition_resources::msg::Prediction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      img_recognition_resources::msg::Prediction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<img_recognition_resources::msg::Prediction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      img_recognition_resources::msg::Prediction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<img_recognition_resources::msg::Prediction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<img_recognition_resources::msg::Prediction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<img_recognition_resources::msg::Prediction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__img_recognition_resources__msg__Prediction
    std::shared_ptr<img_recognition_resources::msg::Prediction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__img_recognition_resources__msg__Prediction
    std::shared_ptr<img_recognition_resources::msg::Prediction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Prediction_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Prediction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Prediction_

// alias to use template instance with default allocator
using Prediction =
  img_recognition_resources::msg::Prediction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace img_recognition_resources

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__STRUCT_HPP_
