// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voice_interfaces:action/VoiceCommand.idl
// generated code does not contain a copyright notice

#ifndef VOICE_INTERFACES__ACTION__DETAIL__VOICE_COMMAND__TRAITS_HPP_
#define VOICE_INTERFACES__ACTION__DETAIL__VOICE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voice_interfaces/action/detail/voice_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voice_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const VoiceCommand_Goal & msg,
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
  const VoiceCommand_Goal & msg,
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

inline std::string to_yaml(const VoiceCommand_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::action::VoiceCommand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::action::VoiceCommand_Goal & msg)
{
  return voice_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_Goal>()
{
  return "voice_interfaces::action::VoiceCommand_Goal";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_Goal>()
{
  return "voice_interfaces/action/VoiceCommand_Goal";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voice_interfaces::action::VoiceCommand_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace voice_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const VoiceCommand_Result & msg,
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
  const VoiceCommand_Result & msg,
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

inline std::string to_yaml(const VoiceCommand_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::action::VoiceCommand_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::action::VoiceCommand_Result & msg)
{
  return voice_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_Result>()
{
  return "voice_interfaces::action::VoiceCommand_Result";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_Result>()
{
  return "voice_interfaces/action/VoiceCommand_Result";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voice_interfaces::action::VoiceCommand_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace voice_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const VoiceCommand_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: process
  {
    out << "process: ";
    rosidl_generator_traits::value_to_yaml(msg.process, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceCommand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: process
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process: ";
    rosidl_generator_traits::value_to_yaml(msg.process, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceCommand_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::action::VoiceCommand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::action::VoiceCommand_Feedback & msg)
{
  return voice_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_Feedback>()
{
  return "voice_interfaces::action::VoiceCommand_Feedback";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_Feedback>()
{
  return "voice_interfaces/action/VoiceCommand_Feedback";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voice_interfaces::action::VoiceCommand_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "voice_interfaces/action/detail/voice_command__traits.hpp"

namespace voice_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const VoiceCommand_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceCommand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceCommand_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::action::VoiceCommand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::action::VoiceCommand_SendGoal_Request & msg)
{
  return voice_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_SendGoal_Request>()
{
  return "voice_interfaces::action::VoiceCommand_SendGoal_Request";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_SendGoal_Request>()
{
  return "voice_interfaces/action/VoiceCommand_SendGoal_Request";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<voice_interfaces::action::VoiceCommand_Goal>::value> {};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<voice_interfaces::action::VoiceCommand_Goal>::value> {};

template<>
struct is_message<voice_interfaces::action::VoiceCommand_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace voice_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const VoiceCommand_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceCommand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceCommand_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::action::VoiceCommand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::action::VoiceCommand_SendGoal_Response & msg)
{
  return voice_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_SendGoal_Response>()
{
  return "voice_interfaces::action::VoiceCommand_SendGoal_Response";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_SendGoal_Response>()
{
  return "voice_interfaces/action/VoiceCommand_SendGoal_Response";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<voice_interfaces::action::VoiceCommand_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_SendGoal>()
{
  return "voice_interfaces::action::VoiceCommand_SendGoal";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_SendGoal>()
{
  return "voice_interfaces/action/VoiceCommand_SendGoal";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<voice_interfaces::action::VoiceCommand_SendGoal_Request>::value &&
    has_fixed_size<voice_interfaces::action::VoiceCommand_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<voice_interfaces::action::VoiceCommand_SendGoal_Request>::value &&
    has_bounded_size<voice_interfaces::action::VoiceCommand_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<voice_interfaces::action::VoiceCommand_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<voice_interfaces::action::VoiceCommand_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<voice_interfaces::action::VoiceCommand_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace voice_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const VoiceCommand_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceCommand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceCommand_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::action::VoiceCommand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::action::VoiceCommand_GetResult_Request & msg)
{
  return voice_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_GetResult_Request>()
{
  return "voice_interfaces::action::VoiceCommand_GetResult_Request";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_GetResult_Request>()
{
  return "voice_interfaces/action/VoiceCommand_GetResult_Request";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<voice_interfaces::action::VoiceCommand_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "voice_interfaces/action/detail/voice_command__traits.hpp"

namespace voice_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const VoiceCommand_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceCommand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceCommand_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::action::VoiceCommand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::action::VoiceCommand_GetResult_Response & msg)
{
  return voice_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_GetResult_Response>()
{
  return "voice_interfaces::action::VoiceCommand_GetResult_Response";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_GetResult_Response>()
{
  return "voice_interfaces/action/VoiceCommand_GetResult_Response";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<voice_interfaces::action::VoiceCommand_Result>::value> {};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<voice_interfaces::action::VoiceCommand_Result>::value> {};

template<>
struct is_message<voice_interfaces::action::VoiceCommand_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_GetResult>()
{
  return "voice_interfaces::action::VoiceCommand_GetResult";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_GetResult>()
{
  return "voice_interfaces/action/VoiceCommand_GetResult";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<voice_interfaces::action::VoiceCommand_GetResult_Request>::value &&
    has_fixed_size<voice_interfaces::action::VoiceCommand_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<voice_interfaces::action::VoiceCommand_GetResult_Request>::value &&
    has_bounded_size<voice_interfaces::action::VoiceCommand_GetResult_Response>::value
  >
{
};

template<>
struct is_service<voice_interfaces::action::VoiceCommand_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<voice_interfaces::action::VoiceCommand_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<voice_interfaces::action::VoiceCommand_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "voice_interfaces/action/detail/voice_command__traits.hpp"

namespace voice_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const VoiceCommand_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceCommand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceCommand_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace voice_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use voice_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voice_interfaces::action::VoiceCommand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  voice_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voice_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const voice_interfaces::action::VoiceCommand_FeedbackMessage & msg)
{
  return voice_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<voice_interfaces::action::VoiceCommand_FeedbackMessage>()
{
  return "voice_interfaces::action::VoiceCommand_FeedbackMessage";
}

template<>
inline const char * name<voice_interfaces::action::VoiceCommand_FeedbackMessage>()
{
  return "voice_interfaces/action/VoiceCommand_FeedbackMessage";
}

template<>
struct has_fixed_size<voice_interfaces::action::VoiceCommand_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<voice_interfaces::action::VoiceCommand_Feedback>::value> {};

template<>
struct has_bounded_size<voice_interfaces::action::VoiceCommand_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<voice_interfaces::action::VoiceCommand_Feedback>::value> {};

template<>
struct is_message<voice_interfaces::action::VoiceCommand_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<voice_interfaces::action::VoiceCommand>
  : std::true_type
{
};

template<>
struct is_action_goal<voice_interfaces::action::VoiceCommand_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<voice_interfaces::action::VoiceCommand_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<voice_interfaces::action::VoiceCommand_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // VOICE_INTERFACES__ACTION__DETAIL__VOICE_COMMAND__TRAITS_HPP_
