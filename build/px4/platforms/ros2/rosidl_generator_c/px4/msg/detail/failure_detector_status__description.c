// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/failure_detector_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__FailureDetectorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x11, 0x36, 0x1c, 0x86, 0x9e, 0xa9, 0x75,
      0xa7, 0xc4, 0x83, 0x93, 0x59, 0x93, 0x23, 0x56,
      0x41, 0xb7, 0x6f, 0xd4, 0xc9, 0xb9, 0x68, 0xd5,
      0x6c, 0xee, 0x0f, 0x98, 0xaf, 0x47, 0x60, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__FailureDetectorStatus__TYPE_NAME[] = "px4/msg/FailureDetectorStatus";

// Define type names, field names, and default values
static char px4__msg__FailureDetectorStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__fd_roll[] = "fd_roll";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__fd_pitch[] = "fd_pitch";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__fd_alt[] = "fd_alt";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__fd_ext[] = "fd_ext";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__fd_arm_escs[] = "fd_arm_escs";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__fd_battery[] = "fd_battery";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__fd_imbalanced_prop[] = "fd_imbalanced_prop";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__fd_motor[] = "fd_motor";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__imbalanced_prop_metric[] = "imbalanced_prop_metric";
static char px4__msg__FailureDetectorStatus__FIELD_NAME__motor_failure_mask[] = "motor_failure_mask";

static rosidl_runtime_c__type_description__Field px4__msg__FailureDetectorStatus__FIELDS[] = {
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__fd_roll, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__fd_pitch, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__fd_alt, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__fd_ext, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__fd_arm_escs, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__fd_battery, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__fd_imbalanced_prop, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__fd_motor, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__imbalanced_prop_metric, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FailureDetectorStatus__FIELD_NAME__motor_failure_mask, 18, 18},
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
px4__msg__FailureDetectorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__FailureDetectorStatus__TYPE_NAME, 29, 29},
      {px4__msg__FailureDetectorStatus__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                    # time since system start (microseconds)\n"
  "\n"
  "# FailureDetector status\n"
  "bool fd_roll\n"
  "bool fd_pitch\n"
  "bool fd_alt\n"
  "bool fd_ext\n"
  "bool fd_arm_escs\n"
  "bool fd_battery\n"
  "bool fd_imbalanced_prop\n"
  "bool fd_motor\n"
  "\n"
  "float32 imbalanced_prop_metric      # Metric of the imbalanced propeller check (low-passed)\n"
  "uint16 motor_failure_mask           # Bit-mask with motor indices, indicating critical motor failures";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__FailureDetectorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__FailureDetectorStatus__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 420, 420},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__FailureDetectorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__FailureDetectorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
