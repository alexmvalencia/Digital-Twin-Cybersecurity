// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from px4:msg/DistanceSensorModeChangeRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/distance_sensor_mode_change_request.h"


#ifndef PX4__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__FUNCTIONS_H_
#define PX4__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "px4/msg/rosidl_generator_c__visibility_control.h"

#include "px4/msg/detail/distance_sensor_mode_change_request__struct.h"

/// Initialize msg/DistanceSensorModeChangeRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4__msg__DistanceSensorModeChangeRequest
 * )) before or use
 * px4__msg__DistanceSensorModeChangeRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
bool
px4__msg__DistanceSensorModeChangeRequest__init(px4__msg__DistanceSensorModeChangeRequest * msg);

/// Finalize msg/DistanceSensorModeChangeRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
void
px4__msg__DistanceSensorModeChangeRequest__fini(px4__msg__DistanceSensorModeChangeRequest * msg);

/// Create msg/DistanceSensorModeChangeRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4__msg__DistanceSensorModeChangeRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
px4__msg__DistanceSensorModeChangeRequest *
px4__msg__DistanceSensorModeChangeRequest__create(void);

/// Destroy msg/DistanceSensorModeChangeRequest message.
/**
 * It calls
 * px4__msg__DistanceSensorModeChangeRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
void
px4__msg__DistanceSensorModeChangeRequest__destroy(px4__msg__DistanceSensorModeChangeRequest * msg);

/// Check for msg/DistanceSensorModeChangeRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
bool
px4__msg__DistanceSensorModeChangeRequest__are_equal(const px4__msg__DistanceSensorModeChangeRequest * lhs, const px4__msg__DistanceSensorModeChangeRequest * rhs);

/// Copy a msg/DistanceSensorModeChangeRequest message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
bool
px4__msg__DistanceSensorModeChangeRequest__copy(
  const px4__msg__DistanceSensorModeChangeRequest * input,
  px4__msg__DistanceSensorModeChangeRequest * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__DistanceSensorModeChangeRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__DistanceSensorModeChangeRequest__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_runtime_c__type_description__TypeSource *
px4__msg__DistanceSensorModeChangeRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__DistanceSensorModeChangeRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/DistanceSensorModeChangeRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4__msg__DistanceSensorModeChangeRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
bool
px4__msg__DistanceSensorModeChangeRequest__Sequence__init(px4__msg__DistanceSensorModeChangeRequest__Sequence * array, size_t size);

/// Finalize array of msg/DistanceSensorModeChangeRequest messages.
/**
 * It calls
 * px4__msg__DistanceSensorModeChangeRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
void
px4__msg__DistanceSensorModeChangeRequest__Sequence__fini(px4__msg__DistanceSensorModeChangeRequest__Sequence * array);

/// Create array of msg/DistanceSensorModeChangeRequest messages.
/**
 * It allocates the memory for the array and calls
 * px4__msg__DistanceSensorModeChangeRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
px4__msg__DistanceSensorModeChangeRequest__Sequence *
px4__msg__DistanceSensorModeChangeRequest__Sequence__create(size_t size);

/// Destroy array of msg/DistanceSensorModeChangeRequest messages.
/**
 * It calls
 * px4__msg__DistanceSensorModeChangeRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
void
px4__msg__DistanceSensorModeChangeRequest__Sequence__destroy(px4__msg__DistanceSensorModeChangeRequest__Sequence * array);

/// Check for msg/DistanceSensorModeChangeRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
bool
px4__msg__DistanceSensorModeChangeRequest__Sequence__are_equal(const px4__msg__DistanceSensorModeChangeRequest__Sequence * lhs, const px4__msg__DistanceSensorModeChangeRequest__Sequence * rhs);

/// Copy an array of msg/DistanceSensorModeChangeRequest messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4
bool
px4__msg__DistanceSensorModeChangeRequest__Sequence__copy(
  const px4__msg__DistanceSensorModeChangeRequest__Sequence * input,
  px4__msg__DistanceSensorModeChangeRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__FUNCTIONS_H_
