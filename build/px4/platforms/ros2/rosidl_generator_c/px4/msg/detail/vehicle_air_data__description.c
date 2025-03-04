// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_air_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleAirData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0xae, 0x09, 0x03, 0xbb, 0xe6, 0x9d, 0x79,
      0xf1, 0x09, 0x4e, 0x34, 0x74, 0x90, 0xde, 0x7f,
      0xbc, 0x49, 0x6e, 0xf0, 0x79, 0x86, 0x64, 0x22,
      0x8d, 0x08, 0xb6, 0x6b, 0xb0, 0xd5, 0x0d, 0xf9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleAirData__TYPE_NAME[] = "px4/msg/VehicleAirData";

// Define type names, field names, and default values
static char px4__msg__VehicleAirData__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleAirData__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__VehicleAirData__FIELD_NAME__baro_device_id[] = "baro_device_id";
static char px4__msg__VehicleAirData__FIELD_NAME__baro_alt_meter[] = "baro_alt_meter";
static char px4__msg__VehicleAirData__FIELD_NAME__baro_temp_celcius[] = "baro_temp_celcius";
static char px4__msg__VehicleAirData__FIELD_NAME__baro_pressure_pa[] = "baro_pressure_pa";
static char px4__msg__VehicleAirData__FIELD_NAME__rho[] = "rho";
static char px4__msg__VehicleAirData__FIELD_NAME__eas2tas[] = "eas2tas";
static char px4__msg__VehicleAirData__FIELD_NAME__calibration_count[] = "calibration_count";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleAirData__FIELDS[] = {
  {
    {px4__msg__VehicleAirData__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__baro_device_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__baro_alt_meter, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__baro_temp_celcius, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__baro_pressure_pa, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__rho, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__eas2tas, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__calibration_count, 17, 17},
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
px4__msg__VehicleAirData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleAirData__TYPE_NAME, 22, 22},
      {px4__msg__VehicleAirData__FIELDS, 9, 9},
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
  "uint64 timestamp            # time since system start (microseconds)\n"
  "\n"
  "uint64 timestamp_sample     # the timestamp of the raw data (microseconds)\n"
  "\n"
  "uint32 baro_device_id       # unique device ID for the selected barometer\n"
  "\n"
  "float32 baro_alt_meter\\t\\t\\t# Altitude above MSL calculated from temperature compensated baro sensor data using an ISA corrected for sea level pressure SENS_BARO_QNH.\n"
  "float32 baro_temp_celcius\\t\\t# Temperature in degrees Celsius\n"
  "float32 baro_pressure_pa\\t\\t# Absolute pressure in Pascals\n"
  "\n"
  "float32 rho\\t\\t\\t\\t# air density\n"
  "float32 eas2tas         # equivalent airspeed to true airspeed conversion factor\n"
  "\n"
  "uint8 calibration_count     # Calibration changed counter. Monotonically increases whenever calibration changes.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleAirData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleAirData__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 728, 728},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleAirData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleAirData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
