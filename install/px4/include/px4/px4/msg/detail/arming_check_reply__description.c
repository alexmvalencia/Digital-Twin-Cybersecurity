// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/arming_check_reply__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ArmingCheckReply__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0x5a, 0xaa, 0x1e, 0x21, 0xa0, 0x89, 0x70,
      0x30, 0x71, 0x90, 0x5d, 0x57, 0x17, 0x12, 0x9a,
      0x9d, 0xd6, 0x55, 0x56, 0x25, 0x5e, 0x6a, 0x4e,
      0x8a, 0x4f, 0xf6, 0x9a, 0x53, 0x35, 0xa1, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "px4/msg/detail/event__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t px4__msg__Event__EXPECTED_HASH = {1, {
    0x97, 0x88, 0x55, 0xc1, 0xf8, 0xb6, 0x5a, 0x4a,
    0xeb, 0xfd, 0xe8, 0xc5, 0x63, 0x73, 0x8d, 0x33,
    0x29, 0xb2, 0x7e, 0xc6, 0x8e, 0x0e, 0xb9, 0xc3,
    0x87, 0x78, 0x45, 0x5b, 0x61, 0x6d, 0xcb, 0xca,
  }};
#endif

static char px4__msg__ArmingCheckReply__TYPE_NAME[] = "px4/msg/ArmingCheckReply";
static char px4__msg__Event__TYPE_NAME[] = "px4/msg/Event";

// Define type names, field names, and default values
static char px4__msg__ArmingCheckReply__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ArmingCheckReply__FIELD_NAME__request_id[] = "request_id";
static char px4__msg__ArmingCheckReply__FIELD_NAME__registration_id[] = "registration_id";
static char px4__msg__ArmingCheckReply__FIELD_NAME__health_component_index[] = "health_component_index";
static char px4__msg__ArmingCheckReply__FIELD_NAME__health_component_is_present[] = "health_component_is_present";
static char px4__msg__ArmingCheckReply__FIELD_NAME__health_component_warning[] = "health_component_warning";
static char px4__msg__ArmingCheckReply__FIELD_NAME__health_component_error[] = "health_component_error";
static char px4__msg__ArmingCheckReply__FIELD_NAME__can_arm_and_run[] = "can_arm_and_run";
static char px4__msg__ArmingCheckReply__FIELD_NAME__num_events[] = "num_events";
static char px4__msg__ArmingCheckReply__FIELD_NAME__events[] = "events";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_angular_velocity[] = "mode_req_angular_velocity";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_attitude[] = "mode_req_attitude";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_local_alt[] = "mode_req_local_alt";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_local_position[] = "mode_req_local_position";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_local_position_relaxed[] = "mode_req_local_position_relaxed";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_global_position[] = "mode_req_global_position";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_mission[] = "mode_req_mission";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_home_position[] = "mode_req_home_position";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_prevent_arming[] = "mode_req_prevent_arming";
static char px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_manual_control[] = "mode_req_manual_control";

static rosidl_runtime_c__type_description__Field px4__msg__ArmingCheckReply__FIELDS[] = {
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__request_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__registration_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__health_component_index, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__health_component_is_present, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__health_component_warning, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__health_component_error, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__can_arm_and_run, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__num_events, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__events, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      5,
      0,
      {px4__msg__Event__TYPE_NAME, 13, 13},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_angular_velocity, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_attitude, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_local_alt, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_local_position, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_local_position_relaxed, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_global_position, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_mission, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_home_position, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_prevent_arming, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ArmingCheckReply__FIELD_NAME__mode_req_manual_control, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription px4__msg__ArmingCheckReply__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {px4__msg__Event__TYPE_NAME, 13, 13},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__ArmingCheckReply__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ArmingCheckReply__TYPE_NAME, 24, 24},
      {px4__msg__ArmingCheckReply__FIELDS, 20, 20},
    },
    {px4__msg__ArmingCheckReply__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&px4__msg__Event__EXPECTED_HASH, px4__msg__Event__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = px4__msg__Event__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "uint8 request_id\n"
  "uint8 registration_id\n"
  "\n"
  "uint8 HEALTH_COMPONENT_INDEX_NONE = 0\n"
  "uint8 HEALTH_COMPONENT_INDEX_AVOIDANCE = 19\n"
  "\n"
  "uint8 health_component_index      # HEALTH_COMPONENT_INDEX_*\n"
  "bool health_component_is_present\n"
  "bool health_component_warning\n"
  "bool health_component_error\n"
  "\n"
  "bool can_arm_and_run              # whether arming is possible, and if it's a navigation mode, if it can run\n"
  "\n"
  "uint8 num_events\n"
  "\n"
  "Event[5] events\n"
  "\n"
  "# Mode requirements\n"
  "bool mode_req_angular_velocity\n"
  "bool mode_req_attitude\n"
  "bool mode_req_local_alt\n"
  "bool mode_req_local_position\n"
  "bool mode_req_local_position_relaxed\n"
  "bool mode_req_global_position\n"
  "bool mode_req_mission\n"
  "bool mode_req_home_position\n"
  "bool mode_req_prevent_arming\n"
  "bool mode_req_manual_control\n"
  "\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ArmingCheckReply__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ArmingCheckReply__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 839, 839},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ArmingCheckReply__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ArmingCheckReply__get_individual_type_description_source(NULL),
    sources[1] = *px4__msg__Event__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
