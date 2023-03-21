// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from img_recognition_resources:msg/Inference.idl
// generated code does not contain a copyright notice
#include "img_recognition_resources/msg/detail/inference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `labels`
#include "rosidl_runtime_c/string_functions.h"
// Member `confidence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
img_recognition_resources__msg__Inference__init(img_recognition_resources__msg__Inference * msg)
{
  if (!msg) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__init(&msg->labels, 0)) {
    img_recognition_resources__msg__Inference__fini(msg);
    return false;
  }
  // confidence
  if (!rosidl_runtime_c__double__Sequence__init(&msg->confidence, 0)) {
    img_recognition_resources__msg__Inference__fini(msg);
    return false;
  }
  return true;
}

void
img_recognition_resources__msg__Inference__fini(img_recognition_resources__msg__Inference * msg)
{
  if (!msg) {
    return;
  }
  // labels
  rosidl_runtime_c__String__Sequence__fini(&msg->labels);
  // confidence
  rosidl_runtime_c__double__Sequence__fini(&msg->confidence);
}

bool
img_recognition_resources__msg__Inference__are_equal(const img_recognition_resources__msg__Inference * lhs, const img_recognition_resources__msg__Inference * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->labels), &(rhs->labels)))
  {
    return false;
  }
  // confidence
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->confidence), &(rhs->confidence)))
  {
    return false;
  }
  return true;
}

bool
img_recognition_resources__msg__Inference__copy(
  const img_recognition_resources__msg__Inference * input,
  img_recognition_resources__msg__Inference * output)
{
  if (!input || !output) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->labels), &(output->labels)))
  {
    return false;
  }
  // confidence
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->confidence), &(output->confidence)))
  {
    return false;
  }
  return true;
}

img_recognition_resources__msg__Inference *
img_recognition_resources__msg__Inference__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__msg__Inference * msg = (img_recognition_resources__msg__Inference *)allocator.allocate(sizeof(img_recognition_resources__msg__Inference), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(img_recognition_resources__msg__Inference));
  bool success = img_recognition_resources__msg__Inference__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
img_recognition_resources__msg__Inference__destroy(img_recognition_resources__msg__Inference * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    img_recognition_resources__msg__Inference__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
img_recognition_resources__msg__Inference__Sequence__init(img_recognition_resources__msg__Inference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__msg__Inference * data = NULL;

  if (size) {
    data = (img_recognition_resources__msg__Inference *)allocator.zero_allocate(size, sizeof(img_recognition_resources__msg__Inference), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = img_recognition_resources__msg__Inference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        img_recognition_resources__msg__Inference__fini(&data[i - 1]);
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
img_recognition_resources__msg__Inference__Sequence__fini(img_recognition_resources__msg__Inference__Sequence * array)
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
      img_recognition_resources__msg__Inference__fini(&array->data[i]);
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

img_recognition_resources__msg__Inference__Sequence *
img_recognition_resources__msg__Inference__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__msg__Inference__Sequence * array = (img_recognition_resources__msg__Inference__Sequence *)allocator.allocate(sizeof(img_recognition_resources__msg__Inference__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = img_recognition_resources__msg__Inference__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
img_recognition_resources__msg__Inference__Sequence__destroy(img_recognition_resources__msg__Inference__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    img_recognition_resources__msg__Inference__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
img_recognition_resources__msg__Inference__Sequence__are_equal(const img_recognition_resources__msg__Inference__Sequence * lhs, const img_recognition_resources__msg__Inference__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!img_recognition_resources__msg__Inference__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
img_recognition_resources__msg__Inference__Sequence__copy(
  const img_recognition_resources__msg__Inference__Sequence * input,
  img_recognition_resources__msg__Inference__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(img_recognition_resources__msg__Inference);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    img_recognition_resources__msg__Inference * data =
      (img_recognition_resources__msg__Inference *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!img_recognition_resources__msg__Inference__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          img_recognition_resources__msg__Inference__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!img_recognition_resources__msg__Inference__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
