// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4:msg/EscStatus.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/esc_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4/msg/detail/esc_status__functions.h"
#include "px4/msg/detail/esc_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace px4
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const px4::msg::EscReport &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  px4::msg::EscReport &);
size_t get_serialized_size(
  const px4::msg::EscReport &,
  size_t current_alignment);
size_t
max_serialized_size_EscReport(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const px4::msg::EscReport &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const px4::msg::EscReport &,
  size_t current_alignment);
size_t
max_serialized_size_key_EscReport(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace px4


namespace px4
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
cdr_serialize(
  const px4::msg::EscStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;

  // Member: counter
  cdr << ros_message.counter;

  // Member: esc_count
  cdr << ros_message.esc_count;

  // Member: esc_connectiontype
  cdr << ros_message.esc_connectiontype;

  // Member: esc_online_flags
  cdr << ros_message.esc_online_flags;

  // Member: esc_armed_flags
  cdr << ros_message.esc_armed_flags;

  // Member: esc
  {
    for (size_t i = 0; i < 8; i++) {
      px4::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.esc[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4::msg::EscStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: counter
  cdr >> ros_message.counter;

  // Member: esc_count
  cdr >> ros_message.esc_count;

  // Member: esc_connectiontype
  cdr >> ros_message.esc_connectiontype;

  // Member: esc_online_flags
  cdr >> ros_message.esc_online_flags;

  // Member: esc_armed_flags
  cdr >> ros_message.esc_armed_flags;

  // Member: esc
  {
    for (size_t i = 0; i < 8; i++) {
      px4::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.esc[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
get_serialized_size(
  const px4::msg::EscStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: counter
  {
    size_t item_size = sizeof(ros_message.counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc_count
  {
    size_t item_size = sizeof(ros_message.esc_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc_connectiontype
  {
    size_t item_size = sizeof(ros_message.esc_connectiontype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc_online_flags
  {
    size_t item_size = sizeof(ros_message.esc_online_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc_armed_flags
  {
    size_t item_size = sizeof(ros_message.esc_armed_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        px4::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.esc[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
max_serialized_size_EscStatus(
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

  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: esc_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: esc_connectiontype
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: esc_online_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: esc_armed_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: esc
  {
    size_t array_size = 8;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        px4::msg::typesupport_fastrtps_cpp::max_serialized_size_EscReport(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4::msg::EscStatus;
    is_plain =
      (
      offsetof(DataType, esc) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
cdr_serialize_key(
  const px4::msg::EscStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;

  // Member: counter
  cdr << ros_message.counter;

  // Member: esc_count
  cdr << ros_message.esc_count;

  // Member: esc_connectiontype
  cdr << ros_message.esc_connectiontype;

  // Member: esc_online_flags
  cdr << ros_message.esc_online_flags;

  // Member: esc_armed_flags
  cdr << ros_message.esc_armed_flags;

  // Member: esc
  {
    for (size_t i = 0; i < 8; i++) {
      px4::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.esc[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
get_serialized_size_key(
  const px4::msg::EscStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: counter
  {
    size_t item_size = sizeof(ros_message.counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc_count
  {
    size_t item_size = sizeof(ros_message.esc_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc_connectiontype
  {
    size_t item_size = sizeof(ros_message.esc_connectiontype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc_online_flags
  {
    size_t item_size = sizeof(ros_message.esc_online_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc_armed_flags
  {
    size_t item_size = sizeof(ros_message.esc_armed_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esc
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        px4::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.esc[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
max_serialized_size_key_EscStatus(
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

  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: esc_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esc_connectiontype
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esc_online_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esc_armed_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esc
  {
    size_t array_size = 8;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        px4::msg::typesupport_fastrtps_cpp::max_serialized_size_key_EscReport(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4::msg::EscStatus;
    is_plain =
      (
      offsetof(DataType, esc) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _EscStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4::msg::EscStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EscStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4::msg::EscStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EscStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4::msg::EscStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EscStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EscStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EscStatus__callbacks = {
  "px4::msg",
  "EscStatus",
  _EscStatus__cdr_serialize,
  _EscStatus__cdr_deserialize,
  _EscStatus__get_serialized_size,
  _EscStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _EscStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EscStatus__callbacks,
  get_message_typesupport_handle_function,
  &px4__msg__EscStatus__get_type_hash,
  &px4__msg__EscStatus__get_type_description,
  &px4__msg__EscStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4
const rosidl_message_type_support_t *
get_message_type_support_handle<px4::msg::EscStatus>()
{
  return &px4::msg::typesupport_fastrtps_cpp::_EscStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4, msg, EscStatus)() {
  return &px4::msg::typesupport_fastrtps_cpp::_EscStatus__handle;
}

#ifdef __cplusplus
}
#endif
