// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from px4:msg/NormalizedUnsignedSetpoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "px4/msg/detail/normalized_unsigned_setpoint__struct.h"
#include "px4/msg/detail/normalized_unsigned_setpoint__type_support.h"
#include "px4/msg/detail/normalized_unsigned_setpoint__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace px4
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _NormalizedUnsignedSetpoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NormalizedUnsignedSetpoint_type_support_ids_t;

static const _NormalizedUnsignedSetpoint_type_support_ids_t _NormalizedUnsignedSetpoint_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NormalizedUnsignedSetpoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NormalizedUnsignedSetpoint_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NormalizedUnsignedSetpoint_type_support_symbol_names_t _NormalizedUnsignedSetpoint_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, NormalizedUnsignedSetpoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4, msg, NormalizedUnsignedSetpoint)),
  }
};

typedef struct _NormalizedUnsignedSetpoint_type_support_data_t
{
  void * data[2];
} _NormalizedUnsignedSetpoint_type_support_data_t;

static _NormalizedUnsignedSetpoint_type_support_data_t _NormalizedUnsignedSetpoint_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NormalizedUnsignedSetpoint_message_typesupport_map = {
  2,
  "px4",
  &_NormalizedUnsignedSetpoint_message_typesupport_ids.typesupport_identifier[0],
  &_NormalizedUnsignedSetpoint_message_typesupport_symbol_names.symbol_name[0],
  &_NormalizedUnsignedSetpoint_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NormalizedUnsignedSetpoint_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NormalizedUnsignedSetpoint_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &px4__msg__NormalizedUnsignedSetpoint__get_type_hash,
  &px4__msg__NormalizedUnsignedSetpoint__get_type_description,
  &px4__msg__NormalizedUnsignedSetpoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace px4

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, px4, msg, NormalizedUnsignedSetpoint)() {
  return &::px4::msg::rosidl_typesupport_c::NormalizedUnsignedSetpoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
