// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/autotune_attitude_control_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4/msg/detail/autotune_attitude_control_status__struct.h"
#include "px4/msg/detail/autotune_attitude_control_status__functions.h"
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


using _AutotuneAttitudeControlStatus__ros_msg_type = px4__msg__AutotuneAttitudeControlStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_px4__msg__AutotuneAttitudeControlStatus(
  const px4__msg__AutotuneAttitudeControlStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: coeff
  {
    size_t size = 5;
    auto array_ptr = ros_message->coeff;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: coeff_var
  {
    size_t size = 5;
    auto array_ptr = ros_message->coeff_var;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fitness
  {
    cdr << ros_message->fitness;
  }

  // Field name: innov
  {
    cdr << ros_message->innov;
  }

  // Field name: dt_model
  {
    cdr << ros_message->dt_model;
  }

  // Field name: kc
  {
    cdr << ros_message->kc;
  }

  // Field name: ki
  {
    cdr << ros_message->ki;
  }

  // Field name: kd
  {
    cdr << ros_message->kd;
  }

  // Field name: kff
  {
    cdr << ros_message->kff;
  }

  // Field name: att_p
  {
    cdr << ros_message->att_p;
  }

  // Field name: rate_sp
  {
    size_t size = 3;
    auto array_ptr = ros_message->rate_sp;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: u_filt
  {
    cdr << ros_message->u_filt;
  }

  // Field name: y_filt
  {
    cdr << ros_message->y_filt;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_deserialize_px4__msg__AutotuneAttitudeControlStatus(
  eprosima::fastcdr::Cdr & cdr,
  px4__msg__AutotuneAttitudeControlStatus * ros_message)
{
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: coeff
  {
    size_t size = 5;
    auto array_ptr = ros_message->coeff;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: coeff_var
  {
    size_t size = 5;
    auto array_ptr = ros_message->coeff_var;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: fitness
  {
    cdr >> ros_message->fitness;
  }

  // Field name: innov
  {
    cdr >> ros_message->innov;
  }

  // Field name: dt_model
  {
    cdr >> ros_message->dt_model;
  }

  // Field name: kc
  {
    cdr >> ros_message->kc;
  }

  // Field name: ki
  {
    cdr >> ros_message->ki;
  }

  // Field name: kd
  {
    cdr >> ros_message->kd;
  }

  // Field name: kff
  {
    cdr >> ros_message->kff;
  }

  // Field name: att_p
  {
    cdr >> ros_message->att_p;
  }

  // Field name: rate_sp
  {
    size_t size = 3;
    auto array_ptr = ros_message->rate_sp;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: u_filt
  {
    cdr >> ros_message->u_filt;
  }

  // Field name: y_filt
  {
    cdr >> ros_message->y_filt;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_px4__msg__AutotuneAttitudeControlStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AutotuneAttitudeControlStatus__ros_msg_type * ros_message = static_cast<const _AutotuneAttitudeControlStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: coeff
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->coeff;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: coeff_var
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->coeff_var;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fitness
  {
    size_t item_size = sizeof(ros_message->fitness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: innov
  {
    size_t item_size = sizeof(ros_message->innov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dt_model
  {
    size_t item_size = sizeof(ros_message->dt_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kc
  {
    size_t item_size = sizeof(ros_message->kc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ki
  {
    size_t item_size = sizeof(ros_message->ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kd
  {
    size_t item_size = sizeof(ros_message->kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kff
  {
    size_t item_size = sizeof(ros_message->kff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: att_p
  {
    size_t item_size = sizeof(ros_message->att_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rate_sp
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->rate_sp;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: u_filt
  {
    size_t item_size = sizeof(ros_message->u_filt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y_filt
  {
    size_t item_size = sizeof(ros_message->y_filt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_px4__msg__AutotuneAttitudeControlStatus(
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

  // Field name: coeff
  {
    size_t array_size = 5;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: coeff_var
  {
    size_t array_size = 5;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fitness
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: innov
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: dt_model
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: kc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ki
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: kd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: kff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: att_p
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rate_sp
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: u_filt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: y_filt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: state
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
    using DataType = px4__msg__AutotuneAttitudeControlStatus;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_key_px4__msg__AutotuneAttitudeControlStatus(
  const px4__msg__AutotuneAttitudeControlStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: coeff
  {
    size_t size = 5;
    auto array_ptr = ros_message->coeff;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: coeff_var
  {
    size_t size = 5;
    auto array_ptr = ros_message->coeff_var;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fitness
  {
    cdr << ros_message->fitness;
  }

  // Field name: innov
  {
    cdr << ros_message->innov;
  }

  // Field name: dt_model
  {
    cdr << ros_message->dt_model;
  }

  // Field name: kc
  {
    cdr << ros_message->kc;
  }

  // Field name: ki
  {
    cdr << ros_message->ki;
  }

  // Field name: kd
  {
    cdr << ros_message->kd;
  }

  // Field name: kff
  {
    cdr << ros_message->kff;
  }

  // Field name: att_p
  {
    cdr << ros_message->att_p;
  }

  // Field name: rate_sp
  {
    size_t size = 3;
    auto array_ptr = ros_message->rate_sp;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: u_filt
  {
    cdr << ros_message->u_filt;
  }

  // Field name: y_filt
  {
    cdr << ros_message->y_filt;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_key_px4__msg__AutotuneAttitudeControlStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AutotuneAttitudeControlStatus__ros_msg_type * ros_message = static_cast<const _AutotuneAttitudeControlStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: coeff
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->coeff;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: coeff_var
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->coeff_var;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fitness
  {
    size_t item_size = sizeof(ros_message->fitness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: innov
  {
    size_t item_size = sizeof(ros_message->innov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dt_model
  {
    size_t item_size = sizeof(ros_message->dt_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kc
  {
    size_t item_size = sizeof(ros_message->kc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ki
  {
    size_t item_size = sizeof(ros_message->ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kd
  {
    size_t item_size = sizeof(ros_message->kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kff
  {
    size_t item_size = sizeof(ros_message->kff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: att_p
  {
    size_t item_size = sizeof(ros_message->att_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rate_sp
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->rate_sp;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: u_filt
  {
    size_t item_size = sizeof(ros_message->u_filt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y_filt
  {
    size_t item_size = sizeof(ros_message->y_filt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_key_px4__msg__AutotuneAttitudeControlStatus(
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

  // Field name: coeff
  {
    size_t array_size = 5;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: coeff_var
  {
    size_t array_size = 5;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fitness
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: innov
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: dt_model
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: kc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ki
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: kd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: kff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: att_p
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rate_sp
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: u_filt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: y_filt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: state
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
    using DataType = px4__msg__AutotuneAttitudeControlStatus;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _AutotuneAttitudeControlStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const px4__msg__AutotuneAttitudeControlStatus * ros_message = static_cast<const px4__msg__AutotuneAttitudeControlStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_px4__msg__AutotuneAttitudeControlStatus(ros_message, cdr);
}

static bool _AutotuneAttitudeControlStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  px4__msg__AutotuneAttitudeControlStatus * ros_message = static_cast<px4__msg__AutotuneAttitudeControlStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_px4__msg__AutotuneAttitudeControlStatus(cdr, ros_message);
}

static uint32_t _AutotuneAttitudeControlStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4__msg__AutotuneAttitudeControlStatus(
      untyped_ros_message, 0));
}

static size_t _AutotuneAttitudeControlStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4__msg__AutotuneAttitudeControlStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AutotuneAttitudeControlStatus = {
  "px4::msg",
  "AutotuneAttitudeControlStatus",
  _AutotuneAttitudeControlStatus__cdr_serialize,
  _AutotuneAttitudeControlStatus__cdr_deserialize,
  _AutotuneAttitudeControlStatus__get_serialized_size,
  _AutotuneAttitudeControlStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AutotuneAttitudeControlStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AutotuneAttitudeControlStatus,
  get_message_typesupport_handle_function,
  &px4__msg__AutotuneAttitudeControlStatus__get_type_hash,
  &px4__msg__AutotuneAttitudeControlStatus__get_type_description,
  &px4__msg__AutotuneAttitudeControlStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, AutotuneAttitudeControlStatus)() {
  return &_AutotuneAttitudeControlStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
