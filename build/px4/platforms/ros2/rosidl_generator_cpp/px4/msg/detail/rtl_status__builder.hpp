// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/RtlStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rtl_status.hpp"


#ifndef PX4__MSG__DETAIL__RTL_STATUS__BUILDER_HPP_
#define PX4__MSG__DETAIL__RTL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/rtl_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_RtlStatus_safe_point_index
{
public:
  explicit Init_RtlStatus_safe_point_index(::px4::msg::RtlStatus & msg)
  : msg_(msg)
  {}
  ::px4::msg::RtlStatus safe_point_index(::px4::msg::RtlStatus::_safe_point_index_type arg)
  {
    msg_.safe_point_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::RtlStatus msg_;
};

class Init_RtlStatus_rtl_type
{
public:
  explicit Init_RtlStatus_rtl_type(::px4::msg::RtlStatus & msg)
  : msg_(msg)
  {}
  Init_RtlStatus_safe_point_index rtl_type(::px4::msg::RtlStatus::_rtl_type_type arg)
  {
    msg_.rtl_type = std::move(arg);
    return Init_RtlStatus_safe_point_index(msg_);
  }

private:
  ::px4::msg::RtlStatus msg_;
};

class Init_RtlStatus_has_vtol_approach
{
public:
  explicit Init_RtlStatus_has_vtol_approach(::px4::msg::RtlStatus & msg)
  : msg_(msg)
  {}
  Init_RtlStatus_rtl_type has_vtol_approach(::px4::msg::RtlStatus::_has_vtol_approach_type arg)
  {
    msg_.has_vtol_approach = std::move(arg);
    return Init_RtlStatus_rtl_type(msg_);
  }

private:
  ::px4::msg::RtlStatus msg_;
};

class Init_RtlStatus_is_evaluation_pending
{
public:
  explicit Init_RtlStatus_is_evaluation_pending(::px4::msg::RtlStatus & msg)
  : msg_(msg)
  {}
  Init_RtlStatus_has_vtol_approach is_evaluation_pending(::px4::msg::RtlStatus::_is_evaluation_pending_type arg)
  {
    msg_.is_evaluation_pending = std::move(arg);
    return Init_RtlStatus_has_vtol_approach(msg_);
  }

private:
  ::px4::msg::RtlStatus msg_;
};

class Init_RtlStatus_safe_points_id
{
public:
  explicit Init_RtlStatus_safe_points_id(::px4::msg::RtlStatus & msg)
  : msg_(msg)
  {}
  Init_RtlStatus_is_evaluation_pending safe_points_id(::px4::msg::RtlStatus::_safe_points_id_type arg)
  {
    msg_.safe_points_id = std::move(arg);
    return Init_RtlStatus_is_evaluation_pending(msg_);
  }

private:
  ::px4::msg::RtlStatus msg_;
};

class Init_RtlStatus_timestamp
{
public:
  Init_RtlStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RtlStatus_safe_points_id timestamp(::px4::msg::RtlStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RtlStatus_safe_points_id(msg_);
  }

private:
  ::px4::msg::RtlStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::RtlStatus>()
{
  return px4::msg::builder::Init_RtlStatus_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__RTL_STATUS__BUILDER_HPP_
