// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RtlStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rtl_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RtlStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x96, 0xb8, 0x4f, 0xce, 0xdf, 0xed, 0x8c,
      0x90, 0x12, 0x6a, 0x7a, 0x1b, 0x8a, 0x37, 0x09,
      0x88, 0x0d, 0xa5, 0x80, 0x00, 0x24, 0x55, 0x88,
      0xa0, 0x72, 0xd2, 0x0e, 0x5f, 0x7b, 0x18, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RtlStatus__TYPE_NAME[] = "px4/msg/RtlStatus";

// Define type names, field names, and default values
static char px4__msg__RtlStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RtlStatus__FIELD_NAME__safe_points_id[] = "safe_points_id";
static char px4__msg__RtlStatus__FIELD_NAME__is_evaluation_pending[] = "is_evaluation_pending";
static char px4__msg__RtlStatus__FIELD_NAME__has_vtol_approach[] = "has_vtol_approach";
static char px4__msg__RtlStatus__FIELD_NAME__rtl_type[] = "rtl_type";
static char px4__msg__RtlStatus__FIELD_NAME__safe_point_index[] = "safe_point_index";

static rosidl_runtime_c__type_description__Field px4__msg__RtlStatus__FIELDS[] = {
  {
    {px4__msg__RtlStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RtlStatus__FIELD_NAME__safe_points_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RtlStatus__FIELD_NAME__is_evaluation_pending, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RtlStatus__FIELD_NAME__has_vtol_approach, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RtlStatus__FIELD_NAME__rtl_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RtlStatus__FIELD_NAME__safe_point_index, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__RtlStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RtlStatus__TYPE_NAME, 17, 17},
      {px4__msg__RtlStatus__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                      # time since system start (microseconds)\n"
  "\n"
  "uint32 safe_points_id \\t\\t      # unique ID of active set of safe_point_items\n"
  "bool is_evaluation_pending \\t      # flag if the RTL point needs reevaluation (e.g. new safe points available, but need loading).\n"
  "\n"
  "bool has_vtol_approach \\t\\t      # flag if approaches are defined for current RTL_TYPE parameter setting\n"
  "\n"
  "uint8 rtl_type\\t      \\t\\t      # Type of RTL chosen\n"
  "uint8 safe_point_index \\t\\t      # index of the chosen safe point, if in RTL_STATUS_TYPE_DIRECT_SAFE_POINT mode\n"
  "\n"
  "uint8 RTL_STATUS_TYPE_NONE=0       \\t\\t# pending if evaluation can't pe performed currently e.g. when it is still loading the safe points\n"
  "uint8 RTL_STATUS_TYPE_DIRECT_SAFE_POINT=1 \\t# chosen to directly go to a safe point or home position\n"
  "uint8 RTL_STATUS_TYPE_DIRECT_MISSION_LAND=2 \\t# going straight to the beginning of the mission landing\n"
  "uint8 RTL_STATUS_TYPE_FOLLOW_MISSION=3 \\t\\t# Following the mission from start index to mission landing. Start index is current WP if in Mission mode, and closest WP otherwise.\n"
  "uint8 RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE=4 \\t# Following the mission in reverse from start index to the beginning of the mission. Start index is previous WP if in Mission mode, and closest WP otherwise.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RtlStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RtlStatus__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1269, 1269},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RtlStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RtlStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
