// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4:msg/DistanceSensorModeChangeRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/distance_sensor_mode_change_request.hpp"


#ifndef PX4__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__STRUCT_HPP_
#define PX4__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4__msg__DistanceSensorModeChangeRequest __attribute__((deprecated))
#else
# define DEPRECATED__px4__msg__DistanceSensorModeChangeRequest __declspec(deprecated)
#endif

namespace px4
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DistanceSensorModeChangeRequest_
{
  using Type = DistanceSensorModeChangeRequest_<ContainerAllocator>;

  explicit DistanceSensorModeChangeRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_on_off = 0;
    }
  }

  explicit DistanceSensorModeChangeRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_on_off = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _request_on_off_type =
    uint8_t;
  _request_on_off_type request_on_off;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__request_on_off(
    const uint8_t & _arg)
  {
    this->request_on_off = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REQUEST_OFF =
    0u;
  static constexpr uint8_t REQUEST_ON =
    1u;

  // pointer types
  using RawPtr =
    px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4__msg__DistanceSensorModeChangeRequest
    std::shared_ptr<px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4__msg__DistanceSensorModeChangeRequest
    std::shared_ptr<px4::msg::DistanceSensorModeChangeRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistanceSensorModeChangeRequest_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->request_on_off != other.request_on_off) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistanceSensorModeChangeRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistanceSensorModeChangeRequest_

// alias to use template instance with default allocator
using DistanceSensorModeChangeRequest =
  px4::msg::DistanceSensorModeChangeRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensorModeChangeRequest_<ContainerAllocator>::REQUEST_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensorModeChangeRequest_<ContainerAllocator>::REQUEST_ON;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4

#endif  // PX4__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__STRUCT_HPP_
