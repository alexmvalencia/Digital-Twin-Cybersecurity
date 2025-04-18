// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/VehicleCommandAck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_command_ack.hpp"


#ifndef PX4__MSG__DETAIL__VEHICLE_COMMAND_ACK__BUILDER_HPP_
#define PX4__MSG__DETAIL__VEHICLE_COMMAND_ACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/vehicle_command_ack__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_VehicleCommandAck_from_external
{
public:
  explicit Init_VehicleCommandAck_from_external(::px4::msg::VehicleCommandAck & msg)
  : msg_(msg)
  {}
  ::px4::msg::VehicleCommandAck from_external(::px4::msg::VehicleCommandAck::_from_external_type arg)
  {
    msg_.from_external = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::VehicleCommandAck msg_;
};

class Init_VehicleCommandAck_target_component
{
public:
  explicit Init_VehicleCommandAck_target_component(::px4::msg::VehicleCommandAck & msg)
  : msg_(msg)
  {}
  Init_VehicleCommandAck_from_external target_component(::px4::msg::VehicleCommandAck::_target_component_type arg)
  {
    msg_.target_component = std::move(arg);
    return Init_VehicleCommandAck_from_external(msg_);
  }

private:
  ::px4::msg::VehicleCommandAck msg_;
};

class Init_VehicleCommandAck_target_system
{
public:
  explicit Init_VehicleCommandAck_target_system(::px4::msg::VehicleCommandAck & msg)
  : msg_(msg)
  {}
  Init_VehicleCommandAck_target_component target_system(::px4::msg::VehicleCommandAck::_target_system_type arg)
  {
    msg_.target_system = std::move(arg);
    return Init_VehicleCommandAck_target_component(msg_);
  }

private:
  ::px4::msg::VehicleCommandAck msg_;
};

class Init_VehicleCommandAck_result_param2
{
public:
  explicit Init_VehicleCommandAck_result_param2(::px4::msg::VehicleCommandAck & msg)
  : msg_(msg)
  {}
  Init_VehicleCommandAck_target_system result_param2(::px4::msg::VehicleCommandAck::_result_param2_type arg)
  {
    msg_.result_param2 = std::move(arg);
    return Init_VehicleCommandAck_target_system(msg_);
  }

private:
  ::px4::msg::VehicleCommandAck msg_;
};

class Init_VehicleCommandAck_result_param1
{
public:
  explicit Init_VehicleCommandAck_result_param1(::px4::msg::VehicleCommandAck & msg)
  : msg_(msg)
  {}
  Init_VehicleCommandAck_result_param2 result_param1(::px4::msg::VehicleCommandAck::_result_param1_type arg)
  {
    msg_.result_param1 = std::move(arg);
    return Init_VehicleCommandAck_result_param2(msg_);
  }

private:
  ::px4::msg::VehicleCommandAck msg_;
};

class Init_VehicleCommandAck_result
{
public:
  explicit Init_VehicleCommandAck_result(::px4::msg::VehicleCommandAck & msg)
  : msg_(msg)
  {}
  Init_VehicleCommandAck_result_param1 result(::px4::msg::VehicleCommandAck::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_VehicleCommandAck_result_param1(msg_);
  }

private:
  ::px4::msg::VehicleCommandAck msg_;
};

class Init_VehicleCommandAck_command
{
public:
  explicit Init_VehicleCommandAck_command(::px4::msg::VehicleCommandAck & msg)
  : msg_(msg)
  {}
  Init_VehicleCommandAck_result command(::px4::msg::VehicleCommandAck::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_VehicleCommandAck_result(msg_);
  }

private:
  ::px4::msg::VehicleCommandAck msg_;
};

class Init_VehicleCommandAck_timestamp
{
public:
  Init_VehicleCommandAck_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleCommandAck_command timestamp(::px4::msg::VehicleCommandAck::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleCommandAck_command(msg_);
  }

private:
  ::px4::msg::VehicleCommandAck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::VehicleCommandAck>()
{
  return px4::msg::builder::Init_VehicleCommandAck_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__VEHICLE_COMMAND_ACK__BUILDER_HPP_
