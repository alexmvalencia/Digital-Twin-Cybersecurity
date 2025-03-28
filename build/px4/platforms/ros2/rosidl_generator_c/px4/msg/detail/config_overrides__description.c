// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ConfigOverrides.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/config_overrides__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ConfigOverrides__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf5, 0x82, 0xe5, 0x83, 0xb1, 0xd6, 0x67, 0x95,
      0xd0, 0x72, 0x33, 0x64, 0xdc, 0x80, 0x21, 0xa7,
      0xf8, 0x8f, 0x4b, 0xb7, 0xbe, 0x74, 0x17, 0x2d,
      0x15, 0x1a, 0xd6, 0xe0, 0xe1, 0xa9, 0x8e, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ConfigOverrides__TYPE_NAME[] = "px4/msg/ConfigOverrides";

// Define type names, field names, and default values
static char px4__msg__ConfigOverrides__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ConfigOverrides__FIELD_NAME__disable_auto_disarm[] = "disable_auto_disarm";
static char px4__msg__ConfigOverrides__FIELD_NAME__defer_failsafes[] = "defer_failsafes";
static char px4__msg__ConfigOverrides__FIELD_NAME__defer_failsafes_timeout_s[] = "defer_failsafes_timeout_s";
static char px4__msg__ConfigOverrides__FIELD_NAME__source_type[] = "source_type";
static char px4__msg__ConfigOverrides__FIELD_NAME__source_id[] = "source_id";

static rosidl_runtime_c__type_description__Field px4__msg__ConfigOverrides__FIELDS[] = {
  {
    {px4__msg__ConfigOverrides__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ConfigOverrides__FIELD_NAME__disable_auto_disarm, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ConfigOverrides__FIELD_NAME__defer_failsafes, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ConfigOverrides__FIELD_NAME__defer_failsafes_timeout_s, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ConfigOverrides__FIELD_NAME__source_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ConfigOverrides__FIELD_NAME__source_id, 9, 9},
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
px4__msg__ConfigOverrides__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ConfigOverrides__TYPE_NAME, 23, 23},
      {px4__msg__ConfigOverrides__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Configurable overrides by (external) modes or mode executors\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "bool disable_auto_disarm         # Prevent the drone from automatically disarming after landing (if configured)\n"
  "\n"
  "bool defer_failsafes             # Defer all failsafes that can be deferred (until the flag is cleared)\n"
  "int16 defer_failsafes_timeout_s  # Maximum time a failsafe can be deferred. 0 = system default, -1 = no timeout\n"
  "\n"
  "\n"
  "int8 SOURCE_TYPE_MODE = 0\n"
  "int8 SOURCE_TYPE_MODE_EXECUTOR = 1\n"
  "int8 source_type\n"
  "\n"
  "uint8 source_id                  # ID depending on source_type\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 4\n"
  "\n"
  "# TOPICS config_overrides config_overrides_request";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ConfigOverrides__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ConfigOverrides__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 705, 705},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ConfigOverrides__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ConfigOverrides__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
