// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/ParameterResetRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/parameter_reset_request.h"


#ifndef PX4__MSG__DETAIL__PARAMETER_RESET_REQUEST__STRUCT_H_
#define PX4__MSG__DETAIL__PARAMETER_RESET_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4__msg__ParameterResetRequest__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/ParameterResetRequest in the package px4.
/**
  * ParameterResetRequest : Used by the primary to reset one or all parameter value(s) on the remote
 */
typedef struct px4__msg__ParameterResetRequest
{
  uint64_t timestamp;
  uint16_t parameter_index;
  /// If this is true then ignore parameter_index
  bool reset_all;
} px4__msg__ParameterResetRequest;

// Struct for a sequence of px4__msg__ParameterResetRequest.
typedef struct px4__msg__ParameterResetRequest__Sequence
{
  px4__msg__ParameterResetRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__ParameterResetRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__PARAMETER_RESET_REQUEST__STRUCT_H_
