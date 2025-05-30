// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/DatamanResponse.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/dataman_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__DatamanResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x2f, 0xb7, 0x00, 0x99, 0x92, 0x27, 0x44,
      0x1c, 0xdb, 0xe3, 0xdf, 0x3f, 0x85, 0x74, 0x33,
      0x3f, 0x32, 0x8a, 0x6b, 0xf3, 0x89, 0x0a, 0x6b,
      0x09, 0xa1, 0x5b, 0xd3, 0x49, 0x1e, 0x17, 0x39,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__DatamanResponse__TYPE_NAME[] = "px4/msg/DatamanResponse";

// Define type names, field names, and default values
static char px4__msg__DatamanResponse__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__DatamanResponse__FIELD_NAME__client_id[] = "client_id";
static char px4__msg__DatamanResponse__FIELD_NAME__request_type[] = "request_type";
static char px4__msg__DatamanResponse__FIELD_NAME__item[] = "item";
static char px4__msg__DatamanResponse__FIELD_NAME__index[] = "index";
static char px4__msg__DatamanResponse__FIELD_NAME__data[] = "data";
static char px4__msg__DatamanResponse__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field px4__msg__DatamanResponse__FIELDS[] = {
  {
    {px4__msg__DatamanResponse__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanResponse__FIELD_NAME__client_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanResponse__FIELD_NAME__request_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanResponse__FIELD_NAME__item, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanResponse__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanResponse__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      56,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanResponse__FIELD_NAME__status, 6, 6},
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
px4__msg__DatamanResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__DatamanResponse__TYPE_NAME, 23, 23},
      {px4__msg__DatamanResponse__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 client_id\n"
  "uint8 request_type\\t# id/read/write/clear\n"
  "uint8 item\\t\\t\\t# dm_item_t\n"
  "uint32 index\n"
  "uint8[56] data\n"
  "\n"
  "uint8 STATUS_SUCCESS = 0\n"
  "uint8 STATUS_FAILURE_ID_ERR = 1\n"
  "uint8 STATUS_FAILURE_NO_DATA = 2\n"
  "uint8 STATUS_FAILURE_READ_FAILED = 3\n"
  "uint8 STATUS_FAILURE_WRITE_FAILED = 4\n"
  "uint8 STATUS_FAILURE_CLEAR_FAILED = 5\n"
  "uint8 status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__DatamanResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__DatamanResponse__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 386, 386},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__DatamanResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__DatamanResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
