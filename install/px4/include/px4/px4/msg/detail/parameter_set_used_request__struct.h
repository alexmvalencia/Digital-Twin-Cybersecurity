// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/ParameterSetUsedRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/parameter_set_used_request.h"


#ifndef PX4__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__STRUCT_H_
#define PX4__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__STRUCT_H_

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
  px4__msg__ParameterSetUsedRequest__ORB_QUEUE_LENGTH = 64
};

/// Struct defined in msg/ParameterSetUsedRequest in the package px4.
/**
  * ParameterSetUsedRequest : Used by a remote to update the used flag for a parameter on the primary
 */
typedef struct px4__msg__ParameterSetUsedRequest
{
  uint64_t timestamp;
  uint16_t parameter_index;
} px4__msg__ParameterSetUsedRequest;

// Struct for a sequence of px4__msg__ParameterSetUsedRequest.
typedef struct px4__msg__ParameterSetUsedRequest__Sequence
{
  px4__msg__ParameterSetUsedRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__ParameterSetUsedRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__STRUCT_H_
