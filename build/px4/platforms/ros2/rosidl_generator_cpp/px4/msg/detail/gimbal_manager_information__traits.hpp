// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4:msg/GimbalManagerInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/gimbal_manager_information.hpp"


#ifndef PX4__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__TRAITS_HPP_
#define PX4__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4/msg/detail/gimbal_manager_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbalManagerInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: cap_flags
  {
    out << "cap_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.cap_flags, out);
    out << ", ";
  }

  // member: gimbal_device_id
  {
    out << "gimbal_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_device_id, out);
    out << ", ";
  }

  // member: roll_min
  {
    out << "roll_min: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_min, out);
    out << ", ";
  }

  // member: roll_max
  {
    out << "roll_max: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_max, out);
    out << ", ";
  }

  // member: pitch_min
  {
    out << "pitch_min: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_min, out);
    out << ", ";
  }

  // member: pitch_max
  {
    out << "pitch_max: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_max, out);
    out << ", ";
  }

  // member: yaw_min
  {
    out << "yaw_min: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_min, out);
    out << ", ";
  }

  // member: yaw_max
  {
    out << "yaw_max: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbalManagerInformation & msg,
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

  // member: cap_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cap_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.cap_flags, out);
    out << "\n";
  }

  // member: gimbal_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_device_id, out);
    out << "\n";
  }

  // member: roll_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_min: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_min, out);
    out << "\n";
  }

  // member: roll_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_max: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_max, out);
    out << "\n";
  }

  // member: pitch_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_min: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_min, out);
    out << "\n";
  }

  // member: pitch_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_max: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_max, out);
    out << "\n";
  }

  // member: yaw_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_min: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_min, out);
    out << "\n";
  }

  // member: yaw_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_max: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbalManagerInformation & msg, bool use_flow_style = false)
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

}  // namespace px4

namespace rosidl_generator_traits
{

[[deprecated("use px4::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4::msg::GimbalManagerInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4::msg::GimbalManagerInformation & msg)
{
  return px4::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4::msg::GimbalManagerInformation>()
{
  return "px4::msg::GimbalManagerInformation";
}

template<>
inline const char * name<px4::msg::GimbalManagerInformation>()
{
  return "px4/msg/GimbalManagerInformation";
}

template<>
struct has_fixed_size<px4::msg::GimbalManagerInformation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4::msg::GimbalManagerInformation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4::msg::GimbalManagerInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__TRAITS_HPP_
