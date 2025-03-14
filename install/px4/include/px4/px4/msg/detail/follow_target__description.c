// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/FollowTarget.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/follow_target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__FollowTarget__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x02, 0x17, 0x20, 0xed, 0x56, 0x1e, 0xa2,
      0xb6, 0xf5, 0x7f, 0xba, 0x8f, 0x99, 0xd7, 0x14,
      0xa1, 0xce, 0x71, 0x6f, 0xf1, 0x18, 0x6d, 0x8a,
      0x20, 0x3f, 0xf2, 0x7a, 0xfb, 0xdc, 0xc3, 0x7b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__FollowTarget__TYPE_NAME[] = "px4/msg/FollowTarget";

// Define type names, field names, and default values
static char px4__msg__FollowTarget__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__FollowTarget__FIELD_NAME__lat[] = "lat";
static char px4__msg__FollowTarget__FIELD_NAME__lon[] = "lon";
static char px4__msg__FollowTarget__FIELD_NAME__alt[] = "alt";
static char px4__msg__FollowTarget__FIELD_NAME__vy[] = "vy";
static char px4__msg__FollowTarget__FIELD_NAME__vx[] = "vx";
static char px4__msg__FollowTarget__FIELD_NAME__vz[] = "vz";
static char px4__msg__FollowTarget__FIELD_NAME__est_cap[] = "est_cap";

static rosidl_runtime_c__type_description__Field px4__msg__FollowTarget__FIELDS[] = {
  {
    {px4__msg__FollowTarget__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTarget__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTarget__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTarget__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTarget__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTarget__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTarget__FIELD_NAME__vz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTarget__FIELD_NAME__est_cap, 7, 7},
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
px4__msg__FollowTarget__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__FollowTarget__TYPE_NAME, 20, 20},
      {px4__msg__FollowTarget__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp  # time since system start (microseconds)\n"
  "\n"
  "float64 lat       # target position (deg * 1e7)\n"
  "float64 lon       # target position (deg * 1e7)\n"
  "float32 alt       # target position\n"
  "\n"
  "float32 vy        # target vel in y\n"
  "float32 vx        # target vel in x\n"
  "float32 vz        # target vel in z\n"
  "\n"
  "uint8 est_cap     # target reporting capabilities";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__FollowTarget__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__FollowTarget__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 352, 352},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__FollowTarget__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__FollowTarget__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
