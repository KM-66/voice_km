// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voice_interfaces:srv/VoiceCommand.idl
// generated code does not contain a copyright notice

#ifndef VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__STRUCT_HPP_
#define VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__voice_interfaces__srv__VoiceCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__voice_interfaces__srv__VoiceCommand_Request __declspec(deprecated)
#endif

namespace voice_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VoiceCommand_Request_
{
  using Type = VoiceCommand_Request_<ContainerAllocator>;

  explicit VoiceCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit VoiceCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voice_interfaces__srv__VoiceCommand_Request
    std::shared_ptr<voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voice_interfaces__srv__VoiceCommand_Request
    std::shared_ptr<voice_interfaces::srv::VoiceCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoiceCommand_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoiceCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoiceCommand_Request_

// alias to use template instance with default allocator
using VoiceCommand_Request =
  voice_interfaces::srv::VoiceCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace voice_interfaces


#ifndef _WIN32
# define DEPRECATED__voice_interfaces__srv__VoiceCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__voice_interfaces__srv__VoiceCommand_Response __declspec(deprecated)
#endif

namespace voice_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VoiceCommand_Response_
{
  using Type = VoiceCommand_Response_<ContainerAllocator>;

  explicit VoiceCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
    }
  }

  explicit VoiceCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : answer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
    }
  }

  // field types and members
  using _answer_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__answer(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voice_interfaces__srv__VoiceCommand_Response
    std::shared_ptr<voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voice_interfaces__srv__VoiceCommand_Response
    std::shared_ptr<voice_interfaces::srv::VoiceCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoiceCommand_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoiceCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoiceCommand_Response_

// alias to use template instance with default allocator
using VoiceCommand_Response =
  voice_interfaces::srv::VoiceCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace voice_interfaces

namespace voice_interfaces
{

namespace srv
{

struct VoiceCommand
{
  using Request = voice_interfaces::srv::VoiceCommand_Request;
  using Response = voice_interfaces::srv::VoiceCommand_Response;
};

}  // namespace srv

}  // namespace voice_interfaces

#endif  // VOICE_INTERFACES__SRV__DETAIL__VOICE_COMMAND__STRUCT_HPP_
