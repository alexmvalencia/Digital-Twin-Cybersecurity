// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from px4:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "px4/msg/detail/sensor_gyro_fft__functions.h"
#include "px4/msg/detail/sensor_gyro_fft__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace px4
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _SensorGyroFft_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorGyroFft_type_support_ids_t;

static const _SensorGyroFft_type_support_ids_t _SensorGyroFft_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SensorGyroFft_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SensorGyroFft_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SensorGyroFft_type_support_symbol_names_t _SensorGyroFft_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4, msg, SensorGyroFft)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4, msg, SensorGyroFft)),
  }
};

typedef struct _SensorGyroFft_type_support_data_t
{
  void * data[2];
} _SensorGyroFft_type_support_data_t;

static _SensorGyroFft_type_support_data_t _SensorGyroFft_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SensorGyroFft_message_typesupport_map = {
  2,
  "px4",
  &_SensorGyroFft_message_typesupport_ids.typesupport_identifier[0],
  &_SensorGyroFft_message_typesupport_symbol_names.symbol_name[0],
  &_SensorGyroFft_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SensorGyroFft_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorGyroFft_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &px4__msg__SensorGyroFft__get_type_hash,
  &px4__msg__SensorGyroFft__get_type_description,
  &px4__msg__SensorGyroFft__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace px4

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4::msg::SensorGyroFft>()
{
  return &::px4::msg::rosidl_typesupport_cpp::SensorGyroFft_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, px4, msg, SensorGyroFft)() {
  return get_message_type_support_handle<px4::msg::SensorGyroFft>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
