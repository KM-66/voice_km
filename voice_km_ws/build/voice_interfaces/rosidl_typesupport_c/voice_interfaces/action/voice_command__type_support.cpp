// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from voice_interfaces:action/VoiceCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "voice_interfaces/action/detail/voice_command__struct.h"
#include "voice_interfaces/action/detail/voice_command__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_Goal_type_support_ids_t;

static const _VoiceCommand_Goal_type_support_ids_t _VoiceCommand_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_Goal_type_support_symbol_names_t _VoiceCommand_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_Goal)),
  }
};

typedef struct _VoiceCommand_Goal_type_support_data_t
{
  void * data[2];
} _VoiceCommand_Goal_type_support_data_t;

static _VoiceCommand_Goal_type_support_data_t _VoiceCommand_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_Goal_message_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoiceCommand_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_Goal)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_Result_type_support_ids_t;

static const _VoiceCommand_Result_type_support_ids_t _VoiceCommand_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_Result_type_support_symbol_names_t _VoiceCommand_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_Result)),
  }
};

typedef struct _VoiceCommand_Result_type_support_data_t
{
  void * data[2];
} _VoiceCommand_Result_type_support_data_t;

static _VoiceCommand_Result_type_support_data_t _VoiceCommand_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_Result_message_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_Result_message_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_Result_message_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoiceCommand_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_Result)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_Feedback_type_support_ids_t;

static const _VoiceCommand_Feedback_type_support_ids_t _VoiceCommand_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_Feedback_type_support_symbol_names_t _VoiceCommand_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_Feedback)),
  }
};

typedef struct _VoiceCommand_Feedback_type_support_data_t
{
  void * data[2];
} _VoiceCommand_Feedback_type_support_data_t;

static _VoiceCommand_Feedback_type_support_data_t _VoiceCommand_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_Feedback_message_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoiceCommand_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_Feedback)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_SendGoal_Request_type_support_ids_t;

static const _VoiceCommand_SendGoal_Request_type_support_ids_t _VoiceCommand_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_SendGoal_Request_type_support_symbol_names_t _VoiceCommand_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_SendGoal_Request)),
  }
};

typedef struct _VoiceCommand_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _VoiceCommand_SendGoal_Request_type_support_data_t;

static _VoiceCommand_SendGoal_Request_type_support_data_t _VoiceCommand_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_SendGoal_Request_message_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoiceCommand_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_SendGoal_Request)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_SendGoal_Response_type_support_ids_t;

static const _VoiceCommand_SendGoal_Response_type_support_ids_t _VoiceCommand_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_SendGoal_Response_type_support_symbol_names_t _VoiceCommand_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_SendGoal_Response)),
  }
};

typedef struct _VoiceCommand_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _VoiceCommand_SendGoal_Response_type_support_data_t;

static _VoiceCommand_SendGoal_Response_type_support_data_t _VoiceCommand_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_SendGoal_Response_message_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoiceCommand_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_SendGoal_Response)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_SendGoal_type_support_ids_t;

static const _VoiceCommand_SendGoal_type_support_ids_t _VoiceCommand_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_SendGoal_type_support_symbol_names_t _VoiceCommand_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_SendGoal)),
  }
};

typedef struct _VoiceCommand_SendGoal_type_support_data_t
{
  void * data[2];
} _VoiceCommand_SendGoal_type_support_data_t;

static _VoiceCommand_SendGoal_type_support_data_t _VoiceCommand_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_SendGoal_service_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t VoiceCommand_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_SendGoal)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_GetResult_Request_type_support_ids_t;

static const _VoiceCommand_GetResult_Request_type_support_ids_t _VoiceCommand_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_GetResult_Request_type_support_symbol_names_t _VoiceCommand_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_GetResult_Request)),
  }
};

typedef struct _VoiceCommand_GetResult_Request_type_support_data_t
{
  void * data[2];
} _VoiceCommand_GetResult_Request_type_support_data_t;

static _VoiceCommand_GetResult_Request_type_support_data_t _VoiceCommand_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_GetResult_Request_message_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoiceCommand_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_GetResult_Request)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_GetResult_Response_type_support_ids_t;

static const _VoiceCommand_GetResult_Response_type_support_ids_t _VoiceCommand_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_GetResult_Response_type_support_symbol_names_t _VoiceCommand_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_GetResult_Response)),
  }
};

typedef struct _VoiceCommand_GetResult_Response_type_support_data_t
{
  void * data[2];
} _VoiceCommand_GetResult_Response_type_support_data_t;

static _VoiceCommand_GetResult_Response_type_support_data_t _VoiceCommand_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_GetResult_Response_message_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoiceCommand_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_GetResult_Response)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_GetResult_type_support_ids_t;

static const _VoiceCommand_GetResult_type_support_ids_t _VoiceCommand_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_GetResult_type_support_symbol_names_t _VoiceCommand_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_GetResult)),
  }
};

typedef struct _VoiceCommand_GetResult_type_support_data_t
{
  void * data[2];
} _VoiceCommand_GetResult_type_support_data_t;

static _VoiceCommand_GetResult_type_support_data_t _VoiceCommand_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_GetResult_service_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t VoiceCommand_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_GetResult)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__struct.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voice_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _VoiceCommand_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoiceCommand_FeedbackMessage_type_support_ids_t;

static const _VoiceCommand_FeedbackMessage_type_support_ids_t _VoiceCommand_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VoiceCommand_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoiceCommand_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoiceCommand_FeedbackMessage_type_support_symbol_names_t _VoiceCommand_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voice_interfaces, action, VoiceCommand_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voice_interfaces, action, VoiceCommand_FeedbackMessage)),
  }
};

typedef struct _VoiceCommand_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _VoiceCommand_FeedbackMessage_type_support_data_t;

static _VoiceCommand_FeedbackMessage_type_support_data_t _VoiceCommand_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoiceCommand_FeedbackMessage_message_typesupport_map = {
  2,
  "voice_interfaces",
  &_VoiceCommand_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_VoiceCommand_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_VoiceCommand_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoiceCommand_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoiceCommand_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace voice_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_FeedbackMessage)() {
  return &::voice_interfaces::action::rosidl_typesupport_c::VoiceCommand_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "voice_interfaces/action/voice_command.h"
// already included above
// #include "voice_interfaces/action/detail/voice_command__type_support.h"

static rosidl_action_type_support_t _voice_interfaces__action__VoiceCommand__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, voice_interfaces, action, VoiceCommand)()
{
  // Thread-safe by always writing the same values to the static struct
  _voice_interfaces__action__VoiceCommand__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_SendGoal)();
  _voice_interfaces__action__VoiceCommand__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_GetResult)();
  _voice_interfaces__action__VoiceCommand__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _voice_interfaces__action__VoiceCommand__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, voice_interfaces, action, VoiceCommand_FeedbackMessage)();
  _voice_interfaces__action__VoiceCommand__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_voice_interfaces__action__VoiceCommand__typesupport_c;
}

#ifdef __cplusplus
}
#endif
