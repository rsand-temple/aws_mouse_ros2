// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from img_recognition_resources:srv/SelectLabel.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SELECT_LABEL__STRUCT_HPP_
#define IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SELECT_LABEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__img_recognition_resources__srv__SelectLabel_Request __attribute__((deprecated))
#else
# define DEPRECATED__img_recognition_resources__srv__SelectLabel_Request __declspec(deprecated)
#endif

namespace img_recognition_resources
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectLabel_Request_
{
  using Type = SelectLabel_Request_<ContainerAllocator>;

  explicit SelectLabel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  explicit SelectLabel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  // field types and members
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__img_recognition_resources__srv__SelectLabel_Request
    std::shared_ptr<img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__img_recognition_resources__srv__SelectLabel_Request
    std::shared_ptr<img_recognition_resources::srv::SelectLabel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectLabel_Request_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectLabel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectLabel_Request_

// alias to use template instance with default allocator
using SelectLabel_Request =
  img_recognition_resources::srv::SelectLabel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace img_recognition_resources


#ifndef _WIN32
# define DEPRECATED__img_recognition_resources__srv__SelectLabel_Response __attribute__((deprecated))
#else
# define DEPRECATED__img_recognition_resources__srv__SelectLabel_Response __declspec(deprecated)
#endif

namespace img_recognition_resources
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectLabel_Response_
{
  using Type = SelectLabel_Response_<ContainerAllocator>;

  explicit SelectLabel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SelectLabel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__img_recognition_resources__srv__SelectLabel_Response
    std::shared_ptr<img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__img_recognition_resources__srv__SelectLabel_Response
    std::shared_ptr<img_recognition_resources::srv::SelectLabel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectLabel_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectLabel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectLabel_Response_

// alias to use template instance with default allocator
using SelectLabel_Response =
  img_recognition_resources::srv::SelectLabel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace img_recognition_resources

namespace img_recognition_resources
{

namespace srv
{

struct SelectLabel
{
  using Request = img_recognition_resources::srv::SelectLabel_Request;
  using Response = img_recognition_resources::srv::SelectLabel_Response;
};

}  // namespace srv

}  // namespace img_recognition_resources

#endif  // IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SELECT_LABEL__STRUCT_HPP_
