// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4:msg/MavlinkTunnel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/mavlink_tunnel.hpp"


#ifndef PX4__MSG__DETAIL__MAVLINK_TUNNEL__TRAITS_HPP_
#define PX4__MSG__DETAIL__MAVLINK_TUNNEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4/msg/detail/mavlink_tunnel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4
{

namespace msg
{

inline void to_flow_style_yaml(
  const MavlinkTunnel & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: payload_type
  {
    out << "payload_type: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_type, out);
    out << ", ";
  }

  // member: target_system
  {
    out << "target_system: ";
    rosidl_generator_traits::value_to_yaml(msg.target_system, out);
    out << ", ";
  }

  // member: target_component
  {
    out << "target_component: ";
    rosidl_generator_traits::value_to_yaml(msg.target_component, out);
    out << ", ";
  }

  // member: payload_length
  {
    out << "payload_length: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_length, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MavlinkTunnel & msg,
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

  // member: payload_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_type: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_type, out);
    out << "\n";
  }

  // member: target_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_system: ";
    rosidl_generator_traits::value_to_yaml(msg.target_system, out);
    out << "\n";
  }

  // member: target_component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_component: ";
    rosidl_generator_traits::value_to_yaml(msg.target_component, out);
    out << "\n";
  }

  // member: payload_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_length: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_length, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MavlinkTunnel & msg, bool use_flow_style = false)
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
  const px4::msg::MavlinkTunnel & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4::msg::MavlinkTunnel & msg)
{
  return px4::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4::msg::MavlinkTunnel>()
{
  return "px4::msg::MavlinkTunnel";
}

template<>
inline const char * name<px4::msg::MavlinkTunnel>()
{
  return "px4/msg/MavlinkTunnel";
}

template<>
struct has_fixed_size<px4::msg::MavlinkTunnel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4::msg::MavlinkTunnel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4::msg::MavlinkTunnel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4__MSG__DETAIL__MAVLINK_TUNNEL__TRAITS_HPP_
