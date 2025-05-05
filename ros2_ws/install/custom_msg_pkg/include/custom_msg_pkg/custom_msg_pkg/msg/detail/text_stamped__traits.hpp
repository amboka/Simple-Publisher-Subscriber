// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg_pkg:msg/TextStamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__TRAITS_HPP_
#define CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msg_pkg/msg/detail/text_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace custom_msg_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TextStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TextStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TextStamped & msg, bool use_flow_style = false)
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

}  // namespace custom_msg_pkg

namespace rosidl_generator_traits
{

[[deprecated("use custom_msg_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msg_pkg::msg::TextStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msg_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msg_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msg_pkg::msg::TextStamped & msg)
{
  return custom_msg_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msg_pkg::msg::TextStamped>()
{
  return "custom_msg_pkg::msg::TextStamped";
}

template<>
inline const char * name<custom_msg_pkg::msg::TextStamped>()
{
  return "custom_msg_pkg/msg/TextStamped";
}

template<>
struct has_fixed_size<custom_msg_pkg::msg::TextStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msg_pkg::msg::TextStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msg_pkg::msg::TextStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__TRAITS_HPP_
