// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/Buffer128.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/buffer128__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__Buffer128__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x93, 0x97, 0x14, 0xa8, 0x5e, 0xcd, 0xf5,
      0xa7, 0x7b, 0x45, 0xf2, 0x92, 0xb9, 0xb6, 0x2a,
      0x96, 0x7b, 0xc2, 0x0a, 0xcc, 0x4b, 0x70, 0x3f,
      0x33, 0xb6, 0x9d, 0x99, 0x0b, 0xc9, 0xba, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__Buffer128__TYPE_NAME[] = "px4/msg/Buffer128";

// Define type names, field names, and default values
static char px4__msg__Buffer128__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__Buffer128__FIELD_NAME__len[] = "len";
static char px4__msg__Buffer128__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field px4__msg__Buffer128__FIELDS[] = {
  {
    {px4__msg__Buffer128__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Buffer128__FIELD_NAME__len, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Buffer128__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      128,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__Buffer128__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__Buffer128__TYPE_NAME, 17, 17},
      {px4__msg__Buffer128__FIELDS, 3, 3},
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
  "uint8 len                       # length of data\n"
  "uint32 MAX_BUFLEN = 128\n"
  "\n"
  "uint8[128] data                 # data\n"
  "\n"
  "# TOPICS voxl2_io_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__Buffer128__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__Buffer128__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 197, 197},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__Buffer128__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__Buffer128__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
