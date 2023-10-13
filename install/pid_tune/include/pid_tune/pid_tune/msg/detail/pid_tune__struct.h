// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pid_tune:msg/PidTune.idl
// generated code does not contain a copyright notice

#ifndef PID_TUNE__MSG__DETAIL__PID_TUNE__STRUCT_H_
#define PID_TUNE__MSG__DETAIL__PID_TUNE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PidTune in the package pid_tune.
typedef struct pid_tune__msg__PidTune
{
  int16_t kp;
  int16_t kd;
  int16_t ki;
  int16_t kp_z;
} pid_tune__msg__PidTune;

// Struct for a sequence of pid_tune__msg__PidTune.
typedef struct pid_tune__msg__PidTune__Sequence
{
  pid_tune__msg__PidTune * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_tune__msg__PidTune__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PID_TUNE__MSG__DETAIL__PID_TUNE__STRUCT_H_
