// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4:msg/RoverDifferentialGuidanceStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4/msg/detail/rover_differential_guidance_status__functions.h"
#include "px4/msg/detail/rover_differential_guidance_status__struct.hpp"
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

void RoverDifferentialGuidanceStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4::msg::RoverDifferentialGuidanceStatus(_init);
}

void RoverDifferentialGuidanceStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4::msg::RoverDifferentialGuidanceStatus *>(message_memory);
  typed_message->~RoverDifferentialGuidanceStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RoverDifferentialGuidanceStatus_message_member_array[4] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4::msg::RoverDifferentialGuidanceStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lookahead_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4::msg::RoverDifferentialGuidanceStatus, lookahead_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heading_error_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4::msg::RoverDifferentialGuidanceStatus, heading_error_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_machine",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4::msg::RoverDifferentialGuidanceStatus, state_machine),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RoverDifferentialGuidanceStatus_message_members = {
  "px4::msg",  // message namespace
  "RoverDifferentialGuidanceStatus",  // message name
  4,  // number of fields
  sizeof(px4::msg::RoverDifferentialGuidanceStatus),
  false,  // has_any_key_member_
  RoverDifferentialGuidanceStatus_message_member_array,  // message members
  RoverDifferentialGuidanceStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  RoverDifferentialGuidanceStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RoverDifferentialGuidanceStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RoverDifferentialGuidanceStatus_message_members,
  get_message_typesupport_handle_function,
  &px4__msg__RoverDifferentialGuidanceStatus__get_type_hash,
  &px4__msg__RoverDifferentialGuidanceStatus__get_type_description,
  &px4__msg__RoverDifferentialGuidanceStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4::msg::RoverDifferentialGuidanceStatus>()
{
  return &::px4::msg::rosidl_typesupport_introspection_cpp::RoverDifferentialGuidanceStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4, msg, RoverDifferentialGuidanceStatus)() {
  return &::px4::msg::rosidl_typesupport_introspection_cpp::RoverDifferentialGuidanceStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
