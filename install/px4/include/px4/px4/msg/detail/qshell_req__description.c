// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/QshellReq.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/qshell_req__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__QshellReq__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xc6, 0xd0, 0x98, 0x14, 0x3b, 0x9f, 0x08,
      0x62, 0x33, 0xfa, 0x31, 0x69, 0x06, 0xaf, 0x74,
      0x5b, 0x9d, 0xbd, 0xf7, 0xbc, 0xc3, 0xb7, 0xc0,
      0x25, 0x75, 0x51, 0x83, 0x70, 0x30, 0xe3, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__QshellReq__TYPE_NAME[] = "px4/msg/QshellReq";

// Define type names, field names, and default values
static char px4__msg__QshellReq__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__QshellReq__FIELD_NAME__cmd[] = "cmd";
static char px4__msg__QshellReq__FIELD_NAME__strlen[] = "strlen";
static char px4__msg__QshellReq__FIELD_NAME__request_sequence[] = "request_sequence";

static rosidl_runtime_c__type_description__Field px4__msg__QshellReq__FIELDS[] = {
  {
    {px4__msg__QshellReq__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__QshellReq__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      100,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__QshellReq__FIELD_NAME__strlen, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__QshellReq__FIELD_NAME__request_sequence, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__QshellReq__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__QshellReq__TYPE_NAME, 17, 17},
      {px4__msg__QshellReq__FIELDS, 4, 4},
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
  "char[100] cmd\n"
  "uint32 MAX_STRLEN = 100\n"
  "uint32 strlen\n"
  "uint32 request_sequence";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__QshellReq__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__QshellReq__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 135, 135},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__QshellReq__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__QshellReq__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
