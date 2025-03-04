// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/MessageFormatRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/message_format_request.h"


#ifndef PX4__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__STRUCT_H_
#define PX4__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LATEST_PROTOCOL_VERSION'.
/**
  * Request to PX4 to get the hash of a message, to check for message compatibility
  * Current version of this protocol. Increase this whenever the MessageFormatRequest or MessageFormatResponse changes.
 */
enum
{
  px4__msg__MessageFormatRequest__LATEST_PROTOCOL_VERSION = 1
};

/// Struct defined in msg/MessageFormatRequest in the package px4.
typedef struct px4__msg__MessageFormatRequest
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Must be set to LATEST_PROTOCOL_VERSION. Do not change this field, it must be the first field after the timestamp
  uint16_t protocol_version;
  /// E.g. /fmu/in/vehicle_command
  uint8_t topic_name[50];
} px4__msg__MessageFormatRequest;

// Struct for a sequence of px4__msg__MessageFormatRequest.
typedef struct px4__msg__MessageFormatRequest__Sequence
{
  px4__msg__MessageFormatRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__MessageFormatRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__STRUCT_H_
