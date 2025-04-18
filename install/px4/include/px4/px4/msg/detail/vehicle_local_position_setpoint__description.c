// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleLocalPositionSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_local_position_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleLocalPositionSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x34, 0x20, 0x64, 0xd9, 0x3e, 0x6e, 0xd0,
      0xdb, 0x73, 0x83, 0xaa, 0x99, 0x91, 0x5f, 0x77,
      0xd6, 0x65, 0x1c, 0x2e, 0xc9, 0x6e, 0x17, 0xff,
      0xb1, 0xe8, 0x1a, 0x90, 0x96, 0x1b, 0x1d, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleLocalPositionSetpoint__TYPE_NAME[] = "px4/msg/VehicleLocalPositionSetpoint";

// Define type names, field names, and default values
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__x[] = "x";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__y[] = "y";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__z[] = "z";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__vx[] = "vx";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__vy[] = "vy";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__vz[] = "vz";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__acceleration[] = "acceleration";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__thrust[] = "thrust";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__yaw[] = "yaw";
static char px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__yawspeed[] = "yawspeed";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleLocalPositionSetpoint__FIELDS[] = {
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__vz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__thrust, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleLocalPositionSetpoint__FIELD_NAME__yawspeed, 8, 8},
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
px4__msg__VehicleLocalPositionSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleLocalPositionSetpoint__TYPE_NAME, 36, 36},
      {px4__msg__VehicleLocalPositionSetpoint__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Local position setpoint in NED frame\n"
  "# Telemetry of PID position controller to monitor tracking.\n"
  "# NaN means the state was not controlled\n"
  "\n"
  "uint64 timestamp\\t# time since system start (microseconds)\n"
  "\n"
  "float32 x\\t\\t# in meters NED\n"
  "float32 y\\t\\t# in meters NED\n"
  "float32 z\\t\\t# in meters NED\n"
  "\n"
  "float32 vx\\t\\t# in meters/sec\n"
  "float32 vy\\t\\t# in meters/sec\n"
  "float32 vz\\t\\t# in meters/sec\n"
  "\n"
  "float32[3] acceleration # in meters/sec^2\n"
  "float32[3] thrust\\t# normalized thrust vector in NED\n"
  "\n"
  "float32 yaw\\t\\t# in radians NED -PI..+PI\n"
  "float32 yawspeed\\t# in radians/sec";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleLocalPositionSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleLocalPositionSetpoint__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 535, 535},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleLocalPositionSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleLocalPositionSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
