// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PpsCapture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/pps_capture.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/pps_capture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PpsCapture & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: rtc_timestamp
  {
    out << "rtc_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.rtc_timestamp, out);
    out << ", ";
  }

  // member: pps_rate_exceeded_counter
  {
    out << "pps_rate_exceeded_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.pps_rate_exceeded_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PpsCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: rtc_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtc_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.rtc_timestamp, out);
    out << "\n";
  }

  // member: pps_rate_exceeded_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pps_rate_exceeded_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.pps_rate_exceeded_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PpsCapture & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::PpsCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::PpsCapture & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::PpsCapture>()
{
  return "px4_msgs::msg::PpsCapture";
}

template<>
inline const char * name<px4_msgs::msg::PpsCapture>()
{
  return "px4_msgs/msg/PpsCapture";
}

template<>
struct has_fixed_size<px4_msgs::msg::PpsCapture>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PpsCapture>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PpsCapture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__TRAITS_HPP_
