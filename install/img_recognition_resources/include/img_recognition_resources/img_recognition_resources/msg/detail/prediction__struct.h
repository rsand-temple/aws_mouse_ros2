// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from img_recognition_resources:msg/Prediction.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__STRUCT_H_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Prediction in the package img_recognition_resources.
typedef struct img_recognition_resources__msg__Prediction
{
  rosidl_runtime_c__String label;
  double confidence;
} img_recognition_resources__msg__Prediction;

// Struct for a sequence of img_recognition_resources__msg__Prediction.
typedef struct img_recognition_resources__msg__Prediction__Sequence
{
  img_recognition_resources__msg__Prediction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} img_recognition_resources__msg__Prediction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__STRUCT_H_
