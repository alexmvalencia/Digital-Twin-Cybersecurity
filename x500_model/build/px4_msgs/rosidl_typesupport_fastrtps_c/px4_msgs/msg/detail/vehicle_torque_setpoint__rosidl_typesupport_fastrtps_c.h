// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from px4_msgs:msg/VehicleTorqueSetpoint.idl
// generated code does not contain a copyright notice
#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TORQUE_SETPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TORQUE_SETPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_torque_setpoint__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_serialize_px4_msgs__msg__VehicleTorqueSetpoint(
  const px4_msgs__msg__VehicleTorqueSetpoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_deserialize_px4_msgs__msg__VehicleTorqueSetpoint(
  eprosima::fastcdr::Cdr &,
  px4_msgs__msg__VehicleTorqueSetpoint * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleTorqueSetpoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleTorqueSetpoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_serialize_key_px4_msgs__msg__VehicleTorqueSetpoint(
  const px4_msgs__msg__VehicleTorqueSetpoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_key_px4_msgs__msg__VehicleTorqueSetpoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_key_px4_msgs__msg__VehicleTorqueSetpoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleTorqueSetpoint)();

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TORQUE_SETPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
