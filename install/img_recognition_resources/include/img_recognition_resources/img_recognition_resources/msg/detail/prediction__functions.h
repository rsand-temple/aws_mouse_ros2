// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from img_recognition_resources:msg/Prediction.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__FUNCTIONS_H_
#define IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "img_recognition_resources/msg/rosidl_generator_c__visibility_control.h"

#include "img_recognition_resources/msg/detail/prediction__struct.h"

/// Initialize msg/Prediction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * img_recognition_resources__msg__Prediction
 * )) before or use
 * img_recognition_resources__msg__Prediction__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Prediction__init(img_recognition_resources__msg__Prediction * msg);

/// Finalize msg/Prediction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__msg__Prediction__fini(img_recognition_resources__msg__Prediction * msg);

/// Create msg/Prediction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * img_recognition_resources__msg__Prediction__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
img_recognition_resources__msg__Prediction *
img_recognition_resources__msg__Prediction__create();

/// Destroy msg/Prediction message.
/**
 * It calls
 * img_recognition_resources__msg__Prediction__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__msg__Prediction__destroy(img_recognition_resources__msg__Prediction * msg);

/// Check for msg/Prediction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Prediction__are_equal(const img_recognition_resources__msg__Prediction * lhs, const img_recognition_resources__msg__Prediction * rhs);

/// Copy a msg/Prediction message.
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
img_recognition_resources__msg__Prediction__copy(
  const img_recognition_resources__msg__Prediction * input,
  img_recognition_resources__msg__Prediction * output);

/// Initialize array of msg/Prediction messages.
/**
 * It allocates the memory for the number of elements and calls
 * img_recognition_resources__msg__Prediction__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Prediction__Sequence__init(img_recognition_resources__msg__Prediction__Sequence * array, size_t size);

/// Finalize array of msg/Prediction messages.
/**
 * It calls
 * img_recognition_resources__msg__Prediction__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__msg__Prediction__Sequence__fini(img_recognition_resources__msg__Prediction__Sequence * array);

/// Create array of msg/Prediction messages.
/**
 * It allocates the memory for the array and calls
 * img_recognition_resources__msg__Prediction__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
img_recognition_resources__msg__Prediction__Sequence *
img_recognition_resources__msg__Prediction__Sequence__create(size_t size);

/// Destroy array of msg/Prediction messages.
/**
 * It calls
 * img_recognition_resources__msg__Prediction__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__msg__Prediction__Sequence__destroy(img_recognition_resources__msg__Prediction__Sequence * array);

/// Check for msg/Prediction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__msg__Prediction__Sequence__are_equal(const img_recognition_resources__msg__Prediction__Sequence * lhs, const img_recognition_resources__msg__Prediction__Sequence * rhs);

/// Copy an array of msg/Prediction messages.
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
img_recognition_resources__msg__Prediction__Sequence__copy(
  const img_recognition_resources__msg__Prediction__Sequence * input,
  img_recognition_resources__msg__Prediction__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMG_RECOGNITION_RESOURCES__MSG__DETAIL__PREDICTION__FUNCTIONS_H_
