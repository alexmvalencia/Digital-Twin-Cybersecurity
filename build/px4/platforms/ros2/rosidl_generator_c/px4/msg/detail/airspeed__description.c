// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/Airspeed.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/airspeed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__Airspeed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0xa4, 0x25, 0xdc, 0x25, 0x08, 0x51, 0xa4,
      0xe6, 0xde, 0xde, 0x67, 0x56, 0xa2, 0x0d, 0xf7,
      0xa9, 0xb4, 0xf0, 0x1e, 0x84, 0xdf, 0xfc, 0xf9,
      0xd1, 0x1f, 0xf0, 0xe2, 0xdf, 0x3e, 0x48, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__Airspeed__TYPE_NAME[] = "px4/msg/Airspeed";

// Define type names, field names, and default values
static char px4__msg__Airspeed__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__Airspeed__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__Airspeed__FIELD_NAME__indicated_airspeed_m_s[] = "indicated_airspeed_m_s";
static char px4__msg__Airspeed__FIELD_NAME__true_airspeed_m_s[] = "true_airspeed_m_s";
static char px4__msg__Airspeed__FIELD_NAME__air_temperature_celsius[] = "air_temperature_celsius";
static char px4__msg__Airspeed__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field px4__msg__Airspeed__FIELDS[] = {
  {
    {px4__msg__Airspeed__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Airspeed__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Airspeed__FIELD_NAME__indicated_airspeed_m_s, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Airspeed__FIELD_NAME__true_airspeed_m_s, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Airspeed__FIELD_NAME__air_temperature_celsius, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Airspeed__FIELD_NAME__confidence, 10, 10},
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
px4__msg__Airspeed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__Airspeed__TYPE_NAME, 16, 16},
      {px4__msg__Airspeed__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                 # time since system start (microseconds)\n"
  "uint64 timestamp_sample\n"
  "\n"
  "float32 indicated_airspeed_m_s   # indicated airspeed in m/s\n"
  "\n"
  "float32 true_airspeed_m_s        # true filtered airspeed in m/s\n"
  "\n"
  "float32 air_temperature_celsius  # air temperature in degrees Celsius, -1000 if unknown\n"
  "\n"
  "float32 confidence               # confidence value from 0 to 1 for this sensor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__Airspeed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__Airspeed__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 396, 396},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__Airspeed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__Airspeed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
