// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/goto_setpoint.hpp"


#ifndef PX4__MSG__DETAIL__GOTO_SETPOINT__BUILDER_HPP_
#define PX4__MSG__DETAIL__GOTO_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/goto_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_GotoSetpoint_max_heading_rate
{
public:
  explicit Init_GotoSetpoint_max_heading_rate(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  ::px4::msg::GotoSetpoint max_heading_rate(::px4::msg::GotoSetpoint::_max_heading_rate_type arg)
  {
    msg_.max_heading_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_flag_set_max_heading_rate
{
public:
  explicit Init_GotoSetpoint_flag_set_max_heading_rate(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  Init_GotoSetpoint_max_heading_rate flag_set_max_heading_rate(::px4::msg::GotoSetpoint::_flag_set_max_heading_rate_type arg)
  {
    msg_.flag_set_max_heading_rate = std::move(arg);
    return Init_GotoSetpoint_max_heading_rate(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_max_vertical_speed
{
public:
  explicit Init_GotoSetpoint_max_vertical_speed(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  Init_GotoSetpoint_flag_set_max_heading_rate max_vertical_speed(::px4::msg::GotoSetpoint::_max_vertical_speed_type arg)
  {
    msg_.max_vertical_speed = std::move(arg);
    return Init_GotoSetpoint_flag_set_max_heading_rate(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_flag_set_max_vertical_speed
{
public:
  explicit Init_GotoSetpoint_flag_set_max_vertical_speed(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  Init_GotoSetpoint_max_vertical_speed flag_set_max_vertical_speed(::px4::msg::GotoSetpoint::_flag_set_max_vertical_speed_type arg)
  {
    msg_.flag_set_max_vertical_speed = std::move(arg);
    return Init_GotoSetpoint_max_vertical_speed(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_max_horizontal_speed
{
public:
  explicit Init_GotoSetpoint_max_horizontal_speed(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  Init_GotoSetpoint_flag_set_max_vertical_speed max_horizontal_speed(::px4::msg::GotoSetpoint::_max_horizontal_speed_type arg)
  {
    msg_.max_horizontal_speed = std::move(arg);
    return Init_GotoSetpoint_flag_set_max_vertical_speed(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_flag_set_max_horizontal_speed
{
public:
  explicit Init_GotoSetpoint_flag_set_max_horizontal_speed(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  Init_GotoSetpoint_max_horizontal_speed flag_set_max_horizontal_speed(::px4::msg::GotoSetpoint::_flag_set_max_horizontal_speed_type arg)
  {
    msg_.flag_set_max_horizontal_speed = std::move(arg);
    return Init_GotoSetpoint_max_horizontal_speed(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_heading
{
public:
  explicit Init_GotoSetpoint_heading(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  Init_GotoSetpoint_flag_set_max_horizontal_speed heading(::px4::msg::GotoSetpoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_GotoSetpoint_flag_set_max_horizontal_speed(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_flag_control_heading
{
public:
  explicit Init_GotoSetpoint_flag_control_heading(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  Init_GotoSetpoint_heading flag_control_heading(::px4::msg::GotoSetpoint::_flag_control_heading_type arg)
  {
    msg_.flag_control_heading = std::move(arg);
    return Init_GotoSetpoint_heading(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_position
{
public:
  explicit Init_GotoSetpoint_position(::px4::msg::GotoSetpoint & msg)
  : msg_(msg)
  {}
  Init_GotoSetpoint_flag_control_heading position(::px4::msg::GotoSetpoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GotoSetpoint_flag_control_heading(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

class Init_GotoSetpoint_timestamp
{
public:
  Init_GotoSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GotoSetpoint_position timestamp(::px4::msg::GotoSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GotoSetpoint_position(msg_);
  }

private:
  ::px4::msg::GotoSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::GotoSetpoint>()
{
  return px4::msg::builder::Init_GotoSetpoint_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__GOTO_SETPOINT__BUILDER_HPP_
