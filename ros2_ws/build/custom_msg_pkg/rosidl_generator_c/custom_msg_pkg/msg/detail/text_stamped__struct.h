// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg_pkg:msg/TextStamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__STRUCT_H_
#define CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TextStamped in the package custom_msg_pkg.
typedef struct custom_msg_pkg__msg__TextStamped
{
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String text;
} custom_msg_pkg__msg__TextStamped;

// Struct for a sequence of custom_msg_pkg__msg__TextStamped.
typedef struct custom_msg_pkg__msg__TextStamped__Sequence
{
  custom_msg_pkg__msg__TextStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg_pkg__msg__TextStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__STRUCT_H_
