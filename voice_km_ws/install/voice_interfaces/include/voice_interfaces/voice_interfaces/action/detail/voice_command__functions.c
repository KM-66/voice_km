// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from voice_interfaces:action/VoiceCommand.idl
// generated code does not contain a copyright notice
#include "voice_interfaces/action/detail/voice_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
voice_interfaces__action__VoiceCommand_Goal__init(voice_interfaces__action__VoiceCommand_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    voice_interfaces__action__VoiceCommand_Goal__fini(msg);
    return false;
  }
  return true;
}

void
voice_interfaces__action__VoiceCommand_Goal__fini(voice_interfaces__action__VoiceCommand_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
voice_interfaces__action__VoiceCommand_Goal__are_equal(const voice_interfaces__action__VoiceCommand_Goal * lhs, const voice_interfaces__action__VoiceCommand_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_Goal__copy(
  const voice_interfaces__action__VoiceCommand_Goal * input,
  voice_interfaces__action__VoiceCommand_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

voice_interfaces__action__VoiceCommand_Goal *
voice_interfaces__action__VoiceCommand_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Goal * msg = (voice_interfaces__action__VoiceCommand_Goal *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voice_interfaces__action__VoiceCommand_Goal));
  bool success = voice_interfaces__action__VoiceCommand_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voice_interfaces__action__VoiceCommand_Goal__destroy(voice_interfaces__action__VoiceCommand_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voice_interfaces__action__VoiceCommand_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voice_interfaces__action__VoiceCommand_Goal__Sequence__init(voice_interfaces__action__VoiceCommand_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Goal * data = NULL;

  if (size) {
    data = (voice_interfaces__action__VoiceCommand_Goal *)allocator.zero_allocate(size, sizeof(voice_interfaces__action__VoiceCommand_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voice_interfaces__action__VoiceCommand_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voice_interfaces__action__VoiceCommand_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voice_interfaces__action__VoiceCommand_Goal__Sequence__fini(voice_interfaces__action__VoiceCommand_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voice_interfaces__action__VoiceCommand_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voice_interfaces__action__VoiceCommand_Goal__Sequence *
voice_interfaces__action__VoiceCommand_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Goal__Sequence * array = (voice_interfaces__action__VoiceCommand_Goal__Sequence *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voice_interfaces__action__VoiceCommand_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voice_interfaces__action__VoiceCommand_Goal__Sequence__destroy(voice_interfaces__action__VoiceCommand_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voice_interfaces__action__VoiceCommand_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voice_interfaces__action__VoiceCommand_Goal__Sequence__are_equal(const voice_interfaces__action__VoiceCommand_Goal__Sequence * lhs, const voice_interfaces__action__VoiceCommand_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_Goal__Sequence__copy(
  const voice_interfaces__action__VoiceCommand_Goal__Sequence * input,
  voice_interfaces__action__VoiceCommand_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voice_interfaces__action__VoiceCommand_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voice_interfaces__action__VoiceCommand_Goal * data =
      (voice_interfaces__action__VoiceCommand_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voice_interfaces__action__VoiceCommand_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voice_interfaces__action__VoiceCommand_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `answer`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
voice_interfaces__action__VoiceCommand_Result__init(voice_interfaces__action__VoiceCommand_Result * msg)
{
  if (!msg) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__init(&msg->answer)) {
    voice_interfaces__action__VoiceCommand_Result__fini(msg);
    return false;
  }
  return true;
}

void
voice_interfaces__action__VoiceCommand_Result__fini(voice_interfaces__action__VoiceCommand_Result * msg)
{
  if (!msg) {
    return;
  }
  // answer
  rosidl_runtime_c__String__fini(&msg->answer);
}

bool
voice_interfaces__action__VoiceCommand_Result__are_equal(const voice_interfaces__action__VoiceCommand_Result * lhs, const voice_interfaces__action__VoiceCommand_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->answer), &(rhs->answer)))
  {
    return false;
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_Result__copy(
  const voice_interfaces__action__VoiceCommand_Result * input,
  voice_interfaces__action__VoiceCommand_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__copy(
      &(input->answer), &(output->answer)))
  {
    return false;
  }
  return true;
}

voice_interfaces__action__VoiceCommand_Result *
voice_interfaces__action__VoiceCommand_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Result * msg = (voice_interfaces__action__VoiceCommand_Result *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voice_interfaces__action__VoiceCommand_Result));
  bool success = voice_interfaces__action__VoiceCommand_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voice_interfaces__action__VoiceCommand_Result__destroy(voice_interfaces__action__VoiceCommand_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voice_interfaces__action__VoiceCommand_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voice_interfaces__action__VoiceCommand_Result__Sequence__init(voice_interfaces__action__VoiceCommand_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Result * data = NULL;

  if (size) {
    data = (voice_interfaces__action__VoiceCommand_Result *)allocator.zero_allocate(size, sizeof(voice_interfaces__action__VoiceCommand_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voice_interfaces__action__VoiceCommand_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voice_interfaces__action__VoiceCommand_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voice_interfaces__action__VoiceCommand_Result__Sequence__fini(voice_interfaces__action__VoiceCommand_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voice_interfaces__action__VoiceCommand_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voice_interfaces__action__VoiceCommand_Result__Sequence *
voice_interfaces__action__VoiceCommand_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Result__Sequence * array = (voice_interfaces__action__VoiceCommand_Result__Sequence *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voice_interfaces__action__VoiceCommand_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voice_interfaces__action__VoiceCommand_Result__Sequence__destroy(voice_interfaces__action__VoiceCommand_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voice_interfaces__action__VoiceCommand_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voice_interfaces__action__VoiceCommand_Result__Sequence__are_equal(const voice_interfaces__action__VoiceCommand_Result__Sequence * lhs, const voice_interfaces__action__VoiceCommand_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_Result__Sequence__copy(
  const voice_interfaces__action__VoiceCommand_Result__Sequence * input,
  voice_interfaces__action__VoiceCommand_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voice_interfaces__action__VoiceCommand_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voice_interfaces__action__VoiceCommand_Result * data =
      (voice_interfaces__action__VoiceCommand_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voice_interfaces__action__VoiceCommand_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voice_interfaces__action__VoiceCommand_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `process`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
voice_interfaces__action__VoiceCommand_Feedback__init(voice_interfaces__action__VoiceCommand_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // process
  if (!rosidl_runtime_c__String__init(&msg->process)) {
    voice_interfaces__action__VoiceCommand_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
voice_interfaces__action__VoiceCommand_Feedback__fini(voice_interfaces__action__VoiceCommand_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // process
  rosidl_runtime_c__String__fini(&msg->process);
}

bool
voice_interfaces__action__VoiceCommand_Feedback__are_equal(const voice_interfaces__action__VoiceCommand_Feedback * lhs, const voice_interfaces__action__VoiceCommand_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // process
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->process), &(rhs->process)))
  {
    return false;
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_Feedback__copy(
  const voice_interfaces__action__VoiceCommand_Feedback * input,
  voice_interfaces__action__VoiceCommand_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // process
  if (!rosidl_runtime_c__String__copy(
      &(input->process), &(output->process)))
  {
    return false;
  }
  return true;
}

voice_interfaces__action__VoiceCommand_Feedback *
voice_interfaces__action__VoiceCommand_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Feedback * msg = (voice_interfaces__action__VoiceCommand_Feedback *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voice_interfaces__action__VoiceCommand_Feedback));
  bool success = voice_interfaces__action__VoiceCommand_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voice_interfaces__action__VoiceCommand_Feedback__destroy(voice_interfaces__action__VoiceCommand_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voice_interfaces__action__VoiceCommand_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voice_interfaces__action__VoiceCommand_Feedback__Sequence__init(voice_interfaces__action__VoiceCommand_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Feedback * data = NULL;

  if (size) {
    data = (voice_interfaces__action__VoiceCommand_Feedback *)allocator.zero_allocate(size, sizeof(voice_interfaces__action__VoiceCommand_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voice_interfaces__action__VoiceCommand_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voice_interfaces__action__VoiceCommand_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voice_interfaces__action__VoiceCommand_Feedback__Sequence__fini(voice_interfaces__action__VoiceCommand_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voice_interfaces__action__VoiceCommand_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voice_interfaces__action__VoiceCommand_Feedback__Sequence *
voice_interfaces__action__VoiceCommand_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_Feedback__Sequence * array = (voice_interfaces__action__VoiceCommand_Feedback__Sequence *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voice_interfaces__action__VoiceCommand_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voice_interfaces__action__VoiceCommand_Feedback__Sequence__destroy(voice_interfaces__action__VoiceCommand_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voice_interfaces__action__VoiceCommand_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voice_interfaces__action__VoiceCommand_Feedback__Sequence__are_equal(const voice_interfaces__action__VoiceCommand_Feedback__Sequence * lhs, const voice_interfaces__action__VoiceCommand_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_Feedback__Sequence__copy(
  const voice_interfaces__action__VoiceCommand_Feedback__Sequence * input,
  voice_interfaces__action__VoiceCommand_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voice_interfaces__action__VoiceCommand_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voice_interfaces__action__VoiceCommand_Feedback * data =
      (voice_interfaces__action__VoiceCommand_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voice_interfaces__action__VoiceCommand_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voice_interfaces__action__VoiceCommand_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "voice_interfaces/action/detail/voice_command__functions.h"

bool
voice_interfaces__action__VoiceCommand_SendGoal_Request__init(voice_interfaces__action__VoiceCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    voice_interfaces__action__VoiceCommand_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!voice_interfaces__action__VoiceCommand_Goal__init(&msg->goal)) {
    voice_interfaces__action__VoiceCommand_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
voice_interfaces__action__VoiceCommand_SendGoal_Request__fini(voice_interfaces__action__VoiceCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  voice_interfaces__action__VoiceCommand_Goal__fini(&msg->goal);
}

bool
voice_interfaces__action__VoiceCommand_SendGoal_Request__are_equal(const voice_interfaces__action__VoiceCommand_SendGoal_Request * lhs, const voice_interfaces__action__VoiceCommand_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!voice_interfaces__action__VoiceCommand_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_SendGoal_Request__copy(
  const voice_interfaces__action__VoiceCommand_SendGoal_Request * input,
  voice_interfaces__action__VoiceCommand_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!voice_interfaces__action__VoiceCommand_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

voice_interfaces__action__VoiceCommand_SendGoal_Request *
voice_interfaces__action__VoiceCommand_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_SendGoal_Request * msg = (voice_interfaces__action__VoiceCommand_SendGoal_Request *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Request));
  bool success = voice_interfaces__action__VoiceCommand_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voice_interfaces__action__VoiceCommand_SendGoal_Request__destroy(voice_interfaces__action__VoiceCommand_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voice_interfaces__action__VoiceCommand_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence__init(voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_SendGoal_Request * data = NULL;

  if (size) {
    data = (voice_interfaces__action__VoiceCommand_SendGoal_Request *)allocator.zero_allocate(size, sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voice_interfaces__action__VoiceCommand_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voice_interfaces__action__VoiceCommand_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence__fini(voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voice_interfaces__action__VoiceCommand_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence *
voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence * array = (voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence__destroy(voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence__are_equal(const voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence * lhs, const voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence__copy(
  const voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence * input,
  voice_interfaces__action__VoiceCommand_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voice_interfaces__action__VoiceCommand_SendGoal_Request * data =
      (voice_interfaces__action__VoiceCommand_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voice_interfaces__action__VoiceCommand_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voice_interfaces__action__VoiceCommand_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
voice_interfaces__action__VoiceCommand_SendGoal_Response__init(voice_interfaces__action__VoiceCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    voice_interfaces__action__VoiceCommand_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
voice_interfaces__action__VoiceCommand_SendGoal_Response__fini(voice_interfaces__action__VoiceCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
voice_interfaces__action__VoiceCommand_SendGoal_Response__are_equal(const voice_interfaces__action__VoiceCommand_SendGoal_Response * lhs, const voice_interfaces__action__VoiceCommand_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_SendGoal_Response__copy(
  const voice_interfaces__action__VoiceCommand_SendGoal_Response * input,
  voice_interfaces__action__VoiceCommand_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

voice_interfaces__action__VoiceCommand_SendGoal_Response *
voice_interfaces__action__VoiceCommand_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_SendGoal_Response * msg = (voice_interfaces__action__VoiceCommand_SendGoal_Response *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Response));
  bool success = voice_interfaces__action__VoiceCommand_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voice_interfaces__action__VoiceCommand_SendGoal_Response__destroy(voice_interfaces__action__VoiceCommand_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voice_interfaces__action__VoiceCommand_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence__init(voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_SendGoal_Response * data = NULL;

  if (size) {
    data = (voice_interfaces__action__VoiceCommand_SendGoal_Response *)allocator.zero_allocate(size, sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voice_interfaces__action__VoiceCommand_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voice_interfaces__action__VoiceCommand_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence__fini(voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voice_interfaces__action__VoiceCommand_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence *
voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence * array = (voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence__destroy(voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence__are_equal(const voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence * lhs, const voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence__copy(
  const voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence * input,
  voice_interfaces__action__VoiceCommand_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voice_interfaces__action__VoiceCommand_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voice_interfaces__action__VoiceCommand_SendGoal_Response * data =
      (voice_interfaces__action__VoiceCommand_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voice_interfaces__action__VoiceCommand_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voice_interfaces__action__VoiceCommand_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
voice_interfaces__action__VoiceCommand_GetResult_Request__init(voice_interfaces__action__VoiceCommand_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    voice_interfaces__action__VoiceCommand_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
voice_interfaces__action__VoiceCommand_GetResult_Request__fini(voice_interfaces__action__VoiceCommand_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
voice_interfaces__action__VoiceCommand_GetResult_Request__are_equal(const voice_interfaces__action__VoiceCommand_GetResult_Request * lhs, const voice_interfaces__action__VoiceCommand_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_GetResult_Request__copy(
  const voice_interfaces__action__VoiceCommand_GetResult_Request * input,
  voice_interfaces__action__VoiceCommand_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

voice_interfaces__action__VoiceCommand_GetResult_Request *
voice_interfaces__action__VoiceCommand_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_GetResult_Request * msg = (voice_interfaces__action__VoiceCommand_GetResult_Request *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voice_interfaces__action__VoiceCommand_GetResult_Request));
  bool success = voice_interfaces__action__VoiceCommand_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voice_interfaces__action__VoiceCommand_GetResult_Request__destroy(voice_interfaces__action__VoiceCommand_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voice_interfaces__action__VoiceCommand_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence__init(voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_GetResult_Request * data = NULL;

  if (size) {
    data = (voice_interfaces__action__VoiceCommand_GetResult_Request *)allocator.zero_allocate(size, sizeof(voice_interfaces__action__VoiceCommand_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voice_interfaces__action__VoiceCommand_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voice_interfaces__action__VoiceCommand_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence__fini(voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voice_interfaces__action__VoiceCommand_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence *
voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence * array = (voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence__destroy(voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence__are_equal(const voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence * lhs, const voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence__copy(
  const voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence * input,
  voice_interfaces__action__VoiceCommand_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voice_interfaces__action__VoiceCommand_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voice_interfaces__action__VoiceCommand_GetResult_Request * data =
      (voice_interfaces__action__VoiceCommand_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voice_interfaces__action__VoiceCommand_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voice_interfaces__action__VoiceCommand_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "voice_interfaces/action/detail/voice_command__functions.h"

bool
voice_interfaces__action__VoiceCommand_GetResult_Response__init(voice_interfaces__action__VoiceCommand_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!voice_interfaces__action__VoiceCommand_Result__init(&msg->result)) {
    voice_interfaces__action__VoiceCommand_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
voice_interfaces__action__VoiceCommand_GetResult_Response__fini(voice_interfaces__action__VoiceCommand_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  voice_interfaces__action__VoiceCommand_Result__fini(&msg->result);
}

bool
voice_interfaces__action__VoiceCommand_GetResult_Response__are_equal(const voice_interfaces__action__VoiceCommand_GetResult_Response * lhs, const voice_interfaces__action__VoiceCommand_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!voice_interfaces__action__VoiceCommand_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_GetResult_Response__copy(
  const voice_interfaces__action__VoiceCommand_GetResult_Response * input,
  voice_interfaces__action__VoiceCommand_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!voice_interfaces__action__VoiceCommand_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

voice_interfaces__action__VoiceCommand_GetResult_Response *
voice_interfaces__action__VoiceCommand_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_GetResult_Response * msg = (voice_interfaces__action__VoiceCommand_GetResult_Response *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voice_interfaces__action__VoiceCommand_GetResult_Response));
  bool success = voice_interfaces__action__VoiceCommand_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voice_interfaces__action__VoiceCommand_GetResult_Response__destroy(voice_interfaces__action__VoiceCommand_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voice_interfaces__action__VoiceCommand_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence__init(voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_GetResult_Response * data = NULL;

  if (size) {
    data = (voice_interfaces__action__VoiceCommand_GetResult_Response *)allocator.zero_allocate(size, sizeof(voice_interfaces__action__VoiceCommand_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voice_interfaces__action__VoiceCommand_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voice_interfaces__action__VoiceCommand_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence__fini(voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voice_interfaces__action__VoiceCommand_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence *
voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence * array = (voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence__destroy(voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence__are_equal(const voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence * lhs, const voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence__copy(
  const voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence * input,
  voice_interfaces__action__VoiceCommand_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voice_interfaces__action__VoiceCommand_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voice_interfaces__action__VoiceCommand_GetResult_Response * data =
      (voice_interfaces__action__VoiceCommand_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voice_interfaces__action__VoiceCommand_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voice_interfaces__action__VoiceCommand_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "voice_interfaces/action/detail/voice_command__functions.h"

bool
voice_interfaces__action__VoiceCommand_FeedbackMessage__init(voice_interfaces__action__VoiceCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    voice_interfaces__action__VoiceCommand_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!voice_interfaces__action__VoiceCommand_Feedback__init(&msg->feedback)) {
    voice_interfaces__action__VoiceCommand_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
voice_interfaces__action__VoiceCommand_FeedbackMessage__fini(voice_interfaces__action__VoiceCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  voice_interfaces__action__VoiceCommand_Feedback__fini(&msg->feedback);
}

bool
voice_interfaces__action__VoiceCommand_FeedbackMessage__are_equal(const voice_interfaces__action__VoiceCommand_FeedbackMessage * lhs, const voice_interfaces__action__VoiceCommand_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!voice_interfaces__action__VoiceCommand_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_FeedbackMessage__copy(
  const voice_interfaces__action__VoiceCommand_FeedbackMessage * input,
  voice_interfaces__action__VoiceCommand_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!voice_interfaces__action__VoiceCommand_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

voice_interfaces__action__VoiceCommand_FeedbackMessage *
voice_interfaces__action__VoiceCommand_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_FeedbackMessage * msg = (voice_interfaces__action__VoiceCommand_FeedbackMessage *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voice_interfaces__action__VoiceCommand_FeedbackMessage));
  bool success = voice_interfaces__action__VoiceCommand_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voice_interfaces__action__VoiceCommand_FeedbackMessage__destroy(voice_interfaces__action__VoiceCommand_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voice_interfaces__action__VoiceCommand_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence__init(voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_FeedbackMessage * data = NULL;

  if (size) {
    data = (voice_interfaces__action__VoiceCommand_FeedbackMessage *)allocator.zero_allocate(size, sizeof(voice_interfaces__action__VoiceCommand_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voice_interfaces__action__VoiceCommand_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voice_interfaces__action__VoiceCommand_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence__fini(voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voice_interfaces__action__VoiceCommand_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence *
voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence * array = (voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence *)allocator.allocate(sizeof(voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence__destroy(voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence__are_equal(const voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence * lhs, const voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence__copy(
  const voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence * input,
  voice_interfaces__action__VoiceCommand_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voice_interfaces__action__VoiceCommand_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voice_interfaces__action__VoiceCommand_FeedbackMessage * data =
      (voice_interfaces__action__VoiceCommand_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voice_interfaces__action__VoiceCommand_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voice_interfaces__action__VoiceCommand_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voice_interfaces__action__VoiceCommand_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
