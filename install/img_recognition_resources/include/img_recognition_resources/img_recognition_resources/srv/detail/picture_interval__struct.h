// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from img_recognition_resources:srv/PictureInterval.idl
// generated code does not contain a copyright notice

#ifndef IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__STRUCT_H_
#define IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PictureInterval in the package img_recognition_resources.
typedef struct img_recognition_resources__srv__PictureInterval_Request
{
  float value;
} img_recognition_resources__srv__PictureInterval_Request;

// Struct for a sequence of img_recognition_resources__srv__PictureInterval_Request.
typedef struct img_recognition_resources__srv__PictureInterval_Request__Sequence
{
  img_recognition_resources__srv__PictureInterval_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} img_recognition_resources__srv__PictureInterval_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PictureInterval in the package img_recognition_resources.
typedef struct img_recognition_resources__srv__PictureInterval_Response
{
  uint8_t structure_needs_at_least_one_member;
} img_recognition_resources__srv__PictureInterval_Response;

// Struct for a sequence of img_recognition_resources__srv__PictureInterval_Response.
typedef struct img_recognition_resources__srv__PictureInterval_Response__Sequence
{
  img_recognition_resources__srv__PictureInterval_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} img_recognition_resources__srv__PictureInterval_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMG_RECOGNITION_RESOURCES__SRV__DETAIL__PICTURE_INTERVAL__STRUCT_H_
