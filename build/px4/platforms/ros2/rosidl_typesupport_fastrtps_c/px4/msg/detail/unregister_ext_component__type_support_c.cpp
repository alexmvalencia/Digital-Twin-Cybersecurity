// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4:msg/UnregisterExtComponent.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/unregister_ext_component__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4/msg/detail/unregister_ext_component__struct.h"
#include "px4/msg/detail/unregister_ext_component__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _UnregisterExtComponent__ros_msg_type = px4__msg__UnregisterExtComponent;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_px4__msg__UnregisterExtComponent(
  const px4__msg__UnregisterExtComponent * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: name
  {
    size_t size = 25;
    auto array_ptr = ros_message->name;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: arming_check_id
  {
    cdr << ros_message->arming_check_id;
  }

  // Field name: mode_id
  {
    cdr << ros_message->mode_id;
  }

  // Field name: mode_executor_id
  {
    cdr << ros_message->mode_executor_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_deserialize_px4__msg__UnregisterExtComponent(
  eprosima::fastcdr::Cdr & cdr,
  px4__msg__UnregisterExtComponent * ros_message)
{
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: name
  {
    size_t size = 25;
    auto array_ptr = ros_message->name;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: arming_check_id
  {
    cdr >> ros_message->arming_check_id;
  }

  // Field name: mode_id
  {
    cdr >> ros_message->mode_id;
  }

  // Field name: mode_executor_id
  {
    cdr >> ros_message->mode_executor_id;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_px4__msg__UnregisterExtComponent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UnregisterExtComponent__ros_msg_type * ros_message = static_cast<const _UnregisterExtComponent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: name
  {
    size_t array_size = 25;
    auto array_ptr = ros_message->name;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: arming_check_id
  {
    size_t item_size = sizeof(ros_message->arming_check_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_id
  {
    size_t item_size = sizeof(ros_message->mode_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_executor_id
  {
    size_t item_size = sizeof(ros_message->mode_executor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_px4__msg__UnregisterExtComponent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: name
  {
    size_t array_size = 25;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: arming_check_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_executor_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4__msg__UnregisterExtComponent;
    is_plain =
      (
      offsetof(DataType, mode_executor_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_key_px4__msg__UnregisterExtComponent(
  const px4__msg__UnregisterExtComponent * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: name
  {
    size_t size = 25;
    auto array_ptr = ros_message->name;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: arming_check_id
  {
    cdr << ros_message->arming_check_id;
  }

  // Field name: mode_id
  {
    cdr << ros_message->mode_id;
  }

  // Field name: mode_executor_id
  {
    cdr << ros_message->mode_executor_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_key_px4__msg__UnregisterExtComponent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UnregisterExtComponent__ros_msg_type * ros_message = static_cast<const _UnregisterExtComponent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: name
  {
    size_t array_size = 25;
    auto array_ptr = ros_message->name;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: arming_check_id
  {
    size_t item_size = sizeof(ros_message->arming_check_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_id
  {
    size_t item_size = sizeof(ros_message->mode_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_executor_id
  {
    size_t item_size = sizeof(ros_message->mode_executor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_key_px4__msg__UnregisterExtComponent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: name
  {
    size_t array_size = 25;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: arming_check_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_executor_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4__msg__UnregisterExtComponent;
    is_plain =
      (
      offsetof(DataType, mode_executor_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _UnregisterExtComponent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const px4__msg__UnregisterExtComponent * ros_message = static_cast<const px4__msg__UnregisterExtComponent *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_px4__msg__UnregisterExtComponent(ros_message, cdr);
}

static bool _UnregisterExtComponent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  px4__msg__UnregisterExtComponent * ros_message = static_cast<px4__msg__UnregisterExtComponent *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_px4__msg__UnregisterExtComponent(cdr, ros_message);
}

static uint32_t _UnregisterExtComponent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4__msg__UnregisterExtComponent(
      untyped_ros_message, 0));
}

static size_t _UnregisterExtComponent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4__msg__UnregisterExtComponent(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UnregisterExtComponent = {
  "px4::msg",
  "UnregisterExtComponent",
  _UnregisterExtComponent__cdr_serialize,
  _UnregisterExtComponent__cdr_deserialize,
  _UnregisterExtComponent__get_serialized_size,
  _UnregisterExtComponent__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UnregisterExtComponent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UnregisterExtComponent,
  get_message_typesupport_handle_function,
  &px4__msg__UnregisterExtComponent__get_type_hash,
  &px4__msg__UnregisterExtComponent__get_type_description,
  &px4__msg__UnregisterExtComponent__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, UnregisterExtComponent)() {
  return &_UnregisterExtComponent__type_support;
}

#if defined(__cplusplus)
}
#endif
