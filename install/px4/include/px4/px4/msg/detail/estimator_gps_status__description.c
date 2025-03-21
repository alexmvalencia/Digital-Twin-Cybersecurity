// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/EstimatorGpsStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/estimator_gps_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__EstimatorGpsStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x98, 0x0b, 0xa4, 0xd2, 0x3c, 0xfa, 0xfe,
      0xef, 0x5c, 0x89, 0x16, 0x15, 0x29, 0xd0, 0xad,
      0xcd, 0xd9, 0x78, 0x98, 0x20, 0x6f, 0x46, 0x7b,
      0xaf, 0x97, 0xdc, 0x5b, 0x84, 0x29, 0xc7, 0x49,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__EstimatorGpsStatus__TYPE_NAME[] = "px4/msg/EstimatorGpsStatus";

// Define type names, field names, and default values
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__checks_passed[] = "checks_passed";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_gps_fix[] = "check_fail_gps_fix";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_min_sat_count[] = "check_fail_min_sat_count";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_pdop[] = "check_fail_max_pdop";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_horz_err[] = "check_fail_max_horz_err";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_vert_err[] = "check_fail_max_vert_err";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_spd_err[] = "check_fail_max_spd_err";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_horz_drift[] = "check_fail_max_horz_drift";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_vert_drift[] = "check_fail_max_vert_drift";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_horz_spd_err[] = "check_fail_max_horz_spd_err";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_vert_spd_err[] = "check_fail_max_vert_spd_err";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_spoofed_gps[] = "check_fail_spoofed_gps";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__position_drift_rate_horizontal_m_s[] = "position_drift_rate_horizontal_m_s";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__position_drift_rate_vertical_m_s[] = "position_drift_rate_vertical_m_s";
static char px4__msg__EstimatorGpsStatus__FIELD_NAME__filtered_horizontal_speed_m_s[] = "filtered_horizontal_speed_m_s";

static rosidl_runtime_c__type_description__Field px4__msg__EstimatorGpsStatus__FIELDS[] = {
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__checks_passed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_gps_fix, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_min_sat_count, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_pdop, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_horz_err, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_vert_err, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_spd_err, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_horz_drift, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_vert_drift, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_horz_spd_err, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_max_vert_spd_err, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__check_fail_spoofed_gps, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__position_drift_rate_horizontal_m_s, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__position_drift_rate_vertical_m_s, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorGpsStatus__FIELD_NAME__filtered_horizontal_speed_m_s, 29, 29},
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
px4__msg__EstimatorGpsStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__EstimatorGpsStatus__TYPE_NAME, 26, 26},
      {px4__msg__EstimatorGpsStatus__FIELDS, 17, 17},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                          # time since system start (microseconds)\n"
  "uint64 timestamp_sample                   # the timestamp of the raw data (microseconds)\n"
  "\n"
  "bool checks_passed\n"
  "\n"
  "bool check_fail_gps_fix          # 0 : insufficient fix type (no 3D solution)\n"
  "bool check_fail_min_sat_count    # 1 : minimum required sat count fail\n"
  "bool check_fail_max_pdop         # 2 : maximum allowed PDOP fail\n"
  "bool check_fail_max_horz_err     # 3 : maximum allowed horizontal position error fail\n"
  "bool check_fail_max_vert_err     # 4 : maximum allowed vertical position error fail\n"
  "bool check_fail_max_spd_err      # 5 : maximum allowed speed error fail\n"
  "bool check_fail_max_horz_drift   # 6 : maximum allowed horizontal position drift fail - requires stationary vehicle\n"
  "bool check_fail_max_vert_drift   # 7 : maximum allowed vertical position drift fail - requires stationary vehicle\n"
  "bool check_fail_max_horz_spd_err # 8 : maximum allowed horizontal speed fail - requires stationary vehicle\n"
  "bool check_fail_max_vert_spd_err # 9 : maximum allowed vertical velocity discrepancy fail\n"
  "bool check_fail_spoofed_gps      # 10 : GPS signal is spoofed\n"
  "\n"
  "float32 position_drift_rate_horizontal_m_s # Horizontal position rate magnitude (m/s)\n"
  "float32 position_drift_rate_vertical_m_s   # Vertical position rate magnitude (m/s)\n"
  "float32 filtered_horizontal_speed_m_s      # Filtered horizontal velocity magnitude (m/s)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__EstimatorGpsStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__EstimatorGpsStatus__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1399, 1399},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__EstimatorGpsStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__EstimatorGpsStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
