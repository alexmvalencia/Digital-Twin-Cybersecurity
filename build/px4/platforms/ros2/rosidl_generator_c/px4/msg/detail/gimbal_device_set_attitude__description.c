// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GimbalDeviceSetAttitude.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/gimbal_device_set_attitude__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GimbalDeviceSetAttitude__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x3a, 0xd8, 0x75, 0xdb, 0x01, 0xe4, 0x29,
      0xf1, 0x76, 0x41, 0x9f, 0x1b, 0xd5, 0x82, 0xfb,
      0xf7, 0x81, 0x88, 0xcb, 0x83, 0x39, 0xb0, 0xec,
      0x8a, 0xeb, 0x2d, 0xec, 0x6e, 0xaf, 0x66, 0x4e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GimbalDeviceSetAttitude__TYPE_NAME[] = "px4/msg/GimbalDeviceSetAttitude";

// Define type names, field names, and default values
static char px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__target_system[] = "target_system";
static char px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__target_component[] = "target_component";
static char px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__flags[] = "flags";
static char px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__q[] = "q";
static char px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__angular_velocity_x[] = "angular_velocity_x";
static char px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__angular_velocity_y[] = "angular_velocity_y";
static char px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__angular_velocity_z[] = "angular_velocity_z";

static rosidl_runtime_c__type_description__Field px4__msg__GimbalDeviceSetAttitude__FIELDS[] = {
  {
    {px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__target_system, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__target_component, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__angular_velocity_x, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__angular_velocity_y, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceSetAttitude__FIELD_NAME__angular_velocity_z, 18, 18},
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
px4__msg__GimbalDeviceSetAttitude__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GimbalDeviceSetAttitude__TYPE_NAME, 31, 31},
      {px4__msg__GimbalDeviceSetAttitude__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t\\t\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 target_system\n"
  "uint8 target_component\n"
  "\n"
  "uint16 flags\n"
  "uint32 GIMBAL_DEVICE_FLAGS_RETRACT = 1\n"
  "uint32 GIMBAL_DEVICE_FLAGS_NEUTRAL = 2\n"
  "uint32 GIMBAL_DEVICE_FLAGS_ROLL_LOCK = 4\n"
  "uint32 GIMBAL_DEVICE_FLAGS_PITCH_LOCK = 8\n"
  "uint32 GIMBAL_DEVICE_FLAGS_YAW_LOCK = 16\n"
  "\n"
  "float32[4] q\n"
  "\n"
  "float32 angular_velocity_x\n"
  "float32 angular_velocity_y\n"
  "float32 angular_velocity_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GimbalDeviceSetAttitude__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GimbalDeviceSetAttitude__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 419, 419},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GimbalDeviceSetAttitude__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GimbalDeviceSetAttitude__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
