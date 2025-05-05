// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg_pkg:msg/TextStamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__BUILDER_HPP_
#define CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msg_pkg/msg/detail/text_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msg_pkg
{

namespace msg
{

namespace builder
{

class Init_TextStamped_text
{
public:
  explicit Init_TextStamped_text(::custom_msg_pkg::msg::TextStamped & msg)
  : msg_(msg)
  {}
  ::custom_msg_pkg::msg::TextStamped text(::custom_msg_pkg::msg::TextStamped::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg_pkg::msg::TextStamped msg_;
};

class Init_TextStamped_timestamp
{
public:
  Init_TextStamped_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TextStamped_text timestamp(::custom_msg_pkg::msg::TextStamped::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TextStamped_text(msg_);
  }

private:
  ::custom_msg_pkg::msg::TextStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg_pkg::msg::TextStamped>()
{
  return custom_msg_pkg::msg::builder::Init_TextStamped_timestamp();
}

}  // namespace custom_msg_pkg

#endif  // CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__BUILDER_HPP_
