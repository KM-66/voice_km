// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from voice_interfaces:srv/VoiceCommand.idl
// generated code does not contain a copyright notice

#ifndef VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__FUNCTIONS_H_
#define VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "voice_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "voice_interfaces/srv/detail/voice_command__struct.h"

/// Initialize srv/VoiceCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * voice_interfaces__srv__VoiceCommand_Request
 * )) before or use
 * voice_interfaces__srv__VoiceCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Request__init(voice_interfaces__srv__VoiceCommand_Request * msg);

/// Finalize srv/VoiceCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
void
voice_interfaces__srv__VoiceCommand_Request__fini(voice_interfaces__srv__VoiceCommand_Request * msg);

/// Create srv/VoiceCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * voice_interfaces__srv__VoiceCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
voice_interfaces__srv__VoiceCommand_Request *
voice_interfaces__srv__VoiceCommand_Request__create();

/// Destroy srv/VoiceCommand message.
/**
 * It calls
 * voice_interfaces__srv__VoiceCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
void
voice_interfaces__srv__VoiceCommand_Request__destroy(voice_interfaces__srv__VoiceCommand_Request * msg);

/// Check for srv/VoiceCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Request__are_equal(const voice_interfaces__srv__VoiceCommand_Request * lhs, const voice_interfaces__srv__VoiceCommand_Request * rhs);

/// Copy a srv/VoiceCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Request__copy(
  const voice_interfaces__srv__VoiceCommand_Request * input,
  voice_interfaces__srv__VoiceCommand_Request * output);

/// Initialize array of srv/VoiceCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * voice_interfaces__srv__VoiceCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Request__Sequence__init(voice_interfaces__srv__VoiceCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/VoiceCommand messages.
/**
 * It calls
 * voice_interfaces__srv__VoiceCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
void
voice_interfaces__srv__VoiceCommand_Request__Sequence__fini(voice_interfaces__srv__VoiceCommand_Request__Sequence * array);

/// Create array of srv/VoiceCommand messages.
/**
 * It allocates the memory for the array and calls
 * voice_interfaces__srv__VoiceCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
voice_interfaces__srv__VoiceCommand_Request__Sequence *
voice_interfaces__srv__VoiceCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/VoiceCommand messages.
/**
 * It calls
 * voice_interfaces__srv__VoiceCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
void
voice_interfaces__srv__VoiceCommand_Request__Sequence__destroy(voice_interfaces__srv__VoiceCommand_Request__Sequence * array);

/// Check for srv/VoiceCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Request__Sequence__are_equal(const voice_interfaces__srv__VoiceCommand_Request__Sequence * lhs, const voice_interfaces__srv__VoiceCommand_Request__Sequence * rhs);

/// Copy an array of srv/VoiceCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Request__Sequence__copy(
  const voice_interfaces__srv__VoiceCommand_Request__Sequence * input,
  voice_interfaces__srv__VoiceCommand_Request__Sequence * output);

/// Initialize srv/VoiceCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * voice_interfaces__srv__VoiceCommand_Response
 * )) before or use
 * voice_interfaces__srv__VoiceCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Response__init(voice_interfaces__srv__VoiceCommand_Response * msg);

/// Finalize srv/VoiceCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
void
voice_interfaces__srv__VoiceCommand_Response__fini(voice_interfaces__srv__VoiceCommand_Response * msg);

/// Create srv/VoiceCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * voice_interfaces__srv__VoiceCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
voice_interfaces__srv__VoiceCommand_Response *
voice_interfaces__srv__VoiceCommand_Response__create();

/// Destroy srv/VoiceCommand message.
/**
 * It calls
 * voice_interfaces__srv__VoiceCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
void
voice_interfaces__srv__VoiceCommand_Response__destroy(voice_interfaces__srv__VoiceCommand_Response * msg);

/// Check for srv/VoiceCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Response__are_equal(const voice_interfaces__srv__VoiceCommand_Response * lhs, const voice_interfaces__srv__VoiceCommand_Response * rhs);

/// Copy a srv/VoiceCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Response__copy(
  const voice_interfaces__srv__VoiceCommand_Response * input,
  voice_interfaces__srv__VoiceCommand_Response * output);

/// Initialize array of srv/VoiceCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * voice_interfaces__srv__VoiceCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Response__Sequence__init(voice_interfaces__srv__VoiceCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/VoiceCommand messages.
/**
 * It calls
 * voice_interfaces__srv__VoiceCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
void
voice_interfaces__srv__VoiceCommand_Response__Sequence__fini(voice_interfaces__srv__VoiceCommand_Response__Sequence * array);

/// Create array of srv/VoiceCommand messages.
/**
 * It allocates the memory for the array and calls
 * voice_interfaces__srv__VoiceCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
voice_interfaces__srv__VoiceCommand_Response__Sequence *
voice_interfaces__srv__VoiceCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/VoiceCommand messages.
/**
 * It calls
 * voice_interfaces__srv__VoiceCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
void
voice_interfaces__srv__VoiceCommand_Response__Sequence__destroy(voice_interfaces__srv__VoiceCommand_Response__Sequence * array);

/// Check for srv/VoiceCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Response__Sequence__are_equal(const voice_interfaces__srv__VoiceCommand_Response__Sequence * lhs, const voice_interfaces__srv__VoiceCommand_Response__Sequence * rhs);

/// Copy an array of srv/VoiceCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_voice_interfaces
bool
voice_interfaces__srv__VoiceCommand_Response__Sequence__copy(
  const voice_interfaces__srv__VoiceCommand_Response__Sequence * input,
  voice_interfaces__srv__VoiceCommand_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__FUNCTIONS_H_
