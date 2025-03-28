// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GpsInjectData.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/gps_inject_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GpsInjectData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0x53, 0x6b, 0x20, 0x4c, 0xf4, 0x95, 0xf1,
      0xe7, 0x77, 0x7e, 0x14, 0xd9, 0x66, 0xc3, 0xee,
      0xc7, 0xa5, 0x35, 0xa1, 0x32, 0xd6, 0x7d, 0xbd,
      0xb4, 0xda, 0x6e, 0x5d, 0x3c, 0x56, 0xcd, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GpsInjectData__TYPE_NAME[] = "px4/msg/GpsInjectData";

// Define type names, field names, and default values
static char px4__msg__GpsInjectData__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GpsInjectData__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__GpsInjectData__FIELD_NAME__len[] = "len";
static char px4__msg__GpsInjectData__FIELD_NAME__flags[] = "flags";
static char px4__msg__GpsInjectData__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field px4__msg__GpsInjectData__FIELDS[] = {
  {
    {px4__msg__GpsInjectData__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpsInjectData__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpsInjectData__FIELD_NAME__len, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpsInjectData__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpsInjectData__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      300,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__GpsInjectData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GpsInjectData__TYPE_NAME, 21, 21},
      {px4__msg__GpsInjectData__FIELDS, 5, 5},
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
  "uint32 device_id                # unique device ID for the sensor that does not change between power cycles\n"
  "\n"
  "uint16 len                       # length of data\n"
  "uint8 flags                     # LSB: 1=fragmented\n"
  "uint8[300] data                 # data to write to GPS device (RTCM message)\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 8\n"
  "\n"
  "uint8 MAX_INSTANCES = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GpsInjectData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GpsInjectData__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 401, 401},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GpsInjectData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GpsInjectData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
