// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverDifferentialStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_differential_status.h"


#ifndef PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_STATUS__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverDifferentialStatus in the package px4.
typedef struct px4__msg__RoverDifferentialStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Measured speed in body x direction. Forwards: positiv, Backwards: negativ
  float measured_forward_speed;
  /// Speed setpoint after applying slew rate
  float adjusted_forward_speed_setpoint;
  /// Measured yaw
  float measured_yaw;
  /// Yaw setpoint after applying slew rate
  float adjusted_yaw_setpoint;
  /// Yaw rate setpoint output by the closed loop yaw controller
  float clyaw_yaw_rate_setpoint;
  /// Measured yaw rate
  float measured_yaw_rate;
  /// Yaw rate setpoint from the closed loop yaw controller
  float adjusted_yaw_rate_setpoint;
  /// Integral of the PID for the closed loop yaw controller
  float pid_yaw_integral;
  /// Integral of the PID for the closed loop yaw rate controller
  float pid_yaw_rate_integral;
  /// Integral of the PID for the closed loop speed controller
  float pid_throttle_integral;
} px4__msg__RoverDifferentialStatus;

// Struct for a sequence of px4__msg__RoverDifferentialStatus.
typedef struct px4__msg__RoverDifferentialStatus__Sequence
{
  px4__msg__RoverDifferentialStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverDifferentialStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_STATUS__STRUCT_H_
