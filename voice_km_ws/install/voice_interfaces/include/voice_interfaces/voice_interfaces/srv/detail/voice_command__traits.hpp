// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voice_interfaces:srv/VoiceCommand.idl
// generated code does not contain a copyright notice

#ifndef VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__TRAITS_HPP_
#define VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voice_interfaces/srv/detail/voice_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voice_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VoiceCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::srv::VoiceCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::srv::VoiceCommand_Request & msg)
{
  return voice_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::srv::VoiceCommand_Request>()
{
  return "voice_interfaces::srv::VoiceCommand_Request";
}

template<>
inline const char * name<voice_interfaces::srv::VoiceCommand_Request>()
{
  return "voice_interfaces/srv/VoiceCommand_Request";
}

template<>
struct has_fixed_size<voice_interfaces::srv::VoiceCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voice_interfaces::srv::VoiceCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voice_interfaces::srv::VoiceCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace voice_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VoiceCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::srv::VoiceCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::srv::VoiceCommand_Response & msg)
{
  return voice_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::srv::VoiceCommand_Response>()
{
  return "voice_interfaces::srv::VoiceCommand_Response";
}

template<>
inline const char * name<voice_interfaces::srv::VoiceCommand_Response>()
{
  return "voice_interfaces/srv/VoiceCommand_Response";
}

template<>
struct has_fixed_size<voice_interfaces::srv::VoiceCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voice_interfaces::srv::VoiceCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voice_interfaces::srv::VoiceCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<voice_interfaces::srv::VoiceCommand>()
{
  return "voice_interfaces::srv::VoiceCommand";
}

template<>
inline const char * name<voice_interfaces::srv::VoiceCommand>()
{
  return "voice_interfaces/srv/VoiceCommand";
}

template<>
struct has_fixed_size<voice_interfaces::srv::VoiceCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<voice_interfaces::srv::VoiceCommand_Request>::value &&
    has_fixed_size<voice_interfaces::srv::VoiceCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<voice_interfaces::srv::VoiceCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<voice_interfaces::srv::VoiceCommand_Request>::value &&
    has_bounded_size<voice_interfaces::srv::VoiceCommand_Response>::value
  >
{
};

template<>
struct is_service<voice_interfaces::srv::VoiceCommand>
  : std::true_type
{
};

template<>
struct is_service_request<voice_interfaces::srv::VoiceCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<voice_interfaces::srv::VoiceCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__TRAITS_HPP_
