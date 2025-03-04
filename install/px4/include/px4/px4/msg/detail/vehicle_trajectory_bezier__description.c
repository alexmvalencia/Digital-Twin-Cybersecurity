// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleTrajectoryBezier.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_trajectory_bezier__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleTrajectoryBezier__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xa5, 0x15, 0x2c, 0x27, 0xb6, 0x52, 0x85,
      0x72, 0x92, 0x92, 0xdf, 0xfe, 0x23, 0x87, 0x3e,
      0x61, 0xc8, 0xf2, 0x97, 0xcb, 0x9c, 0x2d, 0xa3,
      0x0e, 0x0f, 0xe2, 0x6a, 0x13, 0x40, 0xc5, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "px4/msg/detail/trajectory_bezier__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t px4__msg__TrajectoryBezier__EXPECTED_HASH = {1, {
    0xd7, 0xc7, 0x41, 0x9f, 0x88, 0xff, 0xef, 0xc1,
    0x75, 0x3d, 0xd9, 0xa6, 0x26, 0xca, 0x68, 0x8a,
    0x54, 0x0b, 0x65, 0xb3, 0x5c, 0xc1, 0xf9, 0x16,
    0xd6, 0x67, 0x3e, 0x6c, 0x42, 0x48, 0x85, 0x56,
  }};
#endif

static char px4__msg__VehicleTrajectoryBezier__TYPE_NAME[] = "px4/msg/VehicleTrajectoryBezier";
static char px4__msg__TrajectoryBezier__TYPE_NAME[] = "px4/msg/TrajectoryBezier";

// Define type names, field names, and default values
static char px4__msg__VehicleTrajectoryBezier__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleTrajectoryBezier__FIELD_NAME__control_points[] = "control_points";
static char px4__msg__VehicleTrajectoryBezier__FIELD_NAME__bezier_order[] = "bezier_order";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleTrajectoryBezier__FIELDS[] = {
  {
    {px4__msg__VehicleTrajectoryBezier__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleTrajectoryBezier__FIELD_NAME__control_points, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      5,
      0,
      {px4__msg__TrajectoryBezier__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleTrajectoryBezier__FIELD_NAME__bezier_order, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription px4__msg__VehicleTrajectoryBezier__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {px4__msg__TrajectoryBezier__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__VehicleTrajectoryBezier__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleTrajectoryBezier__TYPE_NAME, 31, 31},
      {px4__msg__VehicleTrajectoryBezier__FIELDS, 3, 3},
    },
    {px4__msg__VehicleTrajectoryBezier__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&px4__msg__TrajectoryBezier__EXPECTED_HASH, px4__msg__TrajectoryBezier__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = px4__msg__TrajectoryBezier__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vehicle Waypoints Trajectory description. See also MAVLink MAV_TRAJECTORY_REPRESENTATION msg\n"
  "# The topic vehicle_trajectory_bezier is used to send a smooth flight path from the\n"
  "# companion computer / avoidance module to the position controller.\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 POINT_0 = 0\n"
  "uint8 POINT_1 = 1\n"
  "uint8 POINT_2 = 2\n"
  "uint8 POINT_3 = 3\n"
  "uint8 POINT_4 = 4\n"
  "\n"
  "uint8 NUMBER_POINTS = 5\n"
  "\n"
  "TrajectoryBezier[5] control_points\n"
  "uint8 bezier_order\n"
  "\n"
  "# TOPICS vehicle_trajectory_bezier";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleTrajectoryBezier__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleTrajectoryBezier__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 514, 514},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleTrajectoryBezier__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleTrajectoryBezier__get_individual_type_description_source(NULL),
    sources[1] = *px4__msg__TrajectoryBezier__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
