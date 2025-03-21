// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/ModeCompleted.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/mode_completed.hpp"


#ifndef PX4__MSG__DETAIL__MODE_COMPLETED__BUILDER_HPP_
#define PX4__MSG__DETAIL__MODE_COMPLETED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/mode_completed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_ModeCompleted_nav_state
{
public:
  explicit Init_ModeCompleted_nav_state(::px4::msg::ModeCompleted & msg)
  : msg_(msg)
  {}
  ::px4::msg::ModeCompleted nav_state(::px4::msg::ModeCompleted::_nav_state_type arg)
  {
    msg_.nav_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::ModeCompleted msg_;
};

class Init_ModeCompleted_result
{
public:
  explicit Init_ModeCompleted_result(::px4::msg::ModeCompleted & msg)
  : msg_(msg)
  {}
  Init_ModeCompleted_nav_state result(::px4::msg::ModeCompleted::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_ModeCompleted_nav_state(msg_);
  }

private:
  ::px4::msg::ModeCompleted msg_;
};

class Init_ModeCompleted_timestamp
{
public:
  Init_ModeCompleted_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeCompleted_result timestamp(::px4::msg::ModeCompleted::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ModeCompleted_result(msg_);
  }

private:
  ::px4::msg::ModeCompleted msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::ModeCompleted>()
{
  return px4::msg::builder::Init_ModeCompleted_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__MODE_COMPLETED__BUILDER_HPP_
