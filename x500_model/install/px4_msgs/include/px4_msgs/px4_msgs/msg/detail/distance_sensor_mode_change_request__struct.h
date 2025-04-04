// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DistanceSensorModeChangeRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/distance_sensor_mode_change_request.h"


#ifndef PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'REQUEST_OFF'.
enum
{
  px4_msgs__msg__DistanceSensorModeChangeRequest__REQUEST_OFF = 0
};

/// Constant 'REQUEST_ON'.
enum
{
  px4_msgs__msg__DistanceSensorModeChangeRequest__REQUEST_ON = 1
};

/// Struct defined in msg/DistanceSensorModeChangeRequest in the package px4_msgs.
typedef struct px4_msgs__msg__DistanceSensorModeChangeRequest
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// request to disable/enable the distance sensor
  uint8_t request_on_off;
} px4_msgs__msg__DistanceSensorModeChangeRequest;

// Struct for a sequence of px4_msgs__msg__DistanceSensorModeChangeRequest.
typedef struct px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence
{
  px4_msgs__msg__DistanceSensorModeChangeRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__STRUCT_H_
