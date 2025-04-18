// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RcParameterMap.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rc_parameter_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RcParameterMap__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x65, 0xd4, 0x76, 0x28, 0xf1, 0x90, 0xf5,
      0xb2, 0x8e, 0x08, 0x34, 0xe5, 0x1e, 0x01, 0x40,
      0x03, 0x33, 0x68, 0x50, 0x98, 0xb0, 0x46, 0x9e,
      0x23, 0xd8, 0xed, 0xb0, 0xa9, 0xb5, 0xa8, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RcParameterMap__TYPE_NAME[] = "px4/msg/RcParameterMap";

// Define type names, field names, and default values
static char px4__msg__RcParameterMap__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RcParameterMap__FIELD_NAME__valid[] = "valid";
static char px4__msg__RcParameterMap__FIELD_NAME__param_index[] = "param_index";
static char px4__msg__RcParameterMap__FIELD_NAME__param_id[] = "param_id";
static char px4__msg__RcParameterMap__FIELD_NAME__scale[] = "scale";
static char px4__msg__RcParameterMap__FIELD_NAME__value0[] = "value0";
static char px4__msg__RcParameterMap__FIELD_NAME__value_min[] = "value_min";
static char px4__msg__RcParameterMap__FIELD_NAME__value_max[] = "value_max";

static rosidl_runtime_c__type_description__Field px4__msg__RcParameterMap__FIELDS[] = {
  {
    {px4__msg__RcParameterMap__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RcParameterMap__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RcParameterMap__FIELD_NAME__param_index, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RcParameterMap__FIELD_NAME__param_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      51,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RcParameterMap__FIELD_NAME__scale, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RcParameterMap__FIELD_NAME__value0, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RcParameterMap__FIELD_NAME__value_min, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RcParameterMap__FIELD_NAME__value_max, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__RcParameterMap__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RcParameterMap__TYPE_NAME, 22, 22},
      {px4__msg__RcParameterMap__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "uint8 RC_PARAM_MAP_NCHAN = 3 # This limit is also hardcoded in the enum RC_CHANNELS_FUNCTION in rc_channels.h\n"
  "uint8 PARAM_ID_LEN = 16 # corresponds to MAVLINK_MSG_PARAM_VALUE_FIELD_PARAM_ID_LEN\n"
  "\n"
  "bool[3] valid\\t\\t#true for RC-Param channels which are mapped to a param\n"
  "int32[3] param_index\\t# corresponding param index, this field is ignored if set to -1, in this case param_id will be used\n"
  "char[51] param_id\\t# MAP_NCHAN * (ID_LEN + 1) chars, corresponding param id, null terminated\n"
  "float32[3] scale\\t\\t# scale to map the RC input [-1, 1] to a parameter value\n"
  "float32[3] value0\\t\\t# initial value around which the parameter value is changed\n"
  "float32[3] value_min\\t# minimal parameter value\n"
  "float32[3] value_max\\t# minimal parameter value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RcParameterMap__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RcParameterMap__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 786, 786},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RcParameterMap__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RcParameterMap__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
