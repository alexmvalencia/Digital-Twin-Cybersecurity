// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/TrajectoryBezier.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/trajectory_bezier__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__TrajectoryBezier__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0xc7, 0x41, 0x9f, 0x88, 0xff, 0xef, 0xc1,
      0x75, 0x3d, 0xd9, 0xa6, 0x26, 0xca, 0x68, 0x8a,
      0x54, 0x0b, 0x65, 0xb3, 0x5c, 0xc1, 0xf9, 0x16,
      0xd6, 0x67, 0x3e, 0x6c, 0x42, 0x48, 0x85, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__TrajectoryBezier__TYPE_NAME[] = "px4/msg/TrajectoryBezier";

// Define type names, field names, and default values
static char px4__msg__TrajectoryBezier__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__TrajectoryBezier__FIELD_NAME__position[] = "position";
static char px4__msg__TrajectoryBezier__FIELD_NAME__yaw[] = "yaw";
static char px4__msg__TrajectoryBezier__FIELD_NAME__delta[] = "delta";

static rosidl_runtime_c__type_description__Field px4__msg__TrajectoryBezier__FIELDS[] = {
  {
    {px4__msg__TrajectoryBezier__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectoryBezier__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectoryBezier__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectoryBezier__FIELD_NAME__delta, 5, 5},
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
px4__msg__TrajectoryBezier__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__TrajectoryBezier__TYPE_NAME, 24, 24},
      {px4__msg__TrajectoryBezier__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Bezier Trajectory description. See also Mavlink TRAJECTORY msg\n"
  "# The topic trajectory_bezier describe each waypoint defined in vehicle_trajectory_bezier\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "float32[3] position     # local position x,y,z (metres)\n"
  "float32 yaw             # yaw angle (rad)\n"
  "float32 delta           # time it should take to get to this waypoint, if this is the final waypoint (seconds)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__TrajectoryBezier__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__TrajectoryBezier__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 425, 425},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__TrajectoryBezier__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__TrajectoryBezier__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
