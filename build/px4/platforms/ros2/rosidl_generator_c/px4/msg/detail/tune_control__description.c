// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/TuneControl.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/tune_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__TuneControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0x9f, 0x87, 0x7b, 0xb6, 0xf1, 0x27, 0xa8,
      0xde, 0x95, 0x94, 0x83, 0x58, 0x8c, 0x02, 0x5b,
      0xc0, 0x1e, 0x20, 0x7c, 0xfa, 0xf8, 0x35, 0x2a,
      0xdd, 0xbe, 0xd0, 0x0d, 0xa0, 0x1f, 0xdf, 0xdf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__TuneControl__TYPE_NAME[] = "px4/msg/TuneControl";

// Define type names, field names, and default values
static char px4__msg__TuneControl__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__TuneControl__FIELD_NAME__tune_id[] = "tune_id";
static char px4__msg__TuneControl__FIELD_NAME__tune_override[] = "tune_override";
static char px4__msg__TuneControl__FIELD_NAME__frequency[] = "frequency";
static char px4__msg__TuneControl__FIELD_NAME__duration[] = "duration";
static char px4__msg__TuneControl__FIELD_NAME__silence[] = "silence";
static char px4__msg__TuneControl__FIELD_NAME__volume[] = "volume";

static rosidl_runtime_c__type_description__Field px4__msg__TuneControl__FIELDS[] = {
  {
    {px4__msg__TuneControl__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TuneControl__FIELD_NAME__tune_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TuneControl__FIELD_NAME__tune_override, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TuneControl__FIELD_NAME__frequency, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TuneControl__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TuneControl__FIELD_NAME__silence, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TuneControl__FIELD_NAME__volume, 6, 6},
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
px4__msg__TuneControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__TuneControl__TYPE_NAME, 19, 19},
      {px4__msg__TuneControl__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used to control the tunes, when the tune_id is set to CUSTOM\n"
  "# then the frequency, duration are used otherwise those values are ignored.\n"
  "\n"
  "uint64 timestamp     # time since system start (microseconds)\n"
  "\n"
  "uint8 TUNE_ID_STOP                 = 0\n"
  "uint8 TUNE_ID_STARTUP              = 1\n"
  "uint8 TUNE_ID_ERROR                = 2\n"
  "uint8 TUNE_ID_NOTIFY_POSITIVE      = 3\n"
  "uint8 TUNE_ID_NOTIFY_NEUTRAL       = 4\n"
  "uint8 TUNE_ID_NOTIFY_NEGATIVE      = 5\n"
  "uint8 TUNE_ID_ARMING_WARNING       = 6\n"
  "uint8 TUNE_ID_BATTERY_WARNING_SLOW = 7\n"
  "uint8 TUNE_ID_BATTERY_WARNING_FAST = 8\n"
  "uint8 TUNE_ID_GPS_WARNING          = 9\n"
  "uint8 TUNE_ID_ARMING_FAILURE       = 10\n"
  "uint8 TUNE_ID_PARACHUTE_RELEASE    = 11\n"
  "uint8 TUNE_ID_SINGLE_BEEP          = 12\n"
  "uint8 TUNE_ID_HOME_SET             = 13\n"
  "uint8 TUNE_ID_SD_INIT              = 14\n"
  "uint8 TUNE_ID_SD_ERROR             = 15\n"
  "uint8 TUNE_ID_PROG_PX4IO           = 16\n"
  "uint8 TUNE_ID_PROG_PX4IO_OK        = 17\n"
  "uint8 TUNE_ID_PROG_PX4IO_ERR       = 18\n"
  "uint8 TUNE_ID_POWER_OFF            = 19\n"
  "uint8 NUMBER_OF_TUNES              = 20\n"
  "\n"
  "uint8 tune_id        # tune_id corresponding to TuneID::* from the tune_defaults.h in the tunes library\n"
  "bool tune_override   # if true the tune which is playing will be stopped and the new started\n"
  "uint16 frequency     # in Hz\n"
  "uint32 duration      # in us\n"
  "uint32 silence       # in us\n"
  "uint8 volume         # value between 0-100 if supported by backend\n"
  "\n"
  "uint8 VOLUME_LEVEL_MIN = 0\n"
  "uint8 VOLUME_LEVEL_DEFAULT = 20\n"
  "uint8 VOLUME_LEVEL_MAX = 100\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__TuneControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__TuneControl__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1518, 1518},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__TuneControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__TuneControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
