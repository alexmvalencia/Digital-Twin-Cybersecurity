// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverDifferentialSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_differential_setpoint.h"


#ifndef PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_SETPOINT__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverDifferentialSetpoint in the package px4.
typedef struct px4__msg__RoverDifferentialSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Desired forward speed for the rover
  float forward_speed_setpoint;
  /// [-1, 1] Normalized forward speed for the rover
  float forward_speed_setpoint_normalized;
  /// Desired yaw rate for the rover (Overriden by yaw controller if yaw_setpoint is used)
  float yaw_rate_setpoint;
  /// [-1, 1] Normalized speed difference between the left and right wheels
  float speed_diff_setpoint_normalized;
  /// Desired yaw (heading) for the rover
  float yaw_setpoint;
} px4__msg__RoverDifferentialSetpoint;

// Struct for a sequence of px4__msg__RoverDifferentialSetpoint.
typedef struct px4__msg__RoverDifferentialSetpoint__Sequence
{
  px4__msg__RoverDifferentialSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverDifferentialSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_SETPOINT__STRUCT_H_
