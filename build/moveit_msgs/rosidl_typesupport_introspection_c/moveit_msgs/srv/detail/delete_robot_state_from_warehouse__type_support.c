// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/DeleteRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"
#include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__struct.h"


// Include directives for member types
// Member `name`
// Member `robot`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__init(message_memory);
}

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_fini_function(void * message_memory)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request, robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "DeleteRobotStateFromWarehouse_Request",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request),
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_member_array,  // message members
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_type_support_handle = {
  0,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_hash,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_description,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Request)() {
  if (!moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__init(message_memory);
}

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_fini_function(void * message_memory)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "DeleteRobotStateFromWarehouse_Response",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response),
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_member_array,  // message members
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_type_support_handle = {
  0,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_hash,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_description,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Response)() {
  if (!moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "moveit_msgs/srv/delete_robot_state_from_warehouse.h"
// Member `request`
// Member `response`
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__init(message_memory);
}

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_fini_function(void * message_memory)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__fini(message_memory);
}

size_t moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__size_function__DeleteRobotStateFromWarehouse_Event__request(
  const void * untyped_member)
{
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * member =
    (const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_const_function__DeleteRobotStateFromWarehouse_Event__request(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * member =
    (const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_function__DeleteRobotStateFromWarehouse_Event__request(
  void * untyped_member, size_t index)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * member =
    (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__fetch_function__DeleteRobotStateFromWarehouse_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * item =
    ((const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request *)
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_const_function__DeleteRobotStateFromWarehouse_Event__request(untyped_member, index));
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * value =
    (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__assign_function__DeleteRobotStateFromWarehouse_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * item =
    ((moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request *)
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_function__DeleteRobotStateFromWarehouse_Event__request(untyped_member, index));
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * value =
    (const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__resize_function__DeleteRobotStateFromWarehouse_Event__request(
  void * untyped_member, size_t size)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * member =
    (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence *)(untyped_member);
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__fini(member);
  return moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__init(member, size);
}

size_t moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__size_function__DeleteRobotStateFromWarehouse_Event__response(
  const void * untyped_member)
{
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * member =
    (const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_const_function__DeleteRobotStateFromWarehouse_Event__response(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * member =
    (const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_function__DeleteRobotStateFromWarehouse_Event__response(
  void * untyped_member, size_t index)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * member =
    (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__fetch_function__DeleteRobotStateFromWarehouse_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * item =
    ((const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response *)
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_const_function__DeleteRobotStateFromWarehouse_Event__response(untyped_member, index));
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * value =
    (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__assign_function__DeleteRobotStateFromWarehouse_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * item =
    ((moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response *)
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_function__DeleteRobotStateFromWarehouse_Event__response(untyped_member, index));
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * value =
    (const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__resize_function__DeleteRobotStateFromWarehouse_Event__response(
  void * untyped_member, size_t size)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * member =
    (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence *)(untyped_member);
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__fini(member);
  return moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event, request),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__size_function__DeleteRobotStateFromWarehouse_Event__request,  // size() function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_const_function__DeleteRobotStateFromWarehouse_Event__request,  // get_const(index) function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_function__DeleteRobotStateFromWarehouse_Event__request,  // get(index) function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__fetch_function__DeleteRobotStateFromWarehouse_Event__request,  // fetch(index, &value) function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__assign_function__DeleteRobotStateFromWarehouse_Event__request,  // assign(index, value) function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__resize_function__DeleteRobotStateFromWarehouse_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event, response),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__size_function__DeleteRobotStateFromWarehouse_Event__response,  // size() function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_const_function__DeleteRobotStateFromWarehouse_Event__response,  // get_const(index) function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__get_function__DeleteRobotStateFromWarehouse_Event__response,  // get(index) function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__fetch_function__DeleteRobotStateFromWarehouse_Event__response,  // fetch(index, &value) function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__assign_function__DeleteRobotStateFromWarehouse_Event__response,  // assign(index, value) function pointer
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__resize_function__DeleteRobotStateFromWarehouse_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_members = {
  "moveit_msgs__srv",  // message namespace
  "DeleteRobotStateFromWarehouse_Event",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event),
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_member_array,  // message members
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_type_support_handle = {
  0,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_hash,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_description,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Event)() {
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Request)();
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Response)();
  if (!moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_service_members = {
  "moveit_msgs__srv",  // service namespace
  "DeleteRobotStateFromWarehouse",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_type_support_handle,
  NULL,  // response message
  // moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_type_support_handle
  NULL  // event_message
  // moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_type_support_handle
};


static rosidl_service_type_support_t moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_service_type_support_handle = {
  0,
  &moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_service_members,
  get_service_typesupport_handle_function,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Request_message_type_support_handle,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Response_message_type_support_handle,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    DeleteRobotStateFromWarehouse
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    DeleteRobotStateFromWarehouse
  ),
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_hash,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_description,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse)() {
  if (!moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Event)()->data;
  }

  return &moveit_msgs__srv__detail__delete_robot_state_from_warehouse__rosidl_typesupport_introspection_c__DeleteRobotStateFromWarehouse_service_type_support_handle;
}
