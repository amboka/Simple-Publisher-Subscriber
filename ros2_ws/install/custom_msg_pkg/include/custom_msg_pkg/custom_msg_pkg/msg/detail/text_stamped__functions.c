// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msg_pkg:msg/TextStamped.idl
// generated code does not contain a copyright notice
#include "custom_msg_pkg/msg/detail/text_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msg_pkg__msg__TextStamped__init(custom_msg_pkg__msg__TextStamped * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    custom_msg_pkg__msg__TextStamped__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    custom_msg_pkg__msg__TextStamped__fini(msg);
    return false;
  }
  return true;
}

void
custom_msg_pkg__msg__TextStamped__fini(custom_msg_pkg__msg__TextStamped * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
custom_msg_pkg__msg__TextStamped__are_equal(const custom_msg_pkg__msg__TextStamped * lhs, const custom_msg_pkg__msg__TextStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
custom_msg_pkg__msg__TextStamped__copy(
  const custom_msg_pkg__msg__TextStamped * input,
  custom_msg_pkg__msg__TextStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

custom_msg_pkg__msg__TextStamped *
custom_msg_pkg__msg__TextStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg_pkg__msg__TextStamped * msg = (custom_msg_pkg__msg__TextStamped *)allocator.allocate(sizeof(custom_msg_pkg__msg__TextStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msg_pkg__msg__TextStamped));
  bool success = custom_msg_pkg__msg__TextStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msg_pkg__msg__TextStamped__destroy(custom_msg_pkg__msg__TextStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msg_pkg__msg__TextStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msg_pkg__msg__TextStamped__Sequence__init(custom_msg_pkg__msg__TextStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg_pkg__msg__TextStamped * data = NULL;

  if (size) {
    data = (custom_msg_pkg__msg__TextStamped *)allocator.zero_allocate(size, sizeof(custom_msg_pkg__msg__TextStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msg_pkg__msg__TextStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msg_pkg__msg__TextStamped__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msg_pkg__msg__TextStamped__Sequence__fini(custom_msg_pkg__msg__TextStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msg_pkg__msg__TextStamped__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msg_pkg__msg__TextStamped__Sequence *
custom_msg_pkg__msg__TextStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg_pkg__msg__TextStamped__Sequence * array = (custom_msg_pkg__msg__TextStamped__Sequence *)allocator.allocate(sizeof(custom_msg_pkg__msg__TextStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msg_pkg__msg__TextStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msg_pkg__msg__TextStamped__Sequence__destroy(custom_msg_pkg__msg__TextStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msg_pkg__msg__TextStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msg_pkg__msg__TextStamped__Sequence__are_equal(const custom_msg_pkg__msg__TextStamped__Sequence * lhs, const custom_msg_pkg__msg__TextStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msg_pkg__msg__TextStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msg_pkg__msg__TextStamped__Sequence__copy(
  const custom_msg_pkg__msg__TextStamped__Sequence * input,
  custom_msg_pkg__msg__TextStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msg_pkg__msg__TextStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msg_pkg__msg__TextStamped * data =
      (custom_msg_pkg__msg__TextStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msg_pkg__msg__TextStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msg_pkg__msg__TextStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msg_pkg__msg__TextStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
