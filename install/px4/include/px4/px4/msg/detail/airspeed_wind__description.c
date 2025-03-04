// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/AirspeedWind.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/airspeed_wind__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__AirspeedWind__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0x36, 0x85, 0xf6, 0xe4, 0x7e, 0x52, 0x8e,
      0x05, 0xcf, 0x27, 0xa8, 0x3a, 0xda, 0x09, 0x33,
      0x69, 0xbf, 0x94, 0x9f, 0x73, 0x24, 0x4e, 0xbd,
      0x77, 0xc2, 0x3c, 0xc1, 0x29, 0xb0, 0xe0, 0x6e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__AirspeedWind__TYPE_NAME[] = "px4/msg/AirspeedWind";

// Define type names, field names, and default values
static char px4__msg__AirspeedWind__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__AirspeedWind__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__AirspeedWind__FIELD_NAME__windspeed_north[] = "windspeed_north";
static char px4__msg__AirspeedWind__FIELD_NAME__windspeed_east[] = "windspeed_east";
static char px4__msg__AirspeedWind__FIELD_NAME__variance_north[] = "variance_north";
static char px4__msg__AirspeedWind__FIELD_NAME__variance_east[] = "variance_east";
static char px4__msg__AirspeedWind__FIELD_NAME__tas_innov[] = "tas_innov";
static char px4__msg__AirspeedWind__FIELD_NAME__tas_innov_var[] = "tas_innov_var";
static char px4__msg__AirspeedWind__FIELD_NAME__tas_scale_raw[] = "tas_scale_raw";
static char px4__msg__AirspeedWind__FIELD_NAME__tas_scale_raw_var[] = "tas_scale_raw_var";
static char px4__msg__AirspeedWind__FIELD_NAME__tas_scale_validated[] = "tas_scale_validated";
static char px4__msg__AirspeedWind__FIELD_NAME__beta_innov[] = "beta_innov";
static char px4__msg__AirspeedWind__FIELD_NAME__beta_innov_var[] = "beta_innov_var";
static char px4__msg__AirspeedWind__FIELD_NAME__source[] = "source";

static rosidl_runtime_c__type_description__Field px4__msg__AirspeedWind__FIELDS[] = {
  {
    {px4__msg__AirspeedWind__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__windspeed_north, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__windspeed_east, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__variance_north, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__variance_east, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__tas_innov, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__tas_innov_var, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__tas_scale_raw, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__tas_scale_raw_var, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__tas_scale_validated, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__beta_innov, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__beta_innov_var, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedWind__FIELD_NAME__source, 6, 6},
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
px4__msg__AirspeedWind__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__AirspeedWind__TYPE_NAME, 20, 20},
      {px4__msg__AirspeedWind__FIELDS, 14, 14},
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
  "uint64 timestamp_sample         # the timestamp of the raw data (microseconds)\n"
  "\n"
  "float32 windspeed_north\\t\\t# Wind component in north / X direction (m/sec)\n"
  "float32 windspeed_east\\t\\t# Wind component in east / Y direction (m/sec)\n"
  "\n"
  "float32 variance_north\\t\\t# Wind estimate error variance in north / X direction (m/sec)**2 - set to zero (no uncertainty) if not estimated\n"
  "float32 variance_east\\t\\t# Wind estimate error variance in east / Y direction (m/sec)**2 - set to zero (no uncertainty) if not estimated\n"
  "\n"
  "float32 tas_innov \\t\\t# True airspeed innovation\n"
  "float32 tas_innov_var \\t\\t# True airspeed innovation variance\n"
  "\n"
  "float32 tas_scale_raw \\t\\t# Estimated true airspeed scale factor (not validated)\n"
  "float32 tas_scale_raw_var \\t# True airspeed scale factor variance\n"
  "\n"
  "float32 tas_scale_validated\\t# Estimated true airspeed scale factor after validation\n"
  "\n"
  "float32 beta_innov \\t\\t# Sideslip measurement innovation\n"
  "float32 beta_innov_var \\t\\t# Sideslip measurement innovation variance\n"
  "\n"
  "uint8 source\\t\\t\\t# source of wind estimate\n"
  "\n"
  "uint8 SOURCE_AS_BETA_ONLY = 0\\t# wind estimate only based on synthetic sideslip fusion\n"
  "uint8 SOURCE_AS_SENSOR_1 = 1\\t# combined synthetic sideslip and airspeed fusion (data from first airspeed sensor)\n"
  "uint8 SOURCE_AS_SENSOR_2 = 2\\t# combined synthetic sideslip and airspeed fusion (data from second airspeed sensor)\n"
  "uint8 SOURCE_AS_SENSOR_3 = 3\\t# combined synthetic sideslip and airspeed fusion (data from third airspeed sensor)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__AirspeedWind__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__AirspeedWind__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1487, 1487},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__AirspeedWind__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__AirspeedWind__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
