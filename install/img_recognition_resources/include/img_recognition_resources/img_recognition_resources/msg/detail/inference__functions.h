// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from img_recognition_resources:msg/Inference.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__FUNCTIONS_H_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "img_recognition_resources/msg/rosidl_generator_c__visibility_control.h"

#include "img_recognition_resources/msg/detail/inference__struct.h"

/// Initialize msg/Inference message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * img_recognition_resources__msg__Inference
 * )) before or use
 * img_recognition_resources__msg__Inference__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Inference__init(img_recognition_resources__msg__Inference * msg);

/// Finalize msg/Inference message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__msg__Inference__fini(img_recognition_resources__msg__Inference * msg);

/// Create msg/Inference message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * img_recognition_resources__msg__Inference__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
img_recognition_resources__msg__Inference *
img_recognition_resources__msg__Inference__create();

/// Destroy msg/Inference message.
/**
 * It calls
 * img_recognition_resources__msg__Inference__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__msg__Inference__destroy(img_recognition_resources__msg__Inference * msg);

/// Check for msg/Inference message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Inference__are_equal(const img_recognition_resources__msg__Inference * lhs, const img_recognition_resources__msg__Inference * rhs);

/// Copy a msg/Inference message.
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
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Inference__copy(
  const img_recognition_resources__msg__Inference * input,
  img_recognition_resources__msg__Inference * output);

/// Initialize array of msg/Inference messages.
/**
 * It allocates the memory for the number of elements and calls
 * img_recognition_resources__msg__Inference__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Inference__Sequence__init(img_recognition_resources__msg__Inference__Sequence * array, size_t size);

/// Finalize array of msg/Inference messages.
/**
 * It calls
 * img_recognition_resources__msg__Inference__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__msg__Inference__Sequence__fini(img_recognition_resources__msg__Inference__Sequence * array);

/// Create array of msg/Inference messages.
/**
 * It allocates the memory for the array and calls
 * img_recognition_resources__msg__Inference__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
img_recognition_resources__msg__Inference__Sequence *
img_recognition_resources__msg__Inference__Sequence__create(size_t size);

/// Destroy array of msg/Inference messages.
/**
 * It calls
 * img_recognition_resources__msg__Inference__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__msg__Inference__Sequence__destroy(img_recognition_resources__msg__Inference__Sequence * array);

/// Check for msg/Inference message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Inference__Sequence__are_equal(const img_recognition_resources__msg__Inference__Sequence * lhs, const img_recognition_resources__msg__Inference__Sequence * rhs);

/// Copy an array of msg/Inference messages.
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
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Inference__Sequence__copy(
  const img_recognition_resources__msg__Inference__Sequence * input,
  img_recognition_resources__msg__Inference__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__INFERENCE__FUNCTIONS_H_
