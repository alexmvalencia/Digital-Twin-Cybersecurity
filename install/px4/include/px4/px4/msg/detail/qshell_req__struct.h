// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/QshellReq.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/qshell_req.h"


#ifndef PX4__MSG__DETAIL__QSHELL_REQ__STRUCT_H_
#define PX4__MSG__DETAIL__QSHELL_REQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MAX_STRLEN'.
enum
{
  px4__msg__QshellReq__MAX_STRLEN = 100ul
};

/// Struct defined in msg/QshellReq in the package px4.
typedef struct px4__msg__QshellReq
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t cmd[100];
  uint32_t strlen;
  uint32_t request_sequence;
} px4__msg__QshellReq;

// Struct for a sequence of px4__msg__QshellReq.
typedef struct px4__msg__QshellReq__Sequence
{
  px4__msg__QshellReq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__QshellReq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__QSHELL_REQ__STRUCT_H_
