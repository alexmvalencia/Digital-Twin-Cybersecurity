// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/LandingGearWheel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/landing_gear_wheel.h"


#ifndef PX4__MSG__DETAIL__LANDING_GEAR_WHEEL__STRUCT_H_
#define PX4__MSG__DETAIL__LANDING_GEAR_WHEEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LandingGearWheel in the package px4.
typedef struct px4__msg__LandingGearWheel
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// negative is turning left, positive turning right [-1, 1]
  float normalized_wheel_setpoint;
} px4__msg__LandingGearWheel;

// Struct for a sequence of px4__msg__LandingGearWheel.
typedef struct px4__msg__LandingGearWheel__Sequence
{
  px4__msg__LandingGearWheel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__LandingGearWheel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__LANDING_GEAR_WHEEL__STRUCT_H_
