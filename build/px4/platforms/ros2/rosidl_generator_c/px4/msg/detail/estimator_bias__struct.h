// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/EstimatorBias.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/estimator_bias.h"


#ifndef PX4__MSG__DETAIL__ESTIMATOR_BIAS__STRUCT_H_
#define PX4__MSG__DETAIL__ESTIMATOR_BIAS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/EstimatorBias in the package px4.
typedef struct px4__msg__EstimatorBias
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// estimated barometric altitude bias (m)
  float bias;
  /// estimated barometric altitude bias variance (m^2)
  float bias_var;
  /// innovation of the last measurement fusion (m)
  float innov;
  /// innovation variance of the last measurement fusion (m^2)
  float innov_var;
  /// normalized innovation squared test ratio
  float innov_test_ratio;
} px4__msg__EstimatorBias;

// Struct for a sequence of px4__msg__EstimatorBias.
typedef struct px4__msg__EstimatorBias__Sequence
{
  px4__msg__EstimatorBias * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__EstimatorBias__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ESTIMATOR_BIAS__STRUCT_H_
