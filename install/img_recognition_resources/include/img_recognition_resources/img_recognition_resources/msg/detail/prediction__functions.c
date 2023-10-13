// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from img_recognition_resources:msg/Prediction.idl
// generated code does not contain a copyright notice
#include "img_recognition_resources/msg/detail/prediction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

bool
img_recognition_resources__msg__Prediction__init(img_recognition_resources__msg__Prediction * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    img_recognition_resources__msg__Prediction__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
img_recognition_resources__msg__Prediction__fini(img_recognition_resources__msg__Prediction * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // confidence
}

bool
img_recognition_resources__msg__Prediction__are_equal(const img_recognition_resources__msg__Prediction * lhs, const img_recognition_resources__msg__Prediction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
img_recognition_resources__msg__Prediction__copy(
  const img_recognition_resources__msg__Prediction * input,
  img_recognition_resources__msg__Prediction * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  return true;
}

img_recognition_resources__msg__Prediction *
img_recognition_resources__msg__Prediction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__msg__Prediction * msg = (img_recognition_resources__msg__Prediction *)allocator.allocate(sizeof(img_recognition_resources__msg__Prediction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(img_recognition_resources__msg__Prediction));
  bool success = img_recognition_resources__msg__Prediction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
img_recognition_resources__msg__Prediction__destroy(img_recognition_resources__msg__Prediction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    img_recognition_resources__msg__Prediction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
img_recognition_resources__msg__Prediction__Sequence__init(img_recognition_resources__msg__Prediction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__msg__Prediction * data = NULL;

  if (size) {
    data = (img_recognition_resources__msg__Prediction *)allocator.zero_allocate(size, sizeof(img_recognition_resources__msg__Prediction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = img_recognition_resources__msg__Prediction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        img_recognition_resources__msg__Prediction__fini(&data[i - 1]);
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
img_recognition_resources__msg__Prediction__Sequence__fini(img_recognition_resources__msg__Prediction__Sequence * array)
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
      img_recognition_resources__msg__Prediction__fini(&array->data[i]);
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

img_recognition_resources__msg__Prediction__Sequence *
img_recognition_resources__msg__Prediction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_recognition_resources__msg__Prediction__Sequence * array = (img_recognition_resources__msg__Prediction__Sequence *)allocator.allocate(sizeof(img_recognition_resources__msg__Prediction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = img_recognition_resources__msg__Prediction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
img_recognition_resources__msg__Prediction__Sequence__destroy(img_recognition_resources__msg__Prediction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    img_recognition_resources__msg__Prediction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
img_recognition_resources__msg__Prediction__Sequence__are_equal(const img_recognition_resources__msg__Prediction__Sequence * lhs, const img_recognition_resources__msg__Prediction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!img_recognition_resources__msg__Prediction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
img_recognition_resources__msg__Prediction__Sequence__copy(
  const img_recognition_resources__msg__Prediction__Sequence * input,
  img_recognition_resources__msg__Prediction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(img_recognition_resources__msg__Prediction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    img_recognition_resources__msg__Prediction * data =
      (img_recognition_resources__msg__Prediction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!img_recognition_resources__msg__Prediction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          img_recognition_resources__msg__Prediction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!img_recognition_resources__msg__Prediction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
