// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/OpenDroneIdArmStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/open_drone_id_arm_status.h"


#ifndef PX4__MSG__DETAIL__OPEN_DRONE_ID_ARM_STATUS__STRUCT_H_
#define PX4__MSG__DETAIL__OPEN_DRONE_ID_ARM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/OpenDroneIdArmStatus in the package px4.
typedef struct px4__msg__OpenDroneIdArmStatus
{
  uint64_t timestamp;
  uint8_t status;
  uint8_t error[50];
} px4__msg__OpenDroneIdArmStatus;

// Struct for a sequence of px4__msg__OpenDroneIdArmStatus.
typedef struct px4__msg__OpenDroneIdArmStatus__Sequence
{
  px4__msg__OpenDroneIdArmStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__OpenDroneIdArmStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__OPEN_DRONE_ID_ARM_STATUS__STRUCT_H_
