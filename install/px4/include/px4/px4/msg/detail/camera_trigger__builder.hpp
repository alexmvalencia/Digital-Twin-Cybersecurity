// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/CameraTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/camera_trigger.hpp"


#ifndef PX4__MSG__DETAIL__CAMERA_TRIGGER__BUILDER_HPP_
#define PX4__MSG__DETAIL__CAMERA_TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/camera_trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_CameraTrigger_feedback
{
public:
  explicit Init_CameraTrigger_feedback(::px4::msg::CameraTrigger & msg)
  : msg_(msg)
  {}
  ::px4::msg::CameraTrigger feedback(::px4::msg::CameraTrigger::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::CameraTrigger msg_;
};

class Init_CameraTrigger_seq
{
public:
  explicit Init_CameraTrigger_seq(::px4::msg::CameraTrigger & msg)
  : msg_(msg)
  {}
  Init_CameraTrigger_feedback seq(::px4::msg::CameraTrigger::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_CameraTrigger_feedback(msg_);
  }

private:
  ::px4::msg::CameraTrigger msg_;
};

class Init_CameraTrigger_timestamp_utc
{
public:
  explicit Init_CameraTrigger_timestamp_utc(::px4::msg::CameraTrigger & msg)
  : msg_(msg)
  {}
  Init_CameraTrigger_seq timestamp_utc(::px4::msg::CameraTrigger::_timestamp_utc_type arg)
  {
    msg_.timestamp_utc = std::move(arg);
    return Init_CameraTrigger_seq(msg_);
  }

private:
  ::px4::msg::CameraTrigger msg_;
};

class Init_CameraTrigger_timestamp
{
public:
  Init_CameraTrigger_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraTrigger_timestamp_utc timestamp(::px4::msg::CameraTrigger::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraTrigger_timestamp_utc(msg_);
  }

private:
  ::px4::msg::CameraTrigger msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::CameraTrigger>()
{
  return px4::msg::builder::Init_CameraTrigger_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__CAMERA_TRIGGER__BUILDER_HPP_
