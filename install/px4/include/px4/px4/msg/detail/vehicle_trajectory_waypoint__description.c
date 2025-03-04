// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleTrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_trajectory_waypoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleTrajectoryWaypoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xad, 0xdd, 0xd7, 0x64, 0x98, 0x2b, 0x14, 0xd7,
      0xb6, 0xa3, 0x8e, 0xdc, 0xf6, 0x06, 0xe1, 0x30,
      0x54, 0x21, 0xa6, 0x80, 0x17, 0xc9, 0x8d, 0x53,
      0x7c, 0x5b, 0xa0, 0x86, 0x70, 0xbf, 0x89, 0xb1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "px4/msg/detail/trajectory_waypoint__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t px4__msg__TrajectoryWaypoint__EXPECTED_HASH = {1, {
    0x0a, 0xfe, 0x90, 0xf1, 0x67, 0xe9, 0x07, 0x94,
    0xfd, 0xac, 0x7c, 0x59, 0x29, 0x87, 0x31, 0x6e,
    0xb7, 0xfb, 0x3e, 0x2f, 0xe2, 0x4b, 0x91, 0x73,
    0x8b, 0x54, 0xa0, 0xca, 0x00, 0x46, 0x6e, 0x9d,
  }};
#endif

static char px4__msg__VehicleTrajectoryWaypoint__TYPE_NAME[] = "px4/msg/VehicleTrajectoryWaypoint";
static char px4__msg__TrajectoryWaypoint__TYPE_NAME[] = "px4/msg/TrajectoryWaypoint";

// Define type names, field names, and default values
static char px4__msg__VehicleTrajectoryWaypoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleTrajectoryWaypoint__FIELD_NAME__type[] = "type";
static char px4__msg__VehicleTrajectoryWaypoint__FIELD_NAME__waypoints[] = "waypoints";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleTrajectoryWaypoint__FIELDS[] = {
  {
    {px4__msg__VehicleTrajectoryWaypoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleTrajectoryWaypoint__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleTrajectoryWaypoint__FIELD_NAME__waypoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      5,
      0,
      {px4__msg__TrajectoryWaypoint__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription px4__msg__VehicleTrajectoryWaypoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {px4__msg__TrajectoryWaypoint__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__VehicleTrajectoryWaypoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleTrajectoryWaypoint__TYPE_NAME, 33, 33},
      {px4__msg__VehicleTrajectoryWaypoint__FIELDS, 3, 3},
    },
    {px4__msg__VehicleTrajectoryWaypoint__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&px4__msg__TrajectoryWaypoint__EXPECTED_HASH, px4__msg__TrajectoryWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = px4__msg__TrajectoryWaypoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vehicle Waypoints Trajectory description. See also MAVLink MAV_TRAJECTORY_REPRESENTATION msg\n"
  "# The topic vehicle_trajectory_waypoint_desired is used to send the user desired waypoints from the position controller to the companion computer / avoidance module.\n"
  "# The topic vehicle_trajectory_waypoint is used to send the adjusted waypoints from the companion computer / avoidance module to the position controller.\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS = 0\n"
  "\n"
  "uint8 type # Type from MAV_TRAJECTORY_REPRESENTATION enum.\n"
  "\n"
  "uint8 POINT_0 = 0\n"
  "uint8 POINT_1 = 1\n"
  "uint8 POINT_2 = 2\n"
  "uint8 POINT_3 = 3\n"
  "uint8 POINT_4 = 4\n"
  "\n"
  "uint8 NUMBER_POINTS = 5\n"
  "\n"
  "TrajectoryWaypoint[5] waypoints\n"
  "\n"
  "# TOPICS vehicle_trajectory_waypoint vehicle_trajectory_waypoint_desired";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleTrajectoryWaypoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleTrajectoryWaypoint__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 809, 809},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleTrajectoryWaypoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleTrajectoryWaypoint__get_individual_type_description_source(NULL),
    sources[1] = *px4__msg__TrajectoryWaypoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
