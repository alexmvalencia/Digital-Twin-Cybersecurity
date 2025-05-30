// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/EstimatorBias.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/estimator_bias.hpp"


#ifndef PX4__MSG__DETAIL__ESTIMATOR_BIAS__BUILDER_HPP_
#define PX4__MSG__DETAIL__ESTIMATOR_BIAS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/estimator_bias__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_EstimatorBias_innov_test_ratio
{
public:
  explicit Init_EstimatorBias_innov_test_ratio(::px4::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  ::px4::msg::EstimatorBias innov_test_ratio(::px4::msg::EstimatorBias::_innov_test_ratio_type arg)
  {
    msg_.innov_test_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_innov_var
{
public:
  explicit Init_EstimatorBias_innov_var(::px4::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_innov_test_ratio innov_var(::px4::msg::EstimatorBias::_innov_var_type arg)
  {
    msg_.innov_var = std::move(arg);
    return Init_EstimatorBias_innov_test_ratio(msg_);
  }

private:
  ::px4::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_innov
{
public:
  explicit Init_EstimatorBias_innov(::px4::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_innov_var innov(::px4::msg::EstimatorBias::_innov_type arg)
  {
    msg_.innov = std::move(arg);
    return Init_EstimatorBias_innov_var(msg_);
  }

private:
  ::px4::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_bias_var
{
public:
  explicit Init_EstimatorBias_bias_var(::px4::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_innov bias_var(::px4::msg::EstimatorBias::_bias_var_type arg)
  {
    msg_.bias_var = std::move(arg);
    return Init_EstimatorBias_innov(msg_);
  }

private:
  ::px4::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_bias
{
public:
  explicit Init_EstimatorBias_bias(::px4::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_bias_var bias(::px4::msg::EstimatorBias::_bias_type arg)
  {
    msg_.bias = std::move(arg);
    return Init_EstimatorBias_bias_var(msg_);
  }

private:
  ::px4::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_device_id
{
public:
  explicit Init_EstimatorBias_device_id(::px4::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_bias device_id(::px4::msg::EstimatorBias::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_EstimatorBias_bias(msg_);
  }

private:
  ::px4::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_timestamp_sample
{
public:
  explicit Init_EstimatorBias_timestamp_sample(::px4::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_device_id timestamp_sample(::px4::msg::EstimatorBias::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorBias_device_id(msg_);
  }

private:
  ::px4::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_timestamp
{
public:
  Init_EstimatorBias_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorBias_timestamp_sample timestamp(::px4::msg::EstimatorBias::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorBias_timestamp_sample(msg_);
  }

private:
  ::px4::msg::EstimatorBias msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::EstimatorBias>()
{
  return px4::msg::builder::Init_EstimatorBias_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ESTIMATOR_BIAS__BUILDER_HPP_
