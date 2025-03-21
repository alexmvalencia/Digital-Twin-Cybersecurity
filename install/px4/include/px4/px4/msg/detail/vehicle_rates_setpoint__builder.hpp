// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/VehicleRatesSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_rates_setpoint.hpp"


#ifndef PX4__MSG__DETAIL__VEHICLE_RATES_SETPOINT__BUILDER_HPP_
#define PX4__MSG__DETAIL__VEHICLE_RATES_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/vehicle_rates_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_VehicleRatesSetpoint_reset_integral
{
public:
  explicit Init_VehicleRatesSetpoint_reset_integral(::px4::msg::VehicleRatesSetpoint & msg)
  : msg_(msg)
  {}
  ::px4::msg::VehicleRatesSetpoint reset_integral(::px4::msg::VehicleRatesSetpoint::_reset_integral_type arg)
  {
    msg_.reset_integral = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::VehicleRatesSetpoint msg_;
};

class Init_VehicleRatesSetpoint_thrust_body
{
public:
  explicit Init_VehicleRatesSetpoint_thrust_body(::px4::msg::VehicleRatesSetpoint & msg)
  : msg_(msg)
  {}
  Init_VehicleRatesSetpoint_reset_integral thrust_body(::px4::msg::VehicleRatesSetpoint::_thrust_body_type arg)
  {
    msg_.thrust_body = std::move(arg);
    return Init_VehicleRatesSetpoint_reset_integral(msg_);
  }

private:
  ::px4::msg::VehicleRatesSetpoint msg_;
};

class Init_VehicleRatesSetpoint_yaw
{
public:
  explicit Init_VehicleRatesSetpoint_yaw(::px4::msg::VehicleRatesSetpoint & msg)
  : msg_(msg)
  {}
  Init_VehicleRatesSetpoint_thrust_body yaw(::px4::msg::VehicleRatesSetpoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_VehicleRatesSetpoint_thrust_body(msg_);
  }

private:
  ::px4::msg::VehicleRatesSetpoint msg_;
};

class Init_VehicleRatesSetpoint_pitch
{
public:
  explicit Init_VehicleRatesSetpoint_pitch(::px4::msg::VehicleRatesSetpoint & msg)
  : msg_(msg)
  {}
  Init_VehicleRatesSetpoint_yaw pitch(::px4::msg::VehicleRatesSetpoint::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_VehicleRatesSetpoint_yaw(msg_);
  }

private:
  ::px4::msg::VehicleRatesSetpoint msg_;
};

class Init_VehicleRatesSetpoint_roll
{
public:
  explicit Init_VehicleRatesSetpoint_roll(::px4::msg::VehicleRatesSetpoint & msg)
  : msg_(msg)
  {}
  Init_VehicleRatesSetpoint_pitch roll(::px4::msg::VehicleRatesSetpoint::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_VehicleRatesSetpoint_pitch(msg_);
  }

private:
  ::px4::msg::VehicleRatesSetpoint msg_;
};

class Init_VehicleRatesSetpoint_timestamp
{
public:
  Init_VehicleRatesSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleRatesSetpoint_roll timestamp(::px4::msg::VehicleRatesSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleRatesSetpoint_roll(msg_);
  }

private:
  ::px4::msg::VehicleRatesSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::VehicleRatesSetpoint>()
{
  return px4::msg::builder::Init_VehicleRatesSetpoint_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__VEHICLE_RATES_SETPOINT__BUILDER_HPP_
