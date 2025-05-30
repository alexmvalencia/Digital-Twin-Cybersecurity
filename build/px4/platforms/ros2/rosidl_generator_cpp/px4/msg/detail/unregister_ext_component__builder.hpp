// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/UnregisterExtComponent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/unregister_ext_component.hpp"


#ifndef PX4__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__BUILDER_HPP_
#define PX4__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/unregister_ext_component__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_UnregisterExtComponent_mode_executor_id
{
public:
  explicit Init_UnregisterExtComponent_mode_executor_id(::px4::msg::UnregisterExtComponent & msg)
  : msg_(msg)
  {}
  ::px4::msg::UnregisterExtComponent mode_executor_id(::px4::msg::UnregisterExtComponent::_mode_executor_id_type arg)
  {
    msg_.mode_executor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::UnregisterExtComponent msg_;
};

class Init_UnregisterExtComponent_mode_id
{
public:
  explicit Init_UnregisterExtComponent_mode_id(::px4::msg::UnregisterExtComponent & msg)
  : msg_(msg)
  {}
  Init_UnregisterExtComponent_mode_executor_id mode_id(::px4::msg::UnregisterExtComponent::_mode_id_type arg)
  {
    msg_.mode_id = std::move(arg);
    return Init_UnregisterExtComponent_mode_executor_id(msg_);
  }

private:
  ::px4::msg::UnregisterExtComponent msg_;
};

class Init_UnregisterExtComponent_arming_check_id
{
public:
  explicit Init_UnregisterExtComponent_arming_check_id(::px4::msg::UnregisterExtComponent & msg)
  : msg_(msg)
  {}
  Init_UnregisterExtComponent_mode_id arming_check_id(::px4::msg::UnregisterExtComponent::_arming_check_id_type arg)
  {
    msg_.arming_check_id = std::move(arg);
    return Init_UnregisterExtComponent_mode_id(msg_);
  }

private:
  ::px4::msg::UnregisterExtComponent msg_;
};

class Init_UnregisterExtComponent_name
{
public:
  explicit Init_UnregisterExtComponent_name(::px4::msg::UnregisterExtComponent & msg)
  : msg_(msg)
  {}
  Init_UnregisterExtComponent_arming_check_id name(::px4::msg::UnregisterExtComponent::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_UnregisterExtComponent_arming_check_id(msg_);
  }

private:
  ::px4::msg::UnregisterExtComponent msg_;
};

class Init_UnregisterExtComponent_timestamp
{
public:
  Init_UnregisterExtComponent_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnregisterExtComponent_name timestamp(::px4::msg::UnregisterExtComponent::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_UnregisterExtComponent_name(msg_);
  }

private:
  ::px4::msg::UnregisterExtComponent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::UnregisterExtComponent>()
{
  return px4::msg::builder::Init_UnregisterExtComponent_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__BUILDER_HPP_
