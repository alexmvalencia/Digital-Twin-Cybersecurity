// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/EscStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/esc_status.hpp"


#ifndef PX4__MSG__DETAIL__ESC_STATUS__BUILDER_HPP_
#define PX4__MSG__DETAIL__ESC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/esc_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_EscStatus_esc
{
public:
  explicit Init_EscStatus_esc(::px4::msg::EscStatus & msg)
  : msg_(msg)
  {}
  ::px4::msg::EscStatus esc(::px4::msg::EscStatus::_esc_type arg)
  {
    msg_.esc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::EscStatus msg_;
};

class Init_EscStatus_esc_armed_flags
{
public:
  explicit Init_EscStatus_esc_armed_flags(::px4::msg::EscStatus & msg)
  : msg_(msg)
  {}
  Init_EscStatus_esc esc_armed_flags(::px4::msg::EscStatus::_esc_armed_flags_type arg)
  {
    msg_.esc_armed_flags = std::move(arg);
    return Init_EscStatus_esc(msg_);
  }

private:
  ::px4::msg::EscStatus msg_;
};

class Init_EscStatus_esc_online_flags
{
public:
  explicit Init_EscStatus_esc_online_flags(::px4::msg::EscStatus & msg)
  : msg_(msg)
  {}
  Init_EscStatus_esc_armed_flags esc_online_flags(::px4::msg::EscStatus::_esc_online_flags_type arg)
  {
    msg_.esc_online_flags = std::move(arg);
    return Init_EscStatus_esc_armed_flags(msg_);
  }

private:
  ::px4::msg::EscStatus msg_;
};

class Init_EscStatus_esc_connectiontype
{
public:
  explicit Init_EscStatus_esc_connectiontype(::px4::msg::EscStatus & msg)
  : msg_(msg)
  {}
  Init_EscStatus_esc_online_flags esc_connectiontype(::px4::msg::EscStatus::_esc_connectiontype_type arg)
  {
    msg_.esc_connectiontype = std::move(arg);
    return Init_EscStatus_esc_online_flags(msg_);
  }

private:
  ::px4::msg::EscStatus msg_;
};

class Init_EscStatus_esc_count
{
public:
  explicit Init_EscStatus_esc_count(::px4::msg::EscStatus & msg)
  : msg_(msg)
  {}
  Init_EscStatus_esc_connectiontype esc_count(::px4::msg::EscStatus::_esc_count_type arg)
  {
    msg_.esc_count = std::move(arg);
    return Init_EscStatus_esc_connectiontype(msg_);
  }

private:
  ::px4::msg::EscStatus msg_;
};

class Init_EscStatus_counter
{
public:
  explicit Init_EscStatus_counter(::px4::msg::EscStatus & msg)
  : msg_(msg)
  {}
  Init_EscStatus_esc_count counter(::px4::msg::EscStatus::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_EscStatus_esc_count(msg_);
  }

private:
  ::px4::msg::EscStatus msg_;
};

class Init_EscStatus_timestamp
{
public:
  Init_EscStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EscStatus_counter timestamp(::px4::msg::EscStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EscStatus_counter(msg_);
  }

private:
  ::px4::msg::EscStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::EscStatus>()
{
  return px4::msg::builder::Init_EscStatus_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ESC_STATUS__BUILDER_HPP_
