// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msg_pkg:msg/TextStamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__STRUCT_HPP_
#define CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msg_pkg__msg__TextStamped __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg_pkg__msg__TextStamped __declspec(deprecated)
#endif

namespace custom_msg_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TextStamped_
{
  using Type = TextStamped_<ContainerAllocator>;

  explicit TextStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  explicit TextStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg_pkg::msg::TextStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg_pkg::msg::TextStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg_pkg::msg::TextStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg_pkg::msg::TextStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg_pkg::msg::TextStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg_pkg::msg::TextStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg_pkg::msg::TextStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg_pkg::msg::TextStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg_pkg::msg::TextStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg_pkg::msg::TextStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg_pkg__msg__TextStamped
    std::shared_ptr<custom_msg_pkg::msg::TextStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg_pkg__msg__TextStamped
    std::shared_ptr<custom_msg_pkg::msg::TextStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TextStamped_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const TextStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TextStamped_

// alias to use template instance with default allocator
using TextStamped =
  custom_msg_pkg::msg::TextStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msg_pkg

#endif  // CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__STRUCT_HPP_
