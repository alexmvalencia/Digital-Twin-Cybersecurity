// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4/msg/detail/goto_setpoint__rosidl_typesupport_introspection_c.h"
#include "px4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4/msg/detail/goto_setpoint__functions.h"
#include "px4/msg/detail/goto_setpoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4__msg__GotoSetpoint__init(message_memory);
}

void px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_fini_function(void * message_memory)
{
  px4__msg__GotoSetpoint__fini(message_memory);
}

size_t px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__size_function__GotoSetpoint__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__get_const_function__GotoSetpoint__position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__get_function__GotoSetpoint__position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__fetch_function__GotoSetpoint__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__get_const_function__GotoSetpoint__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__assign_function__GotoSetpoint__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__get_function__GotoSetpoint__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_message_member_array[10] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, position),  // bytes offset in struct
    NULL,  // default value
    px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__size_function__GotoSetpoint__position,  // size() function pointer
    px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__get_const_function__GotoSetpoint__position,  // get_const(index) function pointer
    px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__get_function__GotoSetpoint__position,  // get(index) function pointer
    px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__fetch_function__GotoSetpoint__position,  // fetch(index, &value) function pointer
    px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__assign_function__GotoSetpoint__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flag_control_heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, flag_control_heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flag_set_max_horizontal_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, flag_set_max_horizontal_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_horizontal_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, max_horizontal_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flag_set_max_vertical_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, flag_set_max_vertical_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_vertical_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, max_vertical_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flag_set_max_heading_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, flag_set_max_heading_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_heading_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GotoSetpoint, max_heading_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_message_members = {
  "px4__msg",  // message namespace
  "GotoSetpoint",  // message name
  10,  // number of fields
  sizeof(px4__msg__GotoSetpoint),
  false,  // has_any_key_member_
  px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_message_member_array,  // message members
  px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_init_function,  // function to initialize message memory (memory has to be allocated)
  px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_message_type_support_handle = {
  0,
  &px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_message_members,
  get_message_typesupport_handle_function,
  &px4__msg__GotoSetpoint__get_type_hash,
  &px4__msg__GotoSetpoint__get_type_description,
  &px4__msg__GotoSetpoint__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4, msg, GotoSetpoint)() {
  if (!px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_message_type_support_handle.typesupport_identifier) {
    px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4__msg__GotoSetpoint__rosidl_typesupport_introspection_c__GotoSetpoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
