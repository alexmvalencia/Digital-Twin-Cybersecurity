// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VelocityLimits.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/velocity_limits__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VelocityLimits__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0x35, 0x60, 0x15, 0xff, 0xfa, 0xd2, 0x24,
      0xc1, 0x77, 0x3d, 0xc4, 0x62, 0xb0, 0xb1, 0xb1,
      0x0a, 0x2c, 0xfa, 0xb3, 0x8b, 0x14, 0x56, 0xa8,
      0xdb, 0x0b, 0xde, 0x31, 0x37, 0x9a, 0x1b, 0x5c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VelocityLimits__TYPE_NAME[] = "px4/msg/VelocityLimits";

// Define type names, field names, and default values
static char px4__msg__VelocityLimits__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VelocityLimits__FIELD_NAME__horizontal_velocity[] = "horizontal_velocity";
static char px4__msg__VelocityLimits__FIELD_NAME__vertical_velocity[] = "vertical_velocity";
static char px4__msg__VelocityLimits__FIELD_NAME__yaw_rate[] = "yaw_rate";

static rosidl_runtime_c__type_description__Field px4__msg__VelocityLimits__FIELDS[] = {
  {
    {px4__msg__VelocityLimits__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VelocityLimits__FIELD_NAME__horizontal_velocity, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VelocityLimits__FIELD_NAME__vertical_velocity, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VelocityLimits__FIELD_NAME__yaw_rate, 8, 8},
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
px4__msg__VelocityLimits__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VelocityLimits__TYPE_NAME, 22, 22},
      {px4__msg__VelocityLimits__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Velocity and yaw rate limits for a multicopter position slow mode only\n"
  "\n"
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "# absolute speeds, NAN means use default limit\n"
  "float32 horizontal_velocity # [m/s]\n"
  "float32 vertical_velocity # [m/s]\n"
  "float32 yaw_rate # [rad/s]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VelocityLimits__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VelocityLimits__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 277, 277},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VelocityLimits__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VelocityLimits__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
