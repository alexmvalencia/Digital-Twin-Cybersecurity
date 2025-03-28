// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/FuelTankStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/fuel_tank_status.hpp"


#ifndef PX4__MSG__DETAIL__FUEL_TANK_STATUS__BUILDER_HPP_
#define PX4__MSG__DETAIL__FUEL_TANK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/fuel_tank_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_FuelTankStatus_temperature
{
public:
  explicit Init_FuelTankStatus_temperature(::px4::msg::FuelTankStatus & msg)
  : msg_(msg)
  {}
  ::px4::msg::FuelTankStatus temperature(::px4::msg::FuelTankStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

class Init_FuelTankStatus_fuel_type
{
public:
  explicit Init_FuelTankStatus_fuel_type(::px4::msg::FuelTankStatus & msg)
  : msg_(msg)
  {}
  Init_FuelTankStatus_temperature fuel_type(::px4::msg::FuelTankStatus::_fuel_type_type arg)
  {
    msg_.fuel_type = std::move(arg);
    return Init_FuelTankStatus_temperature(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

class Init_FuelTankStatus_fuel_tank_id
{
public:
  explicit Init_FuelTankStatus_fuel_tank_id(::px4::msg::FuelTankStatus & msg)
  : msg_(msg)
  {}
  Init_FuelTankStatus_fuel_type fuel_tank_id(::px4::msg::FuelTankStatus::_fuel_tank_id_type arg)
  {
    msg_.fuel_tank_id = std::move(arg);
    return Init_FuelTankStatus_fuel_type(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

class Init_FuelTankStatus_remaining_fuel
{
public:
  explicit Init_FuelTankStatus_remaining_fuel(::px4::msg::FuelTankStatus & msg)
  : msg_(msg)
  {}
  Init_FuelTankStatus_fuel_tank_id remaining_fuel(::px4::msg::FuelTankStatus::_remaining_fuel_type arg)
  {
    msg_.remaining_fuel = std::move(arg);
    return Init_FuelTankStatus_fuel_tank_id(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

class Init_FuelTankStatus_percent_remaining
{
public:
  explicit Init_FuelTankStatus_percent_remaining(::px4::msg::FuelTankStatus & msg)
  : msg_(msg)
  {}
  Init_FuelTankStatus_remaining_fuel percent_remaining(::px4::msg::FuelTankStatus::_percent_remaining_type arg)
  {
    msg_.percent_remaining = std::move(arg);
    return Init_FuelTankStatus_remaining_fuel(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

class Init_FuelTankStatus_fuel_consumption_rate
{
public:
  explicit Init_FuelTankStatus_fuel_consumption_rate(::px4::msg::FuelTankStatus & msg)
  : msg_(msg)
  {}
  Init_FuelTankStatus_percent_remaining fuel_consumption_rate(::px4::msg::FuelTankStatus::_fuel_consumption_rate_type arg)
  {
    msg_.fuel_consumption_rate = std::move(arg);
    return Init_FuelTankStatus_percent_remaining(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

class Init_FuelTankStatus_consumed_fuel
{
public:
  explicit Init_FuelTankStatus_consumed_fuel(::px4::msg::FuelTankStatus & msg)
  : msg_(msg)
  {}
  Init_FuelTankStatus_fuel_consumption_rate consumed_fuel(::px4::msg::FuelTankStatus::_consumed_fuel_type arg)
  {
    msg_.consumed_fuel = std::move(arg);
    return Init_FuelTankStatus_fuel_consumption_rate(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

class Init_FuelTankStatus_maximum_fuel_capacity
{
public:
  explicit Init_FuelTankStatus_maximum_fuel_capacity(::px4::msg::FuelTankStatus & msg)
  : msg_(msg)
  {}
  Init_FuelTankStatus_consumed_fuel maximum_fuel_capacity(::px4::msg::FuelTankStatus::_maximum_fuel_capacity_type arg)
  {
    msg_.maximum_fuel_capacity = std::move(arg);
    return Init_FuelTankStatus_consumed_fuel(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

class Init_FuelTankStatus_timestamp
{
public:
  Init_FuelTankStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FuelTankStatus_maximum_fuel_capacity timestamp(::px4::msg::FuelTankStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FuelTankStatus_maximum_fuel_capacity(msg_);
  }

private:
  ::px4::msg::FuelTankStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::FuelTankStatus>()
{
  return px4::msg::builder::Init_FuelTankStatus_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__FUEL_TANK_STATUS__BUILDER_HPP_
