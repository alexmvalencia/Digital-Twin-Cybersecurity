// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverAckermannStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_ackermann_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverAckermannStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0xfa, 0x50, 0x79, 0xcf, 0x66, 0x08, 0xd9,
      0x4c, 0xf6, 0x04, 0x48, 0x18, 0x89, 0xf7, 0x77,
      0xb3, 0x0c, 0xf1, 0x2c, 0xfc, 0x9d, 0xf8, 0xa5,
      0x8b, 0x4a, 0x21, 0x03, 0xa2, 0x05, 0x52, 0xa3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverAckermannStatus__TYPE_NAME[] = "px4/msg/RoverAckermannStatus";

// Define type names, field names, and default values
static char px4__msg__RoverAckermannStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverAckermannStatus__FIELD_NAME__measured_forward_speed[] = "measured_forward_speed";
static char px4__msg__RoverAckermannStatus__FIELD_NAME__adjusted_forward_speed_setpoint[] = "adjusted_forward_speed_setpoint";
static char px4__msg__RoverAckermannStatus__FIELD_NAME__steering_setpoint_normalized[] = "steering_setpoint_normalized";
static char px4__msg__RoverAckermannStatus__FIELD_NAME__adjusted_steering_setpoint_normalized[] = "adjusted_steering_setpoint_normalized";
static char px4__msg__RoverAckermannStatus__FIELD_NAME__measured_lateral_acceleration[] = "measured_lateral_acceleration";
static char px4__msg__RoverAckermannStatus__FIELD_NAME__pid_throttle_integral[] = "pid_throttle_integral";
static char px4__msg__RoverAckermannStatus__FIELD_NAME__pid_lat_accel_integral[] = "pid_lat_accel_integral";

static rosidl_runtime_c__type_description__Field px4__msg__RoverAckermannStatus__FIELDS[] = {
  {
    {px4__msg__RoverAckermannStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannStatus__FIELD_NAME__measured_forward_speed, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannStatus__FIELD_NAME__adjusted_forward_speed_setpoint, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannStatus__FIELD_NAME__steering_setpoint_normalized, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannStatus__FIELD_NAME__adjusted_steering_setpoint_normalized, 37, 37},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannStatus__FIELD_NAME__measured_lateral_acceleration, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannStatus__FIELD_NAME__pid_throttle_integral, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannStatus__FIELD_NAME__pid_lat_accel_integral, 22, 22},
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
px4__msg__RoverAckermannStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverAckermannStatus__TYPE_NAME, 28, 28},
      {px4__msg__RoverAckermannStatus__FIELDS, 8, 8},
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
  "float32 measured_forward_speed       \\t      # [m/s] Measured speed in body x direction. Forwards: positiv, Backwards: negativ\n"
  "float32 adjusted_forward_speed_setpoint       # [m/s] Speed setpoint after applying slew rate\n"
  "float32 steering_setpoint_normalized          # [-1, 1] Normalized steering setpoint\n"
  "float32 adjusted_steering_setpoint_normalized # [-1, 1] Normalized steering setpoint after applying slew rate\n"
  "float32 measured_lateral_acceleration         # [m/s^2] Measured acceleration in body y direction. Positiv: right, Negativ: left.\n"
  "float32 pid_throttle_integral                 # Integral of the PID for the closed loop speed controller\n"
  "float32 pid_lat_accel_integral                # Integral of the PID for the closed loop lateral acceleration controller\n"
  "\n"
  "# TOPICS rover_ackermann_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverAckermannStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverAckermannStatus__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 862, 862},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverAckermannStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverAckermannStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
