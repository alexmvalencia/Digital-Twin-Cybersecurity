// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/VehicleTrajectoryWaypoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_trajectory_waypoint.hpp"


#ifndef PX4__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__BUILDER_HPP_
#define PX4__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/vehicle_trajectory_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_VehicleTrajectoryWaypoint_waypoints
{
public:
  explicit Init_VehicleTrajectoryWaypoint_waypoints(::px4::msg::VehicleTrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  ::px4::msg::VehicleTrajectoryWaypoint waypoints(::px4::msg::VehicleTrajectoryWaypoint::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::VehicleTrajectoryWaypoint msg_;
};

class Init_VehicleTrajectoryWaypoint_type
{
public:
  explicit Init_VehicleTrajectoryWaypoint_type(::px4::msg::VehicleTrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  Init_VehicleTrajectoryWaypoint_waypoints type(::px4::msg::VehicleTrajectoryWaypoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_VehicleTrajectoryWaypoint_waypoints(msg_);
  }

private:
  ::px4::msg::VehicleTrajectoryWaypoint msg_;
};

class Init_VehicleTrajectoryWaypoint_timestamp
{
public:
  Init_VehicleTrajectoryWaypoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleTrajectoryWaypoint_type timestamp(::px4::msg::VehicleTrajectoryWaypoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleTrajectoryWaypoint_type(msg_);
  }

private:
  ::px4::msg::VehicleTrajectoryWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::VehicleTrajectoryWaypoint>()
{
  return px4::msg::builder::Init_VehicleTrajectoryWaypoint_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__BUILDER_HPP_
