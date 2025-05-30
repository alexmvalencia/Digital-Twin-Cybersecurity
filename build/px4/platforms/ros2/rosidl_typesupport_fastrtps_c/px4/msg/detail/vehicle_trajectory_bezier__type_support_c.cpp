// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4:msg/VehicleTrajectoryBezier.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/vehicle_trajectory_bezier__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4/msg/detail/vehicle_trajectory_bezier__struct.h"
#include "px4/msg/detail/vehicle_trajectory_bezier__functions.h"
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

#include "px4/msg/detail/trajectory_bezier__functions.h"  // control_points

// forward declare type support functions

bool cdr_serialize_px4__msg__TrajectoryBezier(
  const px4__msg__TrajectoryBezier * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_px4__msg__TrajectoryBezier(
  eprosima::fastcdr::Cdr & cdr,
  px4__msg__TrajectoryBezier * ros_message);

size_t get_serialized_size_px4__msg__TrajectoryBezier(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_px4__msg__TrajectoryBezier(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_px4__msg__TrajectoryBezier(
  const px4__msg__TrajectoryBezier * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_px4__msg__TrajectoryBezier(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_px4__msg__TrajectoryBezier(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, TrajectoryBezier)();


using _VehicleTrajectoryBezier__ros_msg_type = px4__msg__VehicleTrajectoryBezier;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_px4__msg__VehicleTrajectoryBezier(
  const px4__msg__VehicleTrajectoryBezier * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: control_points
  {
    size_t size = 5;
    auto array_ptr = ros_message->control_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_px4__msg__TrajectoryBezier(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bezier_order
  {
    cdr << ros_message->bezier_order;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_deserialize_px4__msg__VehicleTrajectoryBezier(
  eprosima::fastcdr::Cdr & cdr,
  px4__msg__VehicleTrajectoryBezier * ros_message)
{
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: control_points
  {
    size_t size = 5;
    auto array_ptr = ros_message->control_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_px4__msg__TrajectoryBezier(cdr, &array_ptr[i]);
    }
  }

  // Field name: bezier_order
  {
    cdr >> ros_message->bezier_order;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_px4__msg__VehicleTrajectoryBezier(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleTrajectoryBezier__ros_msg_type * ros_message = static_cast<const _VehicleTrajectoryBezier__ros_msg_type *>(untyped_ros_message);
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

  // Field name: control_points
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->control_points;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_px4__msg__TrajectoryBezier(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bezier_order
  {
    size_t item_size = sizeof(ros_message->bezier_order);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_px4__msg__VehicleTrajectoryBezier(
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

  // Field name: control_points
  {
    size_t array_size = 5;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_px4__msg__TrajectoryBezier(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bezier_order
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
    using DataType = px4__msg__VehicleTrajectoryBezier;
    is_plain =
      (
      offsetof(DataType, bezier_order) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_key_px4__msg__VehicleTrajectoryBezier(
  const px4__msg__VehicleTrajectoryBezier * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: control_points
  {
    size_t size = 5;
    auto array_ptr = ros_message->control_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_px4__msg__TrajectoryBezier(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bezier_order
  {
    cdr << ros_message->bezier_order;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_key_px4__msg__VehicleTrajectoryBezier(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleTrajectoryBezier__ros_msg_type * ros_message = static_cast<const _VehicleTrajectoryBezier__ros_msg_type *>(untyped_ros_message);
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

  // Field name: control_points
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->control_points;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_px4__msg__TrajectoryBezier(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bezier_order
  {
    size_t item_size = sizeof(ros_message->bezier_order);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_key_px4__msg__VehicleTrajectoryBezier(
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

  // Field name: control_points
  {
    size_t array_size = 5;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_px4__msg__TrajectoryBezier(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bezier_order
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
    using DataType = px4__msg__VehicleTrajectoryBezier;
    is_plain =
      (
      offsetof(DataType, bezier_order) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _VehicleTrajectoryBezier__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const px4__msg__VehicleTrajectoryBezier * ros_message = static_cast<const px4__msg__VehicleTrajectoryBezier *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_px4__msg__VehicleTrajectoryBezier(ros_message, cdr);
}

static bool _VehicleTrajectoryBezier__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  px4__msg__VehicleTrajectoryBezier * ros_message = static_cast<px4__msg__VehicleTrajectoryBezier *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_px4__msg__VehicleTrajectoryBezier(cdr, ros_message);
}

static uint32_t _VehicleTrajectoryBezier__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4__msg__VehicleTrajectoryBezier(
      untyped_ros_message, 0));
}

static size_t _VehicleTrajectoryBezier__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4__msg__VehicleTrajectoryBezier(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleTrajectoryBezier = {
  "px4::msg",
  "VehicleTrajectoryBezier",
  _VehicleTrajectoryBezier__cdr_serialize,
  _VehicleTrajectoryBezier__cdr_deserialize,
  _VehicleTrajectoryBezier__get_serialized_size,
  _VehicleTrajectoryBezier__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _VehicleTrajectoryBezier__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleTrajectoryBezier,
  get_message_typesupport_handle_function,
  &px4__msg__VehicleTrajectoryBezier__get_type_hash,
  &px4__msg__VehicleTrajectoryBezier__get_type_description,
  &px4__msg__VehicleTrajectoryBezier__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, VehicleTrajectoryBezier)() {
  return &_VehicleTrajectoryBezier__type_support;
}

#if defined(__cplusplus)
}
#endif
