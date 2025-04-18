// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4:msg/DistanceSensorModeChangeRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4/msg/detail/distance_sensor_mode_change_request__functions.h"
#include "px4/msg/detail/distance_sensor_mode_change_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DistanceSensorModeChangeRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4::msg::DistanceSensorModeChangeRequest(_init);
}

void DistanceSensorModeChangeRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4::msg::DistanceSensorModeChangeRequest *>(message_memory);
  typed_message->~DistanceSensorModeChangeRequest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DistanceSensorModeChangeRequest_message_member_array[2] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4::msg::DistanceSensorModeChangeRequest, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_on_off",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4::msg::DistanceSensorModeChangeRequest, request_on_off),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DistanceSensorModeChangeRequest_message_members = {
  "px4::msg",  // message namespace
  "DistanceSensorModeChangeRequest",  // message name
  2,  // number of fields
  sizeof(px4::msg::DistanceSensorModeChangeRequest),
  false,  // has_any_key_member_
  DistanceSensorModeChangeRequest_message_member_array,  // message members
  DistanceSensorModeChangeRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  DistanceSensorModeChangeRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DistanceSensorModeChangeRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DistanceSensorModeChangeRequest_message_members,
  get_message_typesupport_handle_function,
  &px4__msg__DistanceSensorModeChangeRequest__get_type_hash,
  &px4__msg__DistanceSensorModeChangeRequest__get_type_description,
  &px4__msg__DistanceSensorModeChangeRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4::msg::DistanceSensorModeChangeRequest>()
{
  return &::px4::msg::rosidl_typesupport_introspection_cpp::DistanceSensorModeChangeRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4, msg, DistanceSensorModeChangeRequest)() {
  return &::px4::msg::rosidl_typesupport_introspection_cpp::DistanceSensorModeChangeRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
