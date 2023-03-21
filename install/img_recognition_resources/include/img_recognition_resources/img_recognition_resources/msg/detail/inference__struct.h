// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from img_recognition_resources:msg/Inference.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__STRUCT_H_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'labels'
#include "rosidl_runtime_c/string.h"
// Member 'confidence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Inference in the package img_recognition_resources.
typedef struct img_recognition_resources__msg__Inference
{
  rosidl_runtime_c__String__Sequence labels;
  rosidl_runtime_c__double__Sequence confidence;
} img_recognition_resources__msg__Inference;

// Struct for a sequence of img_recognition_resources__msg__Inference.
typedef struct img_recognition_resources__msg__Inference__Sequence
{
  img_recognition_resources__msg__Inference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} img_recognition_resources__msg__Inference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__STRUCT_H_