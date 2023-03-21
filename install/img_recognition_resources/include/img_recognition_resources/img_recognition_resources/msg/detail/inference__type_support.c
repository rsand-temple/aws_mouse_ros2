// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from img_recognition_resources:msg/Inference.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "img_recognition_resources/msg/detail/inference__rosidl_typesupport_introspection_c.h"
#include "img_recognition_resources/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "img_recognition_resources/msg/detail/inference__functions.h"
#include "img_recognition_resources/msg/detail/inference__struct.h"


// Include directives for member types
// Member `labels`
#include "rosidl_runtime_c/string_functions.h"
// Member `confidence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  img_recognition_resources__msg__Inference__init(message_memory);
}

void img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_fini_function(void * message_memory)
{
  img_recognition_resources__msg__Inference__fini(message_memory);
}

size_t img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__size_function__Inference__labels(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_const_function__Inference__labels(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_function__Inference__labels(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__fetch_function__Inference__labels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_const_function__Inference__labels(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__assign_function__Inference__labels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_function__Inference__labels(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__resize_function__Inference__labels(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__size_function__Inference__confidence(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_const_function__Inference__confidence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_function__Inference__confidence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__fetch_function__Inference__confidence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_const_function__Inference__confidence(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__assign_function__Inference__confidence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_function__Inference__confidence(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__resize_function__Inference__confidence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_message_member_array[2] = {
  {
    "labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_recognition_resources__msg__Inference, labels),  // bytes offset in struct
    NULL,  // default value
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__size_function__Inference__labels,  // size() function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_const_function__Inference__labels,  // get_const(index) function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_function__Inference__labels,  // get(index) function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__fetch_function__Inference__labels,  // fetch(index, &value) function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__assign_function__Inference__labels,  // assign(index, value) function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__resize_function__Inference__labels  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_recognition_resources__msg__Inference, confidence),  // bytes offset in struct
    NULL,  // default value
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__size_function__Inference__confidence,  // size() function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_const_function__Inference__confidence,  // get_const(index) function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__get_function__Inference__confidence,  // get(index) function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__fetch_function__Inference__confidence,  // fetch(index, &value) function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__assign_function__Inference__confidence,  // assign(index, value) function pointer
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__resize_function__Inference__confidence  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_message_members = {
  "img_recognition_resources__msg",  // message namespace
  "Inference",  // message name
  2,  // number of fields
  sizeof(img_recognition_resources__msg__Inference),
  img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_message_member_array,  // message members
  img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_init_function,  // function to initialize message memory (memory has to be allocated)
  img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_message_type_support_handle = {
  0,
  &img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_img_recognition_resources
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, img_recognition_resources, msg, Inference)() {
  if (!img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_message_type_support_handle.typesupport_identifier) {
    img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &img_recognition_resources__msg__Inference__rosidl_typesupport_introspection_c__Inference_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
