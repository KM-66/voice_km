// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voice_interfaces:srv/VoiceCommand.idl
// generated code does not contain a copyright notice

#ifndef VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__BUILDER_HPP_
#define VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voice_interfaces/srv/detail/voice_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voice_interfaces
{

namespace srv
{

namespace builder
{

class Init_VoiceCommand_Request_command
{
public:
  Init_VoiceCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::voice_interfaces::srv::VoiceCommand_Request command(::voice_interfaces::srv::VoiceCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voice_interfaces::srv::VoiceCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::voice_interfaces::srv::VoiceCommand_Request>()
{
  return voice_interfaces::srv::builder::Init_VoiceCommand_Request_command();
}

}  // namespace voice_interfaces


namespace voice_interfaces
{

namespace srv
{

namespace builder
{

class Init_VoiceCommand_Response_answer
{
public:
  Init_VoiceCommand_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::voice_interfaces::srv::VoiceCommand_Response answer(::voice_interfaces::srv::VoiceCommand_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voice_interfaces::srv::VoiceCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::voice_interfaces::srv::VoiceCommand_Response>()
{
  return voice_interfaces::srv::builder::Init_VoiceCommand_Response_answer();
}

}  // namespace voice_interfaces

#endif  // VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__BUILDER_HPP_
