// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4:msg/PowerMonitor.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/power_monitor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4/msg/detail/power_monitor__struct.h"
#include "px4/msg/detail/power_monitor__functions.h"
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


using _PowerMonitor__ros_msg_type = px4__msg__PowerMonitor;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_px4__msg__PowerMonitor(
  const px4__msg__PowerMonitor * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: voltage_v
  {
    cdr << ros_message->voltage_v;
  }

  // Field name: current_a
  {
    cdr << ros_message->current_a;
  }

  // Field name: power_w
  {
    cdr << ros_message->power_w;
  }

  // Field name: rconf
  {
    cdr << ros_message->rconf;
  }

  // Field name: rsv
  {
    cdr << ros_message->rsv;
  }

  // Field name: rbv
  {
    cdr << ros_message->rbv;
  }

  // Field name: rp
  {
    cdr << ros_message->rp;
  }

  // Field name: rc
  {
    cdr << ros_message->rc;
  }

  // Field name: rcal
  {
    cdr << ros_message->rcal;
  }

  // Field name: me
  {
    cdr << ros_message->me;
  }

  // Field name: al
  {
    cdr << ros_message->al;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_deserialize_px4__msg__PowerMonitor(
  eprosima::fastcdr::Cdr & cdr,
  px4__msg__PowerMonitor * ros_message)
{
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: voltage_v
  {
    cdr >> ros_message->voltage_v;
  }

  // Field name: current_a
  {
    cdr >> ros_message->current_a;
  }

  // Field name: power_w
  {
    cdr >> ros_message->power_w;
  }

  // Field name: rconf
  {
    cdr >> ros_message->rconf;
  }

  // Field name: rsv
  {
    cdr >> ros_message->rsv;
  }

  // Field name: rbv
  {
    cdr >> ros_message->rbv;
  }

  // Field name: rp
  {
    cdr >> ros_message->rp;
  }

  // Field name: rc
  {
    cdr >> ros_message->rc;
  }

  // Field name: rcal
  {
    cdr >> ros_message->rcal;
  }

  // Field name: me
  {
    cdr >> ros_message->me;
  }

  // Field name: al
  {
    cdr >> ros_message->al;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_px4__msg__PowerMonitor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PowerMonitor__ros_msg_type * ros_message = static_cast<const _PowerMonitor__ros_msg_type *>(untyped_ros_message);
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

  // Field name: voltage_v
  {
    size_t item_size = sizeof(ros_message->voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_a
  {
    size_t item_size = sizeof(ros_message->current_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: power_w
  {
    size_t item_size = sizeof(ros_message->power_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rconf
  {
    size_t item_size = sizeof(ros_message->rconf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rsv
  {
    size_t item_size = sizeof(ros_message->rsv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rbv
  {
    size_t item_size = sizeof(ros_message->rbv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rp
  {
    size_t item_size = sizeof(ros_message->rp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rc
  {
    size_t item_size = sizeof(ros_message->rc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rcal
  {
    size_t item_size = sizeof(ros_message->rcal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: me
  {
    size_t item_size = sizeof(ros_message->me);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: al
  {
    size_t item_size = sizeof(ros_message->al);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_px4__msg__PowerMonitor(
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

  // Field name: voltage_v
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: power_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rconf
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rsv
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rbv
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rcal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: me
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: al
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4__msg__PowerMonitor;
    is_plain =
      (
      offsetof(DataType, al) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_key_px4__msg__PowerMonitor(
  const px4__msg__PowerMonitor * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: voltage_v
  {
    cdr << ros_message->voltage_v;
  }

  // Field name: current_a
  {
    cdr << ros_message->current_a;
  }

  // Field name: power_w
  {
    cdr << ros_message->power_w;
  }

  // Field name: rconf
  {
    cdr << ros_message->rconf;
  }

  // Field name: rsv
  {
    cdr << ros_message->rsv;
  }

  // Field name: rbv
  {
    cdr << ros_message->rbv;
  }

  // Field name: rp
  {
    cdr << ros_message->rp;
  }

  // Field name: rc
  {
    cdr << ros_message->rc;
  }

  // Field name: rcal
  {
    cdr << ros_message->rcal;
  }

  // Field name: me
  {
    cdr << ros_message->me;
  }

  // Field name: al
  {
    cdr << ros_message->al;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_key_px4__msg__PowerMonitor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PowerMonitor__ros_msg_type * ros_message = static_cast<const _PowerMonitor__ros_msg_type *>(untyped_ros_message);
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

  // Field name: voltage_v
  {
    size_t item_size = sizeof(ros_message->voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_a
  {
    size_t item_size = sizeof(ros_message->current_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: power_w
  {
    size_t item_size = sizeof(ros_message->power_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rconf
  {
    size_t item_size = sizeof(ros_message->rconf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rsv
  {
    size_t item_size = sizeof(ros_message->rsv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rbv
  {
    size_t item_size = sizeof(ros_message->rbv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rp
  {
    size_t item_size = sizeof(ros_message->rp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rc
  {
    size_t item_size = sizeof(ros_message->rc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rcal
  {
    size_t item_size = sizeof(ros_message->rcal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: me
  {
    size_t item_size = sizeof(ros_message->me);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: al
  {
    size_t item_size = sizeof(ros_message->al);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_key_px4__msg__PowerMonitor(
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

  // Field name: voltage_v
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current_a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: power_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rconf
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rsv
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rbv
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: rcal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: me
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: al
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4__msg__PowerMonitor;
    is_plain =
      (
      offsetof(DataType, al) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PowerMonitor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const px4__msg__PowerMonitor * ros_message = static_cast<const px4__msg__PowerMonitor *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_px4__msg__PowerMonitor(ros_message, cdr);
}

static bool _PowerMonitor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  px4__msg__PowerMonitor * ros_message = static_cast<px4__msg__PowerMonitor *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_px4__msg__PowerMonitor(cdr, ros_message);
}

static uint32_t _PowerMonitor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4__msg__PowerMonitor(
      untyped_ros_message, 0));
}

static size_t _PowerMonitor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4__msg__PowerMonitor(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PowerMonitor = {
  "px4::msg",
  "PowerMonitor",
  _PowerMonitor__cdr_serialize,
  _PowerMonitor__cdr_deserialize,
  _PowerMonitor__get_serialized_size,
  _PowerMonitor__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PowerMonitor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PowerMonitor,
  get_message_typesupport_handle_function,
  &px4__msg__PowerMonitor__get_type_hash,
  &px4__msg__PowerMonitor__get_type_description,
  &px4__msg__PowerMonitor__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, PowerMonitor)() {
  return &_PowerMonitor__type_support;
}

#if defined(__cplusplus)
}
#endif
