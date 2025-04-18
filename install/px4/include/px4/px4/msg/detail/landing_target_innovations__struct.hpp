// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4:msg/LandingTargetInnovations.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/landing_target_innovations.hpp"


#ifndef PX4__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__STRUCT_HPP_
#define PX4__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4__msg__LandingTargetInnovations __attribute__((deprecated))
#else
# define DEPRECATED__px4__msg__LandingTargetInnovations __declspec(deprecated)
#endif

namespace px4
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandingTargetInnovations_
{
  using Type = LandingTargetInnovations_<ContainerAllocator>;

  explicit LandingTargetInnovations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->innov_x = 0.0f;
      this->innov_y = 0.0f;
      this->innov_cov_x = 0.0f;
      this->innov_cov_y = 0.0f;
    }
  }

  explicit LandingTargetInnovations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->innov_x = 0.0f;
      this->innov_y = 0.0f;
      this->innov_cov_x = 0.0f;
      this->innov_cov_y = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _innov_x_type =
    float;
  _innov_x_type innov_x;
  using _innov_y_type =
    float;
  _innov_y_type innov_y;
  using _innov_cov_x_type =
    float;
  _innov_cov_x_type innov_cov_x;
  using _innov_cov_y_type =
    float;
  _innov_cov_y_type innov_cov_y;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__innov_x(
    const float & _arg)
  {
    this->innov_x = _arg;
    return *this;
  }
  Type & set__innov_y(
    const float & _arg)
  {
    this->innov_y = _arg;
    return *this;
  }
  Type & set__innov_cov_x(
    const float & _arg)
  {
    this->innov_cov_x = _arg;
    return *this;
  }
  Type & set__innov_cov_y(
    const float & _arg)
  {
    this->innov_cov_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4::msg::LandingTargetInnovations_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4::msg::LandingTargetInnovations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4::msg::LandingTargetInnovations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4::msg::LandingTargetInnovations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4::msg::LandingTargetInnovations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4::msg::LandingTargetInnovations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4::msg::LandingTargetInnovations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4::msg::LandingTargetInnovations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4::msg::LandingTargetInnovations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4::msg::LandingTargetInnovations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4__msg__LandingTargetInnovations
    std::shared_ptr<px4::msg::LandingTargetInnovations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4__msg__LandingTargetInnovations
    std::shared_ptr<px4::msg::LandingTargetInnovations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandingTargetInnovations_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->innov_x != other.innov_x) {
      return false;
    }
    if (this->innov_y != other.innov_y) {
      return false;
    }
    if (this->innov_cov_x != other.innov_cov_x) {
      return false;
    }
    if (this->innov_cov_y != other.innov_cov_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandingTargetInnovations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandingTargetInnovations_

// alias to use template instance with default allocator
using LandingTargetInnovations =
  px4::msg::LandingTargetInnovations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4

#endif  // PX4__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__STRUCT_HPP_
