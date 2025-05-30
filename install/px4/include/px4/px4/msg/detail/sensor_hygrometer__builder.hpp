// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/SensorHygrometer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/sensor_hygrometer.hpp"


#ifndef PX4__MSG__DETAIL__SENSOR_HYGROMETER__BUILDER_HPP_
#define PX4__MSG__DETAIL__SENSOR_HYGROMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/sensor_hygrometer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_SensorHygrometer_humidity
{
public:
  explicit Init_SensorHygrometer_humidity(::px4::msg::SensorHygrometer & msg)
  : msg_(msg)
  {}
  ::px4::msg::SensorHygrometer humidity(::px4::msg::SensorHygrometer::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::SensorHygrometer msg_;
};

class Init_SensorHygrometer_temperature
{
public:
  explicit Init_SensorHygrometer_temperature(::px4::msg::SensorHygrometer & msg)
  : msg_(msg)
  {}
  Init_SensorHygrometer_humidity temperature(::px4::msg::SensorHygrometer::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_SensorHygrometer_humidity(msg_);
  }

private:
  ::px4::msg::SensorHygrometer msg_;
};

class Init_SensorHygrometer_device_id
{
public:
  explicit Init_SensorHygrometer_device_id(::px4::msg::SensorHygrometer & msg)
  : msg_(msg)
  {}
  Init_SensorHygrometer_temperature device_id(::px4::msg::SensorHygrometer::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorHygrometer_temperature(msg_);
  }

private:
  ::px4::msg::SensorHygrometer msg_;
};

class Init_SensorHygrometer_timestamp_sample
{
public:
  explicit Init_SensorHygrometer_timestamp_sample(::px4::msg::SensorHygrometer & msg)
  : msg_(msg)
  {}
  Init_SensorHygrometer_device_id timestamp_sample(::px4::msg::SensorHygrometer::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorHygrometer_device_id(msg_);
  }

private:
  ::px4::msg::SensorHygrometer msg_;
};

class Init_SensorHygrometer_timestamp
{
public:
  Init_SensorHygrometer_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorHygrometer_timestamp_sample timestamp(::px4::msg::SensorHygrometer::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorHygrometer_timestamp_sample(msg_);
  }

private:
  ::px4::msg::SensorHygrometer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::SensorHygrometer>()
{
  return px4::msg::builder::Init_SensorHygrometer_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__SENSOR_HYGROMETER__BUILDER_HPP_
