// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_task_constructor_msgs:msg/Property.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_task_constructor_msgs/msg/detail/property__functions.h"
#include "moveit_task_constructor_msgs/msg/detail/property__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_task_constructor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Property_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_task_constructor_msgs::msg::Property(_init);
}

void Property_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_task_constructor_msgs::msg::Property *>(message_memory);
  typed_message->~Property();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Property_message_member_array[4] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_task_constructor_msgs::msg::Property, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_task_constructor_msgs::msg::Property, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_task_constructor_msgs::msg::Property, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_task_constructor_msgs::msg::Property, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Property_message_members = {
  "moveit_task_constructor_msgs::msg",  // message namespace
  "Property",  // message name
  4,  // number of fields
  sizeof(moveit_task_constructor_msgs::msg::Property),
  Property_message_member_array,  // message members
  Property_init_function,  // function to initialize message memory (memory has to be allocated)
  Property_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Property_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Property_message_members,
  get_message_typesupport_handle_function,
  &moveit_task_constructor_msgs__msg__Property__get_type_hash,
  &moveit_task_constructor_msgs__msg__Property__get_type_description,
  &moveit_task_constructor_msgs__msg__Property__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace moveit_task_constructor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_task_constructor_msgs::msg::Property>()
{
  return &::moveit_task_constructor_msgs::msg::rosidl_typesupport_introspection_cpp::Property_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_task_constructor_msgs, msg, Property)() {
  return &::moveit_task_constructor_msgs::msg::rosidl_typesupport_introspection_cpp::Property_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
