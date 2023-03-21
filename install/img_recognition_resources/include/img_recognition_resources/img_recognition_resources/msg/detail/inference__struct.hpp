// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from img_recognition_resources:msg/Inference.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__STRUCT_HPP_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__img_recognition_resources__msg__Inference __attribute__((deprecated))
#else
# define DEPRECATED__img_recognition_resources__msg__Inference __declspec(deprecated)
#endif

namespace img_recognition_resources
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Inference_
{
  using Type = Inference_<ContainerAllocator>;

  explicit Inference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Inference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _labels_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _labels_type labels;
  using _confidence_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__labels(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->labels = _arg;
    return *this;
  }
  Type & set__confidence(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    img_recognition_resources::msg::Inference_<ContainerAllocator> *;
  using ConstRawPtr =
    const img_recognition_resources::msg::Inference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<img_recognition_resources::msg::Inference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<img_recognition_resources::msg::Inference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      img_recognition_resources::msg::Inference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<img_recognition_resources::msg::Inference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      img_recognition_resources::msg::Inference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<img_recognition_resources::msg::Inference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<img_recognition_resources::msg::Inference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<img_recognition_resources::msg::Inference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__img_recognition_resources__msg__Inference
    std::shared_ptr<img_recognition_resources::msg::Inference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__img_recognition_resources__msg__Inference
    std::shared_ptr<img_recognition_resources::msg::Inference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Inference_ & other) const
  {
    if (this->labels != other.labels) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Inference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Inference_

// alias to use template instance with default allocator
using Inference =
  img_recognition_resources::msg::Inference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace img_recognition_resources

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__STRUCT_HPP_
