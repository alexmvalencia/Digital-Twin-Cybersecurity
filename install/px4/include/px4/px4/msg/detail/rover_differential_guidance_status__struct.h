// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverDifferentialGuidanceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_differential_guidance_status.h"


#ifndef PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_GUIDANCE_STATUS__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_GUIDANCE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverDifferentialGuidanceStatus in the package px4.
typedef struct px4__msg__RoverDifferentialGuidanceStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Lookahead distance of pure the pursuit controller
  float lookahead_distance;
  /// Heading error of the pure pursuit controller
  float heading_error_deg;
  /// Driving state of the rover [0: SPOT_TURNING, 1: DRIVING, 2: GOAL_REACHED]
  uint8_t state_machine;
} px4__msg__RoverDifferentialGuidanceStatus;

// Struct for a sequence of px4__msg__RoverDifferentialGuidanceStatus.
typedef struct px4__msg__RoverDifferentialGuidanceStatus__Sequence
{
  px4__msg__RoverDifferentialGuidanceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverDifferentialGuidanceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_DIFFERENTIAL_GUIDANCE_STATUS__STRUCT_H_
