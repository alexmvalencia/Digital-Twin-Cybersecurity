// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverDifferentialSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_differential_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverDifferentialSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0x55, 0x21, 0xe9, 0xc1, 0x8d, 0x7b, 0x17,
      0x3c, 0xe8, 0xe0, 0x8b, 0x8c, 0xbb, 0x41, 0x51,
      0xb3, 0xf2, 0xe0, 0xc0, 0xb8, 0xd5, 0x9b, 0xe4,
      0x4d, 0xe1, 0x84, 0xcf, 0xfd, 0xbf, 0x5c, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverDifferentialSetpoint__TYPE_NAME[] = "px4/msg/RoverDifferentialSetpoint";

// Define type names, field names, and default values
static char px4__msg__RoverDifferentialSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverDifferentialSetpoint__FIELD_NAME__forward_speed_setpoint[] = "forward_speed_setpoint";
static char px4__msg__RoverDifferentialSetpoint__FIELD_NAME__forward_speed_setpoint_normalized[] = "forward_speed_setpoint_normalized";
static char px4__msg__RoverDifferentialSetpoint__FIELD_NAME__yaw_rate_setpoint[] = "yaw_rate_setpoint";
static char px4__msg__RoverDifferentialSetpoint__FIELD_NAME__speed_diff_setpoint_normalized[] = "speed_diff_setpoint_normalized";
static char px4__msg__RoverDifferentialSetpoint__FIELD_NAME__yaw_setpoint[] = "yaw_setpoint";

static rosidl_runtime_c__type_description__Field px4__msg__RoverDifferentialSetpoint__FIELDS[] = {
  {
    {px4__msg__RoverDifferentialSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverDifferentialSetpoint__FIELD_NAME__forward_speed_setpoint, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverDifferentialSetpoint__FIELD_NAME__forward_speed_setpoint_normalized, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverDifferentialSetpoint__FIELD_NAME__yaw_rate_setpoint, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverDifferentialSetpoint__FIELD_NAME__speed_diff_setpoint_normalized, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverDifferentialSetpoint__FIELD_NAME__yaw_setpoint, 12, 12},
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
px4__msg__RoverDifferentialSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverDifferentialSetpoint__TYPE_NAME, 33, 33},
      {px4__msg__RoverDifferentialSetpoint__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "float32 forward_speed_setpoint \\t\\t  # [m/s] Desired forward speed for the rover\n"
  "float32 forward_speed_setpoint_normalized # [-1, 1] Normalized forward speed for the rover\n"
  "float32 yaw_rate_setpoint      \\t\\t  # [rad/s] Desired yaw rate for the rover (Overriden by yaw controller if yaw_setpoint is used)\n"
  "float32 speed_diff_setpoint_normalized    # [-1, 1] Normalized speed difference between the left and right wheels\n"
  "float32 yaw_setpoint \\t       \\t\\t  # [rad] Desired yaw (heading) for the rover\n"
  "\n"
  "# TOPICS rover_differential_setpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverDifferentialSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverDifferentialSetpoint__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 588, 588},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverDifferentialSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverDifferentialSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
