// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/UavcanParameterRequest.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/uavcan_parameter_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__UavcanParameterRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0xea, 0x36, 0x9f, 0x60, 0xa4, 0xd7, 0x78,
      0xea, 0xba, 0xcc, 0x17, 0x1f, 0x8b, 0x46, 0x50,
      0x7a, 0x8b, 0xf5, 0x3e, 0xfa, 0x5f, 0xa4, 0xda,
      0x87, 0xb6, 0x8d, 0x8b, 0x13, 0x6b, 0xfd, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__UavcanParameterRequest__TYPE_NAME[] = "px4/msg/UavcanParameterRequest";

// Define type names, field names, and default values
static char px4__msg__UavcanParameterRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__UavcanParameterRequest__FIELD_NAME__message_type[] = "message_type";
static char px4__msg__UavcanParameterRequest__FIELD_NAME__node_id[] = "node_id";
static char px4__msg__UavcanParameterRequest__FIELD_NAME__param_id[] = "param_id";
static char px4__msg__UavcanParameterRequest__FIELD_NAME__param_index[] = "param_index";
static char px4__msg__UavcanParameterRequest__FIELD_NAME__param_type[] = "param_type";
static char px4__msg__UavcanParameterRequest__FIELD_NAME__int_value[] = "int_value";
static char px4__msg__UavcanParameterRequest__FIELD_NAME__real_value[] = "real_value";

static rosidl_runtime_c__type_description__Field px4__msg__UavcanParameterRequest__FIELDS[] = {
  {
    {px4__msg__UavcanParameterRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UavcanParameterRequest__FIELD_NAME__message_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UavcanParameterRequest__FIELD_NAME__node_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UavcanParameterRequest__FIELD_NAME__param_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      17,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UavcanParameterRequest__FIELD_NAME__param_index, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UavcanParameterRequest__FIELD_NAME__param_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UavcanParameterRequest__FIELD_NAME__int_value, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UavcanParameterRequest__FIELD_NAME__real_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__UavcanParameterRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__UavcanParameterRequest__TYPE_NAME, 30, 30},
      {px4__msg__UavcanParameterRequest__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# UAVCAN-MAVLink parameter bridge request type\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 MESSAGE_TYPE_PARAM_REQUEST_READ = 20\\t# MAVLINK_MSG_ID_PARAM_REQUEST_READ\n"
  "uint8 MESSAGE_TYPE_PARAM_REQUEST_LIST = 21\\t# MAVLINK_MSG_ID_PARAM_REQUEST_LIST\n"
  "uint8 MESSAGE_TYPE_PARAM_SET = 23\\t\\t# MAVLINK_MSG_ID_PARAM_SET\n"
  "uint8 message_type\\t\\t\\t\\t# MAVLink message type: PARAM_REQUEST_READ, PARAM_REQUEST_LIST, PARAM_SET\n"
  "\n"
  "uint8 NODE_ID_ALL = 0\\t\\t# MAV_COMP_ID_ALL\n"
  "uint8 node_id\\t\\t\\t# UAVCAN node ID mapped from MAVLink component ID\n"
  "\n"
  "char[17] param_id\\t\\t# MAVLink/UAVCAN parameter name\n"
  "int16 param_index\\t\\t# -1 if the param_id field should be used as identifier\n"
  "\n"
  "uint8 PARAM_TYPE_UINT8 = 1\\t# MAV_PARAM_TYPE_UINT8\n"
  "uint8 PARAM_TYPE_INT64 = 8\\t# MAV_PARAM_TYPE_INT64\n"
  "uint8 PARAM_TYPE_REAL32 = 9\\t# MAV_PARAM_TYPE_REAL32\n"
  "uint8 param_type\\t\\t# MAVLink parameter type\n"
  "\n"
  "int64 int_value\\t\\t\\t# current value if param_type is int-like\n"
  "float32 real_value\\t\\t# current value if param_type is float-like\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__UavcanParameterRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__UavcanParameterRequest__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1007, 1007},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__UavcanParameterRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__UavcanParameterRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
