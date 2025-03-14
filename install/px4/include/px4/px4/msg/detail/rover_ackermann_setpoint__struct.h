// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverAckermannSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_ackermann_setpoint.h"


#ifndef PX4__MSG__DETAIL__ROVER_ACKERMANN_SETPOINT__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_ACKERMANN_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverAckermannSetpoint in the package px4.
typedef struct px4__msg__RoverAckermannSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Desired speed in body x direction. Positiv: forwards, Negativ: backwards
  float forward_speed_setpoint;
  /// [-1, 1] Desired normalized speed in body x direction. Positiv: forwards, Negativ: backwards
  float forward_speed_setpoint_normalized;
  /// Desired steering angle
  float steering_setpoint;
  /// [-1, 1] Desired normalized steering angle
  float steering_setpoint_normalized;
  /// Desired acceleration in body y direction. Positiv: right, Negativ: left.
  float lateral_acceleration_setpoint;
} px4__msg__RoverAckermannSetpoint;

// Struct for a sequence of px4__msg__RoverAckermannSetpoint.
typedef struct px4__msg__RoverAckermannSetpoint__Sequence
{
  px4__msg__RoverAckermannSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverAckermannSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_ACKERMANN_SETPOINT__STRUCT_H_
