// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4:msg/RoverMecanumStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_mecanum_status.hpp"


#ifndef PX4__MSG__DETAIL__ROVER_MECANUM_STATUS__STRUCT_HPP_
#define PX4__MSG__DETAIL__ROVER_MECANUM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4__msg__RoverMecanumStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4__msg__RoverMecanumStatus __declspec(deprecated)
#endif

namespace px4
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverMecanumStatus_
{
  using Type = RoverMecanumStatus_<ContainerAllocator>;

  explicit RoverMecanumStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->measured_forward_speed = 0.0f;
      this->adjusted_forward_speed_setpoint = 0.0f;
      this->measured_lateral_speed = 0.0f;
      this->adjusted_lateral_speed_setpoint = 0.0f;
      this->measured_yaw_rate = 0.0f;
      this->clyaw_yaw_rate_setpoint = 0.0f;
      this->adjusted_yaw_rate_setpoint = 0.0f;
      this->measured_yaw = 0.0f;
      this->adjusted_yaw_setpoint = 0.0f;
      this->pid_yaw_rate_integral = 0.0f;
      this->pid_yaw_integral = 0.0f;
      this->pid_forward_throttle_integral = 0.0f;
      this->pid_lateral_throttle_integral = 0.0f;
    }
  }

  explicit RoverMecanumStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->measured_forward_speed = 0.0f;
      this->adjusted_forward_speed_setpoint = 0.0f;
      this->measured_lateral_speed = 0.0f;
      this->adjusted_lateral_speed_setpoint = 0.0f;
      this->measured_yaw_rate = 0.0f;
      this->clyaw_yaw_rate_setpoint = 0.0f;
      this->adjusted_yaw_rate_setpoint = 0.0f;
      this->measured_yaw = 0.0f;
      this->adjusted_yaw_setpoint = 0.0f;
      this->pid_yaw_rate_integral = 0.0f;
      this->pid_yaw_integral = 0.0f;
      this->pid_forward_throttle_integral = 0.0f;
      this->pid_lateral_throttle_integral = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _measured_forward_speed_type =
    float;
  _measured_forward_speed_type measured_forward_speed;
  using _adjusted_forward_speed_setpoint_type =
    float;
  _adjusted_forward_speed_setpoint_type adjusted_forward_speed_setpoint;
  using _measured_lateral_speed_type =
    float;
  _measured_lateral_speed_type measured_lateral_speed;
  using _adjusted_lateral_speed_setpoint_type =
    float;
  _adjusted_lateral_speed_setpoint_type adjusted_lateral_speed_setpoint;
  using _measured_yaw_rate_type =
    float;
  _measured_yaw_rate_type measured_yaw_rate;
  using _clyaw_yaw_rate_setpoint_type =
    float;
  _clyaw_yaw_rate_setpoint_type clyaw_yaw_rate_setpoint;
  using _adjusted_yaw_rate_setpoint_type =
    float;
  _adjusted_yaw_rate_setpoint_type adjusted_yaw_rate_setpoint;
  using _measured_yaw_type =
    float;
  _measured_yaw_type measured_yaw;
  using _adjusted_yaw_setpoint_type =
    float;
  _adjusted_yaw_setpoint_type adjusted_yaw_setpoint;
  using _pid_yaw_rate_integral_type =
    float;
  _pid_yaw_rate_integral_type pid_yaw_rate_integral;
  using _pid_yaw_integral_type =
    float;
  _pid_yaw_integral_type pid_yaw_integral;
  using _pid_forward_throttle_integral_type =
    float;
  _pid_forward_throttle_integral_type pid_forward_throttle_integral;
  using _pid_lateral_throttle_integral_type =
    float;
  _pid_lateral_throttle_integral_type pid_lateral_throttle_integral;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__measured_forward_speed(
    const float & _arg)
  {
    this->measured_forward_speed = _arg;
    return *this;
  }
  Type & set__adjusted_forward_speed_setpoint(
    const float & _arg)
  {
    this->adjusted_forward_speed_setpoint = _arg;
    return *this;
  }
  Type & set__measured_lateral_speed(
    const float & _arg)
  {
    this->measured_lateral_speed = _arg;
    return *this;
  }
  Type & set__adjusted_lateral_speed_setpoint(
    const float & _arg)
  {
    this->adjusted_lateral_speed_setpoint = _arg;
    return *this;
  }
  Type & set__measured_yaw_rate(
    const float & _arg)
  {
    this->measured_yaw_rate = _arg;
    return *this;
  }
  Type & set__clyaw_yaw_rate_setpoint(
    const float & _arg)
  {
    this->clyaw_yaw_rate_setpoint = _arg;
    return *this;
  }
  Type & set__adjusted_yaw_rate_setpoint(
    const float & _arg)
  {
    this->adjusted_yaw_rate_setpoint = _arg;
    return *this;
  }
  Type & set__measured_yaw(
    const float & _arg)
  {
    this->measured_yaw = _arg;
    return *this;
  }
  Type & set__adjusted_yaw_setpoint(
    const float & _arg)
  {
    this->adjusted_yaw_setpoint = _arg;
    return *this;
  }
  Type & set__pid_yaw_rate_integral(
    const float & _arg)
  {
    this->pid_yaw_rate_integral = _arg;
    return *this;
  }
  Type & set__pid_yaw_integral(
    const float & _arg)
  {
    this->pid_yaw_integral = _arg;
    return *this;
  }
  Type & set__pid_forward_throttle_integral(
    const float & _arg)
  {
    this->pid_forward_throttle_integral = _arg;
    return *this;
  }
  Type & set__pid_lateral_throttle_integral(
    const float & _arg)
  {
    this->pid_lateral_throttle_integral = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4::msg::RoverMecanumStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4::msg::RoverMecanumStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4::msg::RoverMecanumStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4::msg::RoverMecanumStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4::msg::RoverMecanumStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4::msg::RoverMecanumStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4::msg::RoverMecanumStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4::msg::RoverMecanumStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4::msg::RoverMecanumStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4::msg::RoverMecanumStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4__msg__RoverMecanumStatus
    std::shared_ptr<px4::msg::RoverMecanumStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4__msg__RoverMecanumStatus
    std::shared_ptr<px4::msg::RoverMecanumStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverMecanumStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->measured_forward_speed != other.measured_forward_speed) {
      return false;
    }
    if (this->adjusted_forward_speed_setpoint != other.adjusted_forward_speed_setpoint) {
      return false;
    }
    if (this->measured_lateral_speed != other.measured_lateral_speed) {
      return false;
    }
    if (this->adjusted_lateral_speed_setpoint != other.adjusted_lateral_speed_setpoint) {
      return false;
    }
    if (this->measured_yaw_rate != other.measured_yaw_rate) {
      return false;
    }
    if (this->clyaw_yaw_rate_setpoint != other.clyaw_yaw_rate_setpoint) {
      return false;
    }
    if (this->adjusted_yaw_rate_setpoint != other.adjusted_yaw_rate_setpoint) {
      return false;
    }
    if (this->measured_yaw != other.measured_yaw) {
      return false;
    }
    if (this->adjusted_yaw_setpoint != other.adjusted_yaw_setpoint) {
      return false;
    }
    if (this->pid_yaw_rate_integral != other.pid_yaw_rate_integral) {
      return false;
    }
    if (this->pid_yaw_integral != other.pid_yaw_integral) {
      return false;
    }
    if (this->pid_forward_throttle_integral != other.pid_forward_throttle_integral) {
      return false;
    }
    if (this->pid_lateral_throttle_integral != other.pid_lateral_throttle_integral) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverMecanumStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverMecanumStatus_

// alias to use template instance with default allocator
using RoverMecanumStatus =
  px4::msg::RoverMecanumStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ROVER_MECANUM_STATUS__STRUCT_HPP_
