// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GpioRequest.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/gpio_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GpioRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0xa5, 0x4a, 0x08, 0x85, 0x92, 0xb1, 0xee,
      0xc3, 0x17, 0xbe, 0xb7, 0x45, 0x75, 0x4c, 0x20,
      0x5d, 0x37, 0xad, 0x8b, 0x07, 0xdf, 0x41, 0xf8,
      0x12, 0xda, 0xe0, 0x02, 0x5e, 0x88, 0x65, 0x18,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GpioRequest__TYPE_NAME[] = "px4/msg/GpioRequest";

// Define type names, field names, and default values
static char px4__msg__GpioRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GpioRequest__FIELD_NAME__device_id[] = "device_id";

static rosidl_runtime_c__type_description__Field px4__msg__GpioRequest__FIELDS[] = {
  {
    {px4__msg__GpioRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpioRequest__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__GpioRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GpioRequest__TYPE_NAME, 19, 19},
      {px4__msg__GpioRequest__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request GPIO mask to be read\n"
  "\n"
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "uint32 device_id\\t\\t\\t# Device id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GpioRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GpioRequest__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 123, 123},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GpioRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GpioRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
