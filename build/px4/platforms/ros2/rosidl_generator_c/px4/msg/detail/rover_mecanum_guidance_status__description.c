// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverMecanumGuidanceStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_mecanum_guidance_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverMecanumGuidanceStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0x88, 0x1a, 0xf9, 0xb0, 0xad, 0x09, 0x7d,
      0x9f, 0xda, 0xd0, 0xc3, 0xd5, 0x72, 0x73, 0xf6,
      0x96, 0xc3, 0x7f, 0x95, 0x7d, 0x4c, 0xa2, 0xb4,
      0x45, 0x29, 0xb7, 0x65, 0x65, 0x4d, 0x12, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverMecanumGuidanceStatus__TYPE_NAME[] = "px4/msg/RoverMecanumGuidanceStatus";

// Define type names, field names, and default values
static char px4__msg__RoverMecanumGuidanceStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverMecanumGuidanceStatus__FIELD_NAME__lookahead_distance[] = "lookahead_distance";
static char px4__msg__RoverMecanumGuidanceStatus__FIELD_NAME__heading_error[] = "heading_error";
static char px4__msg__RoverMecanumGuidanceStatus__FIELD_NAME__desired_speed[] = "desired_speed";

static rosidl_runtime_c__type_description__Field px4__msg__RoverMecanumGuidanceStatus__FIELDS[] = {
  {
    {px4__msg__RoverMecanumGuidanceStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverMecanumGuidanceStatus__FIELD_NAME__lookahead_distance, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverMecanumGuidanceStatus__FIELD_NAME__heading_error, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverMecanumGuidanceStatus__FIELD_NAME__desired_speed, 13, 13},
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
px4__msg__RoverMecanumGuidanceStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverMecanumGuidanceStatus__TYPE_NAME, 34, 34},
      {px4__msg__RoverMecanumGuidanceStatus__FIELDS, 4, 4},
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
  "float32 lookahead_distance # [m] Lookahead distance of pure the pursuit controller\n"
  "float32 heading_error      # [rad] Heading error of the pure pursuit controller\n"
  "float32 desired_speed      # [m/s] Desired velocity magnitude (speed)\n"
  "\n"
  "# TOPICS rover_mecanum_guidance_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverMecanumGuidanceStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverMecanumGuidanceStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 332, 332},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverMecanumGuidanceStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverMecanumGuidanceStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
