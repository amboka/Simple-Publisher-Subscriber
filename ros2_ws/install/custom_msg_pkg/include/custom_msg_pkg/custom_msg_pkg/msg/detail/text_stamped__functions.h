// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msg_pkg:msg/TextStamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__FUNCTIONS_H_
#define CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msg_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msg_pkg/msg/detail/text_stamped__struct.h"

/// Initialize msg/TextStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msg_pkg__msg__TextStamped
 * )) before or use
 * custom_msg_pkg__msg__TextStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
bool
custom_msg_pkg__msg__TextStamped__init(custom_msg_pkg__msg__TextStamped * msg);

/// Finalize msg/TextStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
void
custom_msg_pkg__msg__TextStamped__fini(custom_msg_pkg__msg__TextStamped * msg);

/// Create msg/TextStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msg_pkg__msg__TextStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
custom_msg_pkg__msg__TextStamped *
custom_msg_pkg__msg__TextStamped__create();

/// Destroy msg/TextStamped message.
/**
 * It calls
 * custom_msg_pkg__msg__TextStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
void
custom_msg_pkg__msg__TextStamped__destroy(custom_msg_pkg__msg__TextStamped * msg);

/// Check for msg/TextStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
bool
custom_msg_pkg__msg__TextStamped__are_equal(const custom_msg_pkg__msg__TextStamped * lhs, const custom_msg_pkg__msg__TextStamped * rhs);

/// Copy a msg/TextStamped message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
bool
custom_msg_pkg__msg__TextStamped__copy(
  const custom_msg_pkg__msg__TextStamped * input,
  custom_msg_pkg__msg__TextStamped * output);

/// Initialize array of msg/TextStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msg_pkg__msg__TextStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
bool
custom_msg_pkg__msg__TextStamped__Sequence__init(custom_msg_pkg__msg__TextStamped__Sequence * array, size_t size);

/// Finalize array of msg/TextStamped messages.
/**
 * It calls
 * custom_msg_pkg__msg__TextStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
void
custom_msg_pkg__msg__TextStamped__Sequence__fini(custom_msg_pkg__msg__TextStamped__Sequence * array);

/// Create array of msg/TextStamped messages.
/**
 * It allocates the memory for the array and calls
 * custom_msg_pkg__msg__TextStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
custom_msg_pkg__msg__TextStamped__Sequence *
custom_msg_pkg__msg__TextStamped__Sequence__create(size_t size);

/// Destroy array of msg/TextStamped messages.
/**
 * It calls
 * custom_msg_pkg__msg__TextStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
void
custom_msg_pkg__msg__TextStamped__Sequence__destroy(custom_msg_pkg__msg__TextStamped__Sequence * array);

/// Check for msg/TextStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
bool
custom_msg_pkg__msg__TextStamped__Sequence__are_equal(const custom_msg_pkg__msg__TextStamped__Sequence * lhs, const custom_msg_pkg__msg__TextStamped__Sequence * rhs);

/// Copy an array of msg/TextStamped messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_pkg
bool
custom_msg_pkg__msg__TextStamped__Sequence__copy(
  const custom_msg_pkg__msg__TextStamped__Sequence * input,
  custom_msg_pkg__msg__TextStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG_PKG__MSG__DETAIL__TEXT_STAMPED__FUNCTIONS_H_
