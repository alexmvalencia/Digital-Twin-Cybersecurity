// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/LandingTargetPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/landing_target_pose.hpp"


#ifndef PX4__MSG__DETAIL__LANDING_TARGET_POSE__BUILDER_HPP_
#define PX4__MSG__DETAIL__LANDING_TARGET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/landing_target_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_LandingTargetPose_z_abs
{
public:
  explicit Init_LandingTargetPose_z_abs(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  ::px4::msg::LandingTargetPose z_abs(::px4::msg::LandingTargetPose::_z_abs_type arg)
  {
    msg_.z_abs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_y_abs
{
public:
  explicit Init_LandingTargetPose_y_abs(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_z_abs y_abs(::px4::msg::LandingTargetPose::_y_abs_type arg)
  {
    msg_.y_abs = std::move(arg);
    return Init_LandingTargetPose_z_abs(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_x_abs
{
public:
  explicit Init_LandingTargetPose_x_abs(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_y_abs x_abs(::px4::msg::LandingTargetPose::_x_abs_type arg)
  {
    msg_.x_abs = std::move(arg);
    return Init_LandingTargetPose_y_abs(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_abs_pos_valid
{
public:
  explicit Init_LandingTargetPose_abs_pos_valid(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_x_abs abs_pos_valid(::px4::msg::LandingTargetPose::_abs_pos_valid_type arg)
  {
    msg_.abs_pos_valid = std::move(arg);
    return Init_LandingTargetPose_x_abs(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_cov_vy_rel
{
public:
  explicit Init_LandingTargetPose_cov_vy_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_abs_pos_valid cov_vy_rel(::px4::msg::LandingTargetPose::_cov_vy_rel_type arg)
  {
    msg_.cov_vy_rel = std::move(arg);
    return Init_LandingTargetPose_abs_pos_valid(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_cov_vx_rel
{
public:
  explicit Init_LandingTargetPose_cov_vx_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_cov_vy_rel cov_vx_rel(::px4::msg::LandingTargetPose::_cov_vx_rel_type arg)
  {
    msg_.cov_vx_rel = std::move(arg);
    return Init_LandingTargetPose_cov_vy_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_cov_y_rel
{
public:
  explicit Init_LandingTargetPose_cov_y_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_cov_vx_rel cov_y_rel(::px4::msg::LandingTargetPose::_cov_y_rel_type arg)
  {
    msg_.cov_y_rel = std::move(arg);
    return Init_LandingTargetPose_cov_vx_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_cov_x_rel
{
public:
  explicit Init_LandingTargetPose_cov_x_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_cov_y_rel cov_x_rel(::px4::msg::LandingTargetPose::_cov_x_rel_type arg)
  {
    msg_.cov_x_rel = std::move(arg);
    return Init_LandingTargetPose_cov_y_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_vy_rel
{
public:
  explicit Init_LandingTargetPose_vy_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_cov_x_rel vy_rel(::px4::msg::LandingTargetPose::_vy_rel_type arg)
  {
    msg_.vy_rel = std::move(arg);
    return Init_LandingTargetPose_cov_x_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_vx_rel
{
public:
  explicit Init_LandingTargetPose_vx_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_vy_rel vx_rel(::px4::msg::LandingTargetPose::_vx_rel_type arg)
  {
    msg_.vx_rel = std::move(arg);
    return Init_LandingTargetPose_vy_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_z_rel
{
public:
  explicit Init_LandingTargetPose_z_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_vx_rel z_rel(::px4::msg::LandingTargetPose::_z_rel_type arg)
  {
    msg_.z_rel = std::move(arg);
    return Init_LandingTargetPose_vx_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_y_rel
{
public:
  explicit Init_LandingTargetPose_y_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_z_rel y_rel(::px4::msg::LandingTargetPose::_y_rel_type arg)
  {
    msg_.y_rel = std::move(arg);
    return Init_LandingTargetPose_z_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_x_rel
{
public:
  explicit Init_LandingTargetPose_x_rel(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_y_rel x_rel(::px4::msg::LandingTargetPose::_x_rel_type arg)
  {
    msg_.x_rel = std::move(arg);
    return Init_LandingTargetPose_y_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_rel_vel_valid
{
public:
  explicit Init_LandingTargetPose_rel_vel_valid(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_x_rel rel_vel_valid(::px4::msg::LandingTargetPose::_rel_vel_valid_type arg)
  {
    msg_.rel_vel_valid = std::move(arg);
    return Init_LandingTargetPose_x_rel(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_rel_pos_valid
{
public:
  explicit Init_LandingTargetPose_rel_pos_valid(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_rel_vel_valid rel_pos_valid(::px4::msg::LandingTargetPose::_rel_pos_valid_type arg)
  {
    msg_.rel_pos_valid = std::move(arg);
    return Init_LandingTargetPose_rel_vel_valid(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_is_static
{
public:
  explicit Init_LandingTargetPose_is_static(::px4::msg::LandingTargetPose & msg)
  : msg_(msg)
  {}
  Init_LandingTargetPose_rel_pos_valid is_static(::px4::msg::LandingTargetPose::_is_static_type arg)
  {
    msg_.is_static = std::move(arg);
    return Init_LandingTargetPose_rel_pos_valid(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

class Init_LandingTargetPose_timestamp
{
public:
  Init_LandingTargetPose_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandingTargetPose_is_static timestamp(::px4::msg::LandingTargetPose::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LandingTargetPose_is_static(msg_);
  }

private:
  ::px4::msg::LandingTargetPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::LandingTargetPose>()
{
  return px4::msg::builder::Init_LandingTargetPose_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__LANDING_TARGET_POSE__BUILDER_HPP_
