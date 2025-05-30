// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/NavigatorMissionItem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/navigator_mission_item.hpp"


#ifndef PX4__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__BUILDER_HPP_
#define PX4__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/navigator_mission_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_NavigatorMissionItem_vtol_back_transition
{
public:
  explicit Init_NavigatorMissionItem_vtol_back_transition(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  ::px4::msg::NavigatorMissionItem vtol_back_transition(::px4::msg::NavigatorMissionItem::_vtol_back_transition_type arg)
  {
    msg_.vtol_back_transition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_autocontinue
{
public:
  explicit Init_NavigatorMissionItem_autocontinue(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_vtol_back_transition autocontinue(::px4::msg::NavigatorMissionItem::_autocontinue_type arg)
  {
    msg_.autocontinue = std::move(arg);
    return Init_NavigatorMissionItem_vtol_back_transition(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_altitude_is_relative
{
public:
  explicit Init_NavigatorMissionItem_altitude_is_relative(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_autocontinue altitude_is_relative(::px4::msg::NavigatorMissionItem::_altitude_is_relative_type arg)
  {
    msg_.altitude_is_relative = std::move(arg);
    return Init_NavigatorMissionItem_autocontinue(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_force_heading
{
public:
  explicit Init_NavigatorMissionItem_force_heading(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_altitude_is_relative force_heading(::px4::msg::NavigatorMissionItem::_force_heading_type arg)
  {
    msg_.force_heading = std::move(arg);
    return Init_NavigatorMissionItem_altitude_is_relative(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_loiter_exit_xtrack
{
public:
  explicit Init_NavigatorMissionItem_loiter_exit_xtrack(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_force_heading loiter_exit_xtrack(::px4::msg::NavigatorMissionItem::_loiter_exit_xtrack_type arg)
  {
    msg_.loiter_exit_xtrack = std::move(arg);
    return Init_NavigatorMissionItem_force_heading(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_origin
{
public:
  explicit Init_NavigatorMissionItem_origin(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_loiter_exit_xtrack origin(::px4::msg::NavigatorMissionItem::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_NavigatorMissionItem_loiter_exit_xtrack(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_frame
{
public:
  explicit Init_NavigatorMissionItem_frame(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_origin frame(::px4::msg::NavigatorMissionItem::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_NavigatorMissionItem_origin(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_altitude
{
public:
  explicit Init_NavigatorMissionItem_altitude(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_frame altitude(::px4::msg::NavigatorMissionItem::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_NavigatorMissionItem_frame(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_yaw
{
public:
  explicit Init_NavigatorMissionItem_yaw(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_altitude yaw(::px4::msg::NavigatorMissionItem::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_NavigatorMissionItem_altitude(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_loiter_radius
{
public:
  explicit Init_NavigatorMissionItem_loiter_radius(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_yaw loiter_radius(::px4::msg::NavigatorMissionItem::_loiter_radius_type arg)
  {
    msg_.loiter_radius = std::move(arg);
    return Init_NavigatorMissionItem_yaw(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_acceptance_radius
{
public:
  explicit Init_NavigatorMissionItem_acceptance_radius(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_loiter_radius acceptance_radius(::px4::msg::NavigatorMissionItem::_acceptance_radius_type arg)
  {
    msg_.acceptance_radius = std::move(arg);
    return Init_NavigatorMissionItem_loiter_radius(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_time_inside
{
public:
  explicit Init_NavigatorMissionItem_time_inside(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_acceptance_radius time_inside(::px4::msg::NavigatorMissionItem::_time_inside_type arg)
  {
    msg_.time_inside = std::move(arg);
    return Init_NavigatorMissionItem_acceptance_radius(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_longitude
{
public:
  explicit Init_NavigatorMissionItem_longitude(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_time_inside longitude(::px4::msg::NavigatorMissionItem::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_NavigatorMissionItem_time_inside(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_latitude
{
public:
  explicit Init_NavigatorMissionItem_latitude(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_longitude latitude(::px4::msg::NavigatorMissionItem::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_NavigatorMissionItem_longitude(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_nav_cmd
{
public:
  explicit Init_NavigatorMissionItem_nav_cmd(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_latitude nav_cmd(::px4::msg::NavigatorMissionItem::_nav_cmd_type arg)
  {
    msg_.nav_cmd = std::move(arg);
    return Init_NavigatorMissionItem_latitude(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_sequence_current
{
public:
  explicit Init_NavigatorMissionItem_sequence_current(::px4::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_nav_cmd sequence_current(::px4::msg::NavigatorMissionItem::_sequence_current_type arg)
  {
    msg_.sequence_current = std::move(arg);
    return Init_NavigatorMissionItem_nav_cmd(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_timestamp
{
public:
  Init_NavigatorMissionItem_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigatorMissionItem_sequence_current timestamp(::px4::msg::NavigatorMissionItem::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NavigatorMissionItem_sequence_current(msg_);
  }

private:
  ::px4::msg::NavigatorMissionItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::NavigatorMissionItem>()
{
  return px4::msg::builder::Init_NavigatorMissionItem_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__BUILDER_HPP_
