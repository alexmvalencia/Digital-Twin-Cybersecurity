// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/OrbTestLarge.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/orb_test_large__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__OrbTestLarge__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0x28, 0x81, 0x2e, 0xef, 0x88, 0x1f, 0xc7,
      0xd7, 0x2c, 0x09, 0xfb, 0x49, 0xb9, 0x3d, 0xe5,
      0x5d, 0x3e, 0xab, 0xc2, 0xaf, 0x95, 0xe9, 0x4e,
      0x3c, 0x7a, 0xcd, 0x3f, 0x83, 0xd9, 0xb2, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__OrbTestLarge__TYPE_NAME[] = "px4/msg/OrbTestLarge";

// Define type names, field names, and default values
static char px4__msg__OrbTestLarge__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__OrbTestLarge__FIELD_NAME__val[] = "val";
static char px4__msg__OrbTestLarge__FIELD_NAME__junk[] = "junk";

static rosidl_runtime_c__type_description__Field px4__msg__OrbTestLarge__FIELDS[] = {
  {
    {px4__msg__OrbTestLarge__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OrbTestLarge__FIELD_NAME__val, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OrbTestLarge__FIELD_NAME__junk, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      512,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__OrbTestLarge__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__OrbTestLarge__TYPE_NAME, 20, 20},
      {px4__msg__OrbTestLarge__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "int32 val\n"
  "\n"
  "uint8[512] junk";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__OrbTestLarge__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__OrbTestLarge__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 87, 87},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__OrbTestLarge__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__OrbTestLarge__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
