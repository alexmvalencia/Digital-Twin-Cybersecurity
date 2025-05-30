// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/MagWorkerData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/mag_worker_data.h"


#ifndef PX4__MSG__DETAIL__MAG_WORKER_DATA__STRUCT_H_
#define PX4__MSG__DETAIL__MAG_WORKER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MAX_MAGS'.
enum
{
  px4__msg__MagWorkerData__MAX_MAGS = 4
};

/// Struct defined in msg/MagWorkerData in the package px4.
typedef struct px4__msg__MagWorkerData
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint32_t done_count;
  uint32_t calibration_points_perside;
  uint64_t calibration_interval_perside_us;
  uint32_t calibration_counter_total[4];
  bool side_data_collected[4];
  float x[4];
  float y[4];
  float z[4];
} px4__msg__MagWorkerData;

// Struct for a sequence of px4__msg__MagWorkerData.
typedef struct px4__msg__MagWorkerData__Sequence
{
  px4__msg__MagWorkerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__MagWorkerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__MAG_WORKER_DATA__STRUCT_H_
