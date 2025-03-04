// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/AirspeedWind.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/airspeed_wind.hpp"


#ifndef PX4__MSG__DETAIL__AIRSPEED_WIND__BUILDER_HPP_
#define PX4__MSG__DETAIL__AIRSPEED_WIND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/airspeed_wind__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_AirspeedWind_source
{
public:
  explicit Init_AirspeedWind_source(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  ::px4::msg::AirspeedWind source(::px4::msg::AirspeedWind::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_beta_innov_var
{
public:
  explicit Init_AirspeedWind_beta_innov_var(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_source beta_innov_var(::px4::msg::AirspeedWind::_beta_innov_var_type arg)
  {
    msg_.beta_innov_var = std::move(arg);
    return Init_AirspeedWind_source(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_beta_innov
{
public:
  explicit Init_AirspeedWind_beta_innov(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_beta_innov_var beta_innov(::px4::msg::AirspeedWind::_beta_innov_type arg)
  {
    msg_.beta_innov = std::move(arg);
    return Init_AirspeedWind_beta_innov_var(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_tas_scale_validated
{
public:
  explicit Init_AirspeedWind_tas_scale_validated(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_beta_innov tas_scale_validated(::px4::msg::AirspeedWind::_tas_scale_validated_type arg)
  {
    msg_.tas_scale_validated = std::move(arg);
    return Init_AirspeedWind_beta_innov(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_tas_scale_raw_var
{
public:
  explicit Init_AirspeedWind_tas_scale_raw_var(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_tas_scale_validated tas_scale_raw_var(::px4::msg::AirspeedWind::_tas_scale_raw_var_type arg)
  {
    msg_.tas_scale_raw_var = std::move(arg);
    return Init_AirspeedWind_tas_scale_validated(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_tas_scale_raw
{
public:
  explicit Init_AirspeedWind_tas_scale_raw(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_tas_scale_raw_var tas_scale_raw(::px4::msg::AirspeedWind::_tas_scale_raw_type arg)
  {
    msg_.tas_scale_raw = std::move(arg);
    return Init_AirspeedWind_tas_scale_raw_var(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_tas_innov_var
{
public:
  explicit Init_AirspeedWind_tas_innov_var(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_tas_scale_raw tas_innov_var(::px4::msg::AirspeedWind::_tas_innov_var_type arg)
  {
    msg_.tas_innov_var = std::move(arg);
    return Init_AirspeedWind_tas_scale_raw(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_tas_innov
{
public:
  explicit Init_AirspeedWind_tas_innov(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_tas_innov_var tas_innov(::px4::msg::AirspeedWind::_tas_innov_type arg)
  {
    msg_.tas_innov = std::move(arg);
    return Init_AirspeedWind_tas_innov_var(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_variance_east
{
public:
  explicit Init_AirspeedWind_variance_east(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_tas_innov variance_east(::px4::msg::AirspeedWind::_variance_east_type arg)
  {
    msg_.variance_east = std::move(arg);
    return Init_AirspeedWind_tas_innov(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_variance_north
{
public:
  explicit Init_AirspeedWind_variance_north(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_variance_east variance_north(::px4::msg::AirspeedWind::_variance_north_type arg)
  {
    msg_.variance_north = std::move(arg);
    return Init_AirspeedWind_variance_east(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_windspeed_east
{
public:
  explicit Init_AirspeedWind_windspeed_east(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_variance_north windspeed_east(::px4::msg::AirspeedWind::_windspeed_east_type arg)
  {
    msg_.windspeed_east = std::move(arg);
    return Init_AirspeedWind_variance_north(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_windspeed_north
{
public:
  explicit Init_AirspeedWind_windspeed_north(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_windspeed_east windspeed_north(::px4::msg::AirspeedWind::_windspeed_north_type arg)
  {
    msg_.windspeed_north = std::move(arg);
    return Init_AirspeedWind_windspeed_east(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_timestamp_sample
{
public:
  explicit Init_AirspeedWind_timestamp_sample(::px4::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_windspeed_north timestamp_sample(::px4::msg::AirspeedWind::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_AirspeedWind_windspeed_north(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_timestamp
{
public:
  Init_AirspeedWind_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AirspeedWind_timestamp_sample timestamp(::px4::msg::AirspeedWind::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AirspeedWind_timestamp_sample(msg_);
  }

private:
  ::px4::msg::AirspeedWind msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::AirspeedWind>()
{
  return px4::msg::builder::Init_AirspeedWind_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__AIRSPEED_WIND__BUILDER_HPP_
