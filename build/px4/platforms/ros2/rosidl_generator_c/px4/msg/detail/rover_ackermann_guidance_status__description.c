// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverAckermannGuidanceStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_ackermann_guidance_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverAckermannGuidanceStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0xc6, 0x26, 0x93, 0x8a, 0xbe, 0xe6, 0x14,
      0xfd, 0xa7, 0x93, 0x6e, 0x72, 0x98, 0x6b, 0x09,
      0xdc, 0x62, 0x2c, 0x1c, 0xad, 0x3f, 0x56, 0x20,
      0x53, 0x33, 0x15, 0xec, 0xfa, 0x96, 0x3d, 0x84,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverAckermannGuidanceStatus__TYPE_NAME[] = "px4/msg/RoverAckermannGuidanceStatus";

// Define type names, field names, and default values
static char px4__msg__RoverAckermannGuidanceStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverAckermannGuidanceStatus__FIELD_NAME__lookahead_distance[] = "lookahead_distance";
static char px4__msg__RoverAckermannGuidanceStatus__FIELD_NAME__heading_error[] = "heading_error";

static rosidl_runtime_c__type_description__Field px4__msg__RoverAckermannGuidanceStatus__FIELDS[] = {
  {
    {px4__msg__RoverAckermannGuidanceStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannGuidanceStatus__FIELD_NAME__lookahead_distance, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAckermannGuidanceStatus__FIELD_NAME__heading_error, 13, 13},
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
px4__msg__RoverAckermannGuidanceStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverAckermannGuidanceStatus__TYPE_NAME, 36, 36},
      {px4__msg__RoverAckermannGuidanceStatus__FIELDS, 3, 3},
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
  "float32 lookahead_distance \\t# [m] Lookahead distance of pure the pursuit controller\n"
  "float32 heading_error \\t\\t# [deg] Heading error of the pure pursuit controller\n"
  "\n"
  "# TOPICS rover_ackermann_guidance_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverAckermannGuidanceStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverAckermannGuidanceStatus__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 262, 262},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverAckermannGuidanceStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverAckermannGuidanceStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
