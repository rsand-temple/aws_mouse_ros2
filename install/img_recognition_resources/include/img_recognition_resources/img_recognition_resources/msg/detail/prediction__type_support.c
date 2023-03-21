// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from img_recognition_resources:msg/Prediction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "img_recognition_resources/msg/detail/prediction__rosidl_typesupport_introspection_c.h"
#include "img_recognition_resources/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "img_recognition_resources/msg/detail/prediction__functions.h"
#include "img_recognition_resources/msg/detail/prediction__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  img_recognition_resources__msg__Prediction__init(message_memory);
}

void img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_fini_function(void * message_memory)
{
  img_recognition_resources__msg__Prediction__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_message_member_array[2] = {
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_recognition_resources__msg__Prediction, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_recognition_resources__msg__Prediction, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_message_members = {
  "img_recognition_resources__msg",  // message namespace
  "Prediction",  // message name
  2,  // number of fields
  sizeof(img_recognition_resources__msg__Prediction),
  img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_message_member_array,  // message members
  img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_init_function,  // function to initialize message memory (memory has to be allocated)
  img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_message_type_support_handle = {
  0,
  &img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_img_recognition_resources
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, img_recognition_resources, msg, Prediction)() {
  if (!img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_message_type_support_handle.typesupport_identifier) {
    img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &img_recognition_resources__msg__Prediction__rosidl_typesupport_introspection_c__Prediction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
