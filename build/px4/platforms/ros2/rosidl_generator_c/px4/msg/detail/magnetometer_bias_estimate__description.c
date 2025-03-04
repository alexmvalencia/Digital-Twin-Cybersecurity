// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/MagnetometerBiasEstimate.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/magnetometer_bias_estimate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__MagnetometerBiasEstimate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x4c, 0x38, 0xd9, 0x41, 0x11, 0x1e, 0x66,
      0xd8, 0xec, 0xb4, 0x0a, 0xe8, 0x86, 0x10, 0x44,
      0xc9, 0x08, 0xb5, 0xad, 0x3a, 0x30, 0xd4, 0xdb,
      0x20, 0xb3, 0xa0, 0x9f, 0xf8, 0x3f, 0xf8, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__MagnetometerBiasEstimate__TYPE_NAME[] = "px4/msg/MagnetometerBiasEstimate";

// Define type names, field names, and default values
static char px4__msg__MagnetometerBiasEstimate__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__MagnetometerBiasEstimate__FIELD_NAME__bias_x[] = "bias_x";
static char px4__msg__MagnetometerBiasEstimate__FIELD_NAME__bias_y[] = "bias_y";
static char px4__msg__MagnetometerBiasEstimate__FIELD_NAME__bias_z[] = "bias_z";
static char px4__msg__MagnetometerBiasEstimate__FIELD_NAME__valid[] = "valid";
static char px4__msg__MagnetometerBiasEstimate__FIELD_NAME__stable[] = "stable";

static rosidl_runtime_c__type_description__Field px4__msg__MagnetometerBiasEstimate__FIELDS[] = {
  {
    {px4__msg__MagnetometerBiasEstimate__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MagnetometerBiasEstimate__FIELD_NAME__bias_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MagnetometerBiasEstimate__FIELD_NAME__bias_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MagnetometerBiasEstimate__FIELD_NAME__bias_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MagnetometerBiasEstimate__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MagnetometerBiasEstimate__FIELD_NAME__stable, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__MagnetometerBiasEstimate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__MagnetometerBiasEstimate__TYPE_NAME, 32, 32},
      {px4__msg__MagnetometerBiasEstimate__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                # time since system start (microseconds)\n"
  "\n"
  "float32[4] bias_x\\t\\t# estimated X-bias of all the sensors\n"
  "float32[4] bias_y\\t\\t# estimated Y-bias of all the sensors\n"
  "float32[4] bias_z\\t\\t# estimated Z-bias of all the sensors\n"
  "\n"
  "bool[4] valid\\t\\t\\t# true if the estimator has converged\n"
  "bool[4] stable";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__MagnetometerBiasEstimate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__MagnetometerBiasEstimate__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 315, 315},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__MagnetometerBiasEstimate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__MagnetometerBiasEstimate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
