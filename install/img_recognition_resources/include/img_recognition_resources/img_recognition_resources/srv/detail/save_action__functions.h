// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from img_recognition_resources:srv/SaveAction.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SAVE_ACTION__FUNCTIONS_H_
#define IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SAVE_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "img_recognition_resources/msg/rosidl_generator_c__visibility_control.h"

#include "img_recognition_resources/srv/detail/save_action__struct.h"

/// Initialize srv/SaveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * img_recognition_resources__srv__SaveAction_Request
 * )) before or use
 * img_recognition_resources__srv__SaveAction_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__srv__SaveAction_Request__init(img_recognition_resources__srv__SaveAction_Request * msg);

/// Finalize srv/SaveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__srv__SaveAction_Request__fini(img_recognition_resources__srv__SaveAction_Request * msg);

/// Create srv/SaveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * img_recognition_resources__srv__SaveAction_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
img_recognition_resources__srv__SaveAction_Request *
img_recognition_resources__srv__SaveAction_Request__create();

/// Destroy srv/SaveAction message.
/**
 * It calls
 * img_recognition_resources__srv__SaveAction_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__srv__SaveAction_Request__destroy(img_recognition_resources__srv__SaveAction_Request * msg);

/// Check for srv/SaveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__srv__SaveAction_Request__are_equal(const img_recognition_resources__srv__SaveAction_Request * lhs, const img_recognition_resources__srv__SaveAction_Request * rhs);

/// Copy a srv/SaveAction message.
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
img_recognition_resources__srv__SaveAction_Request__copy(
  const img_recognition_resources__srv__SaveAction_Request * input,
  img_recognition_resources__srv__SaveAction_Request * output);

/// Initialize array of srv/SaveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * img_recognition_resources__srv__SaveAction_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__srv__SaveAction_Request__Sequence__init(img_recognition_resources__srv__SaveAction_Request__Sequence * array, size_t size);

/// Finalize array of srv/SaveAction messages.
/**
 * It calls
 * img_recognition_resources__srv__SaveAction_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__srv__SaveAction_Request__Sequence__fini(img_recognition_resources__srv__SaveAction_Request__Sequence * array);

/// Create array of srv/SaveAction messages.
/**
 * It allocates the memory for the array and calls
 * img_recognition_resources__srv__SaveAction_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
img_recognition_resources__srv__SaveAction_Request__Sequence *
img_recognition_resources__srv__SaveAction_Request__Sequence__create(size_t size);

/// Destroy array of srv/SaveAction messages.
/**
 * It calls
 * img_recognition_resources__srv__SaveAction_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__srv__SaveAction_Request__Sequence__destroy(img_recognition_resources__srv__SaveAction_Request__Sequence * array);

/// Check for srv/SaveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__srv__SaveAction_Request__Sequence__are_equal(const img_recognition_resources__srv__SaveAction_Request__Sequence * lhs, const img_recognition_resources__srv__SaveAction_Request__Sequence * rhs);

/// Copy an array of srv/SaveAction messages.
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
img_recognition_resources__srv__SaveAction_Request__Sequence__copy(
  const img_recognition_resources__srv__SaveAction_Request__Sequence * input,
  img_recognition_resources__srv__SaveAction_Request__Sequence * output);

/// Initialize srv/SaveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * img_recognition_resources__srv__SaveAction_Response
 * )) before or use
 * img_recognition_resources__srv__SaveAction_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__srv__SaveAction_Response__init(img_recognition_resources__srv__SaveAction_Response * msg);

/// Finalize srv/SaveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__srv__SaveAction_Response__fini(img_recognition_resources__srv__SaveAction_Response * msg);

/// Create srv/SaveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * img_recognition_resources__srv__SaveAction_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
img_recognition_resources__srv__SaveAction_Response *
img_recognition_resources__srv__SaveAction_Response__create();

/// Destroy srv/SaveAction message.
/**
 * It calls
 * img_recognition_resources__srv__SaveAction_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__srv__SaveAction_Response__destroy(img_recognition_resources__srv__SaveAction_Response * msg);

/// Check for srv/SaveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__srv__SaveAction_Response__are_equal(const img_recognition_resources__srv__SaveAction_Response * lhs, const img_recognition_resources__srv__SaveAction_Response * rhs);

/// Copy a srv/SaveAction message.
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
img_recognition_resources__srv__SaveAction_Response__copy(
  const img_recognition_resources__srv__SaveAction_Response * input,
  img_recognition_resources__srv__SaveAction_Response * output);

/// Initialize array of srv/SaveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * img_recognition_resources__srv__SaveAction_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__srv__SaveAction_Response__Sequence__init(img_recognition_resources__srv__SaveAction_Response__Sequence * array, size_t size);

/// Finalize array of srv/SaveAction messages.
/**
 * It calls
 * img_recognition_resources__srv__SaveAction_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__srv__SaveAction_Response__Sequence__fini(img_recognition_resources__srv__SaveAction_Response__Sequence * array);

/// Create array of srv/SaveAction messages.
/**
 * It allocates the memory for the array and calls
 * img_recognition_resources__srv__SaveAction_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
img_recognition_resources__srv__SaveAction_Response__Sequence *
img_recognition_resources__srv__SaveAction_Response__Sequence__create(size_t size);

/// Destroy array of srv/SaveAction messages.
/**
 * It calls
 * img_recognition_resources__srv__SaveAction_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
void
img_recognition_resources__srv__SaveAction_Response__Sequence__destroy(img_recognition_resources__srv__SaveAction_Response__Sequence * array);

/// Check for srv/SaveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_recognition_resources
bool
img_recognition_resources__srv__SaveAction_Response__Sequence__are_equal(const img_recognition_resources__srv__SaveAction_Response__Sequence * lhs, const img_recognition_resources__srv__SaveAction_Response__Sequence * rhs);

/// Copy an array of srv/SaveAction messages.
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
img_recognition_resources__srv__SaveAction_Response__Sequence__copy(
  const img_recognition_resources__srv__SaveAction_Response__Sequence * input,
  img_recognition_resources__srv__SaveAction_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMG_RECOGNITION_RESOURCES__SRV__DETAIL__SAVE_ACTION__FUNCTIONS_H_
