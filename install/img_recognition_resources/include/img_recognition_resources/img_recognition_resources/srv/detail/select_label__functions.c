// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from img_recognition_resources:srv/SelectLabel.idl
// generated code does not contain a copyright notice
#include "img_recognition_resources/srv/detail/select_label__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
img_recognition_resources__srv__SelectLabel_Request__init(img_recognition_resources__srv__SelectLabel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    img_recognition_resources__srv__SelectLabel_Request__fini(msg);
    return false;
  }
  return true;
}

void
img_recognition_resources__srv__SelectLabel_Request__fini(img_recognition_resources__srv__SelectLabel_Request * msg)
{
  if (!msg) {
    return;
  }
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
img_recognition_resources__srv__SelectLabel_Request__are_equal(const img_recognition_resources__srv__SelectLabel_Request * lhs, const img_recognition_resources__srv__SelectLabel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
img_recognition_resources__srv__SelectLabel_Request__copy(
  const img_recognition_resources__srv__SelectLabel_Request * input,
  img_recognition_resources__srv__SelectLabel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

img_recognition_resources__srv__SelectLabel_Request *
img_recognition_resources__srv__SelectLabel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__srv__SelectLabel_Request * msg = (img_recognition_resources__srv__SelectLabel_Request *)allocator.allocate(sizeof(img_recognition_resources__srv__SelectLabel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(img_recognition_resources__srv__SelectLabel_Request));
  bool success = img_recognition_resources__srv__SelectLabel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
img_recognition_resources__srv__SelectLabel_Request__destroy(img_recognition_resources__srv__SelectLabel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    img_recognition_resources__srv__SelectLabel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
img_recognition_resources__srv__SelectLabel_Request__Sequence__init(img_recognition_resources__srv__SelectLabel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__srv__SelectLabel_Request * data = NULL;

  if (size) {
    data = (img_recognition_resources__srv__SelectLabel_Request *)allocator.zero_allocate(size, sizeof(img_recognition_resources__srv__SelectLabel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = img_recognition_resources__srv__SelectLabel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        img_recognition_resources__srv__SelectLabel_Request__fini(&data[i - 1]);
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
img_recognition_resources__srv__SelectLabel_Request__Sequence__fini(img_recognition_resources__srv__SelectLabel_Request__Sequence * array)
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
      img_recognition_resources__srv__SelectLabel_Request__fini(&array->data[i]);
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

img_recognition_resources__srv__SelectLabel_Request__Sequence *
img_recognition_resources__srv__SelectLabel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__srv__SelectLabel_Request__Sequence * array = (img_recognition_resources__srv__SelectLabel_Request__Sequence *)allocator.allocate(sizeof(img_recognition_resources__srv__SelectLabel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = img_recognition_resources__srv__SelectLabel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
img_recognition_resources__srv__SelectLabel_Request__Sequence__destroy(img_recognition_resources__srv__SelectLabel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    img_recognition_resources__srv__SelectLabel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
img_recognition_resources__srv__SelectLabel_Request__Sequence__are_equal(const img_recognition_resources__srv__SelectLabel_Request__Sequence * lhs, const img_recognition_resources__srv__SelectLabel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!img_recognition_resources__srv__SelectLabel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
img_recognition_resources__srv__SelectLabel_Request__Sequence__copy(
  const img_recognition_resources__srv__SelectLabel_Request__Sequence * input,
  img_recognition_resources__srv__SelectLabel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(img_recognition_resources__srv__SelectLabel_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    img_recognition_resources__srv__SelectLabel_Request * data =
      (img_recognition_resources__srv__SelectLabel_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!img_recognition_resources__srv__SelectLabel_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          img_recognition_resources__srv__SelectLabel_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!img_recognition_resources__srv__SelectLabel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
img_recognition_resources__srv__SelectLabel_Response__init(img_recognition_resources__srv__SelectLabel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
img_recognition_resources__srv__SelectLabel_Response__fini(img_recognition_resources__srv__SelectLabel_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
img_recognition_resources__srv__SelectLabel_Response__are_equal(const img_recognition_resources__srv__SelectLabel_Response * lhs, const img_recognition_resources__srv__SelectLabel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
img_recognition_resources__srv__SelectLabel_Response__copy(
  const img_recognition_resources__srv__SelectLabel_Response * input,
  img_recognition_resources__srv__SelectLabel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

img_recognition_resources__srv__SelectLabel_Response *
img_recognition_resources__srv__SelectLabel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__srv__SelectLabel_Response * msg = (img_recognition_resources__srv__SelectLabel_Response *)allocator.allocate(sizeof(img_recognition_resources__srv__SelectLabel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(img_recognition_resources__srv__SelectLabel_Response));
  bool success = img_recognition_resources__srv__SelectLabel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
img_recognition_resources__srv__SelectLabel_Response__destroy(img_recognition_resources__srv__SelectLabel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    img_recognition_resources__srv__SelectLabel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
img_recognition_resources__srv__SelectLabel_Response__Sequence__init(img_recognition_resources__srv__SelectLabel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__srv__SelectLabel_Response * data = NULL;

  if (size) {
    data = (img_recognition_resources__srv__SelectLabel_Response *)allocator.zero_allocate(size, sizeof(img_recognition_resources__srv__SelectLabel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = img_recognition_resources__srv__SelectLabel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        img_recognition_resources__srv__SelectLabel_Response__fini(&data[i - 1]);
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
img_recognition_resources__srv__SelectLabel_Response__Sequence__fini(img_recognition_resources__srv__SelectLabel_Response__Sequence * array)
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
      img_recognition_resources__srv__SelectLabel_Response__fini(&array->data[i]);
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

img_recognition_resources__srv__SelectLabel_Response__Sequence *
img_recognition_resources__srv__SelectLabel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__srv__SelectLabel_Response__Sequence * array = (img_recognition_resources__srv__SelectLabel_Response__Sequence *)allocator.allocate(sizeof(img_recognition_resources__srv__SelectLabel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = img_recognition_resources__srv__SelectLabel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
img_recognition_resources__srv__SelectLabel_Response__Sequence__destroy(img_recognition_resources__srv__SelectLabel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    img_recognition_resources__srv__SelectLabel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
img_recognition_resources__srv__SelectLabel_Response__Sequence__are_equal(const img_recognition_resources__srv__SelectLabel_Response__Sequence * lhs, const img_recognition_resources__srv__SelectLabel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!img_recognition_resources__srv__SelectLabel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
img_recognition_resources__srv__SelectLabel_Response__Sequence__copy(
  const img_recognition_resources__srv__SelectLabel_Response__Sequence * input,
  img_recognition_resources__srv__SelectLabel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(img_recognition_resources__srv__SelectLabel_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    img_recognition_resources__srv__SelectLabel_Response * data =
      (img_recognition_resources__srv__SelectLabel_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!img_recognition_resources__srv__SelectLabel_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          img_recognition_resources__srv__SelectLabel_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!img_recognition_resources__srv__SelectLabel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
