// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voice_interfaces:srv/VoiceCommand.idl
// generated code does not contain a copyright notice

#ifndef VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__STRUCT_H_
#define VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/VoiceCommand in the package voice_interfaces.
typedef struct voice_interfaces__srv__VoiceCommand_Request
{
  rosidl_runtime_c__String command;
} voice_interfaces__srv__VoiceCommand_Request;

// Struct for a sequence of voice_interfaces__srv__VoiceCommand_Request.
typedef struct voice_interfaces__srv__VoiceCommand_Request__Sequence
{
  voice_interfaces__srv__VoiceCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voice_interfaces__srv__VoiceCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'answer'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/VoiceCommand in the package voice_interfaces.
typedef struct voice_interfaces__srv__VoiceCommand_Response
{
  rosidl_runtime_c__String answer;
} voice_interfaces__srv__VoiceCommand_Response;

// Struct for a sequence of voice_interfaces__srv__VoiceCommand_Response.
typedef struct voice_interfaces__srv__VoiceCommand_Response__Sequence
{
  voice_interfaces__srv__VoiceCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voice_interfaces__srv__VoiceCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__STRUCT_H_
