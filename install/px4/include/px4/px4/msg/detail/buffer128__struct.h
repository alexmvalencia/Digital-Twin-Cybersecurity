// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/Buffer128.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/buffer128.h"


#ifndef PX4__MSG__DETAIL__BUFFER128__STRUCT_H_
#define PX4__MSG__DETAIL__BUFFER128__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MAX_BUFLEN'.
enum
{
  px4__msg__Buffer128__MAX_BUFLEN = 128ul
};

/// Struct defined in msg/Buffer128 in the package px4.
typedef struct px4__msg__Buffer128
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// length of data
  uint8_t len;
  /// data
  uint8_t data[128];
} px4__msg__Buffer128;

// Struct for a sequence of px4__msg__Buffer128.
typedef struct px4__msg__Buffer128__Sequence
{
  px4__msg__Buffer128 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__Buffer128__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__BUFFER128__STRUCT_H_
