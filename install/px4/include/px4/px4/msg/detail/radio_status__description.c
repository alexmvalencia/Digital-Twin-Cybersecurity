// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RadioStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/radio_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RadioStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x8d, 0xaa, 0x6d, 0xfc, 0x6e, 0x43, 0x7c,
      0xa9, 0xf6, 0xae, 0xc2, 0xe4, 0x12, 0x90, 0x99,
      0xe7, 0x0f, 0xad, 0xea, 0x04, 0x40, 0x92, 0x1c,
      0x06, 0xf0, 0x8b, 0x21, 0x96, 0x61, 0x22, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RadioStatus__TYPE_NAME[] = "px4/msg/RadioStatus";

// Define type names, field names, and default values
static char px4__msg__RadioStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RadioStatus__FIELD_NAME__rssi[] = "rssi";
static char px4__msg__RadioStatus__FIELD_NAME__remote_rssi[] = "remote_rssi";
static char px4__msg__RadioStatus__FIELD_NAME__txbuf[] = "txbuf";
static char px4__msg__RadioStatus__FIELD_NAME__noise[] = "noise";
static char px4__msg__RadioStatus__FIELD_NAME__remote_noise[] = "remote_noise";
static char px4__msg__RadioStatus__FIELD_NAME__rxerrors[] = "rxerrors";
static char px4__msg__RadioStatus__FIELD_NAME__fix[] = "fix";

static rosidl_runtime_c__type_description__Field px4__msg__RadioStatus__FIELDS[] = {
  {
    {px4__msg__RadioStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RadioStatus__FIELD_NAME__rssi, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RadioStatus__FIELD_NAME__remote_rssi, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RadioStatus__FIELD_NAME__txbuf, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RadioStatus__FIELD_NAME__noise, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RadioStatus__FIELD_NAME__remote_noise, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RadioStatus__FIELD_NAME__rxerrors, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RadioStatus__FIELD_NAME__fix, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__RadioStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RadioStatus__TYPE_NAME, 19, 19},
      {px4__msg__RadioStatus__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint64 timestamp\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 rssi\\t\\t\\t\\t# local signal strength\n"
  "uint8 remote_rssi\\t\\t\\t# remote signal strength\n"
  "\n"
  "uint8 txbuf\\t\\t\\t\\t# how full the tx buffer is as a percentage\n"
  "uint8 noise\\t\\t\\t\\t# background noise level\n"
  "\n"
  "uint8 remote_noise\\t\\t\\t# remote background noise level\n"
  "uint16 rxerrors\\t\\t\\t\\t# receive errors\n"
  "\n"
  "uint16 fix\\t\\t\\t\\t# count of error corrected packets";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RadioStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RadioStatus__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 383, 383},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RadioStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RadioStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
