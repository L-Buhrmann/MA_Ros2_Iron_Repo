// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/detail/grasp_planning__functions.h"
#include "moveit_msgs/srv/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `group_name`
// Member `support_surfaces`
#include "rosidl_runtime_c/string_functions.h"
// Member `target`
// Member `movable_obstacles`
#include "moveit_msgs/msg/collision_object.h"
// Member `target`
// Member `movable_obstacles`
#include "moveit_msgs/msg/detail/collision_object__rosidl_typesupport_introspection_c.h"
// Member `candidate_grasps`
#include "moveit_msgs/msg/grasp.h"
// Member `candidate_grasps`
#include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__GraspPlanning_Request__init(message_memory);
}

void moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_fini_function(void * message_memory)
{
  moveit_msgs__srv__GraspPlanning_Request__fini(message_memory);
}

size_t moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Request__support_surfaces(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__support_surfaces(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__support_surfaces(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Request__support_surfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__support_surfaces(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Request__support_surfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__support_surfaces(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Request__support_surfaces(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Request__candidate_grasps(
  const void * untyped_member)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__candidate_grasps(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__candidate_grasps(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Request__candidate_grasps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__Grasp * item =
    ((const moveit_msgs__msg__Grasp *)
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__candidate_grasps(untyped_member, index));
  moveit_msgs__msg__Grasp * value =
    (moveit_msgs__msg__Grasp *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Request__candidate_grasps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__Grasp * item =
    ((moveit_msgs__msg__Grasp *)
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__candidate_grasps(untyped_member, index));
  const moveit_msgs__msg__Grasp * value =
    (const moveit_msgs__msg__Grasp *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Request__candidate_grasps(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  moveit_msgs__msg__Grasp__Sequence__fini(member);
  return moveit_msgs__msg__Grasp__Sequence__init(member, size);
}

size_t moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Request__movable_obstacles(
  const void * untyped_member)
{
  const moveit_msgs__msg__CollisionObject__Sequence * member =
    (const moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__movable_obstacles(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__CollisionObject__Sequence * member =
    (const moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__movable_obstacles(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__CollisionObject__Sequence * member =
    (moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Request__movable_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__CollisionObject * item =
    ((const moveit_msgs__msg__CollisionObject *)
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__movable_obstacles(untyped_member, index));
  moveit_msgs__msg__CollisionObject * value =
    (moveit_msgs__msg__CollisionObject *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Request__movable_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__CollisionObject * item =
    ((moveit_msgs__msg__CollisionObject *)
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__movable_obstacles(untyped_member, index));
  const moveit_msgs__msg__CollisionObject * value =
    (const moveit_msgs__msg__CollisionObject *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Request__movable_obstacles(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__CollisionObject__Sequence * member =
    (moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  moveit_msgs__msg__CollisionObject__Sequence__fini(member);
  return moveit_msgs__msg__CollisionObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_member_array[5] = {
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Request, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Request, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "support_surfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Request, support_surfaces),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Request__support_surfaces,  // size() function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__support_surfaces,  // get_const(index) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__support_surfaces,  // get(index) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Request__support_surfaces,  // fetch(index, &value) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Request__support_surfaces,  // assign(index, value) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Request__support_surfaces  // resize(index) function pointer
  },
  {
    "candidate_grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Request, candidate_grasps),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Request__candidate_grasps,  // size() function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__candidate_grasps,  // get_const(index) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__candidate_grasps,  // get(index) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Request__candidate_grasps,  // fetch(index, &value) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Request__candidate_grasps,  // assign(index, value) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Request__candidate_grasps  // resize(index) function pointer
  },
  {
    "movable_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Request, movable_obstacles),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Request__movable_obstacles,  // size() function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Request__movable_obstacles,  // get_const(index) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Request__movable_obstacles,  // get(index) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Request__movable_obstacles,  // fetch(index, &value) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Request__movable_obstacles,  // assign(index, value) function pointer
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Request__movable_obstacles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GraspPlanning_Request",  // message name
  5,  // number of fields
  sizeof(moveit_msgs__srv__GraspPlanning_Request),
  moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_member_array,  // message members
  moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_type_support_handle = {
  0,
  &moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__GraspPlanning_Request__get_type_hash,
  &moveit_msgs__srv__GraspPlanning_Request__get_type_description,
  &moveit_msgs__srv__GraspPlanning_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Request)() {
  moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CollisionObject)();
  moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)();
  moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CollisionObject)();
  if (!moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `grasps`
// already included above
// #include "moveit_msgs/msg/grasp.h"
// Member `grasps`
// already included above
// #include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__GraspPlanning_Response__init(message_memory);
}

void moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_fini_function(void * message_memory)
{
  moveit_msgs__srv__GraspPlanning_Response__fini(message_memory);
}

size_t moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Response__grasps(
  const void * untyped_member)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Response__grasps(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Response__grasps(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Response__grasps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__Grasp * item =
    ((const moveit_msgs__msg__Grasp *)
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Response__grasps(untyped_member, index));
  moveit_msgs__msg__Grasp * value =
    (moveit_msgs__msg__Grasp *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Response__grasps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__Grasp * item =
    ((moveit_msgs__msg__Grasp *)
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Response__grasps(untyped_member, index));
  const moveit_msgs__msg__Grasp * value =
    (const moveit_msgs__msg__Grasp *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Response__grasps(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  moveit_msgs__msg__Grasp__Sequence__fini(member);
  return moveit_msgs__msg__Grasp__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_member_array[2] = {
  {
    "grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Response, grasps),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Response__grasps,  // size() function pointer
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Response__grasps,  // get_const(index) function pointer
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Response__grasps,  // get(index) function pointer
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Response__grasps,  // fetch(index, &value) function pointer
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Response__grasps,  // assign(index, value) function pointer
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Response__grasps  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GraspPlanning_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__srv__GraspPlanning_Response),
  moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_member_array,  // message members
  moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_type_support_handle = {
  0,
  &moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__GraspPlanning_Response__get_type_hash,
  &moveit_msgs__srv__GraspPlanning_Response__get_type_description,
  &moveit_msgs__srv__GraspPlanning_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Response)() {
  moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)();
  moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MoveItErrorCodes)();
  if (!moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "moveit_msgs/srv/grasp_planning.h"
// Member `request`
// Member `response`
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__GraspPlanning_Event__init(message_memory);
}

void moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_fini_function(void * message_memory)
{
  moveit_msgs__srv__GraspPlanning_Event__fini(message_memory);
}

size_t moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Event__request(
  const void * untyped_member)
{
  const moveit_msgs__srv__GraspPlanning_Request__Sequence * member =
    (const moveit_msgs__srv__GraspPlanning_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Event__request(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__srv__GraspPlanning_Request__Sequence * member =
    (const moveit_msgs__srv__GraspPlanning_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Event__request(
  void * untyped_member, size_t index)
{
  moveit_msgs__srv__GraspPlanning_Request__Sequence * member =
    (moveit_msgs__srv__GraspPlanning_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__srv__GraspPlanning_Request * item =
    ((const moveit_msgs__srv__GraspPlanning_Request *)
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Event__request(untyped_member, index));
  moveit_msgs__srv__GraspPlanning_Request * value =
    (moveit_msgs__srv__GraspPlanning_Request *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__srv__GraspPlanning_Request * item =
    ((moveit_msgs__srv__GraspPlanning_Request *)
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Event__request(untyped_member, index));
  const moveit_msgs__srv__GraspPlanning_Request * value =
    (const moveit_msgs__srv__GraspPlanning_Request *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Event__request(
  void * untyped_member, size_t size)
{
  moveit_msgs__srv__GraspPlanning_Request__Sequence * member =
    (moveit_msgs__srv__GraspPlanning_Request__Sequence *)(untyped_member);
  moveit_msgs__srv__GraspPlanning_Request__Sequence__fini(member);
  return moveit_msgs__srv__GraspPlanning_Request__Sequence__init(member, size);
}

size_t moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Event__response(
  const void * untyped_member)
{
  const moveit_msgs__srv__GraspPlanning_Response__Sequence * member =
    (const moveit_msgs__srv__GraspPlanning_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Event__response(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__srv__GraspPlanning_Response__Sequence * member =
    (const moveit_msgs__srv__GraspPlanning_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Event__response(
  void * untyped_member, size_t index)
{
  moveit_msgs__srv__GraspPlanning_Response__Sequence * member =
    (moveit_msgs__srv__GraspPlanning_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__srv__GraspPlanning_Response * item =
    ((const moveit_msgs__srv__GraspPlanning_Response *)
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Event__response(untyped_member, index));
  moveit_msgs__srv__GraspPlanning_Response * value =
    (moveit_msgs__srv__GraspPlanning_Response *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__srv__GraspPlanning_Response * item =
    ((moveit_msgs__srv__GraspPlanning_Response *)
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Event__response(untyped_member, index));
  const moveit_msgs__srv__GraspPlanning_Response * value =
    (const moveit_msgs__srv__GraspPlanning_Response *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Event__response(
  void * untyped_member, size_t size)
{
  moveit_msgs__srv__GraspPlanning_Response__Sequence * member =
    (moveit_msgs__srv__GraspPlanning_Response__Sequence *)(untyped_member);
  moveit_msgs__srv__GraspPlanning_Response__Sequence__fini(member);
  return moveit_msgs__srv__GraspPlanning_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Event, info),  // bytes offset in struct
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
    offsetof(moveit_msgs__srv__GraspPlanning_Event, request),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Event__request,  // size() function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Event__request,  // get_const(index) function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Event__request,  // get(index) function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Event__request,  // fetch(index, &value) function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Event__request,  // assign(index, value) function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs__srv__GraspPlanning_Event, response),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__size_function__GraspPlanning_Event__response,  // size() function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_const_function__GraspPlanning_Event__response,  // get_const(index) function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__get_function__GraspPlanning_Event__response,  // get(index) function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__fetch_function__GraspPlanning_Event__response,  // fetch(index, &value) function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__assign_function__GraspPlanning_Event__response,  // assign(index, value) function pointer
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__resize_function__GraspPlanning_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GraspPlanning_Event",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__srv__GraspPlanning_Event),
  moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_member_array,  // message members
  moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_type_support_handle = {
  0,
  &moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__GraspPlanning_Event__get_type_hash,
  &moveit_msgs__srv__GraspPlanning_Event__get_type_description,
  &moveit_msgs__srv__GraspPlanning_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Event)() {
  moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Request)();
  moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Response)();
  if (!moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_service_members = {
  "moveit_msgs__srv",  // service namespace
  "GraspPlanning",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_type_support_handle,
  NULL,  // response message
  // moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_type_support_handle
  NULL  // event_message
  // moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_type_support_handle
};


static rosidl_service_type_support_t moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_service_type_support_handle = {
  0,
  &moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_service_members,
  get_service_typesupport_handle_function,
  &moveit_msgs__srv__GraspPlanning_Request__rosidl_typesupport_introspection_c__GraspPlanning_Request_message_type_support_handle,
  &moveit_msgs__srv__GraspPlanning_Response__rosidl_typesupport_introspection_c__GraspPlanning_Response_message_type_support_handle,
  &moveit_msgs__srv__GraspPlanning_Event__rosidl_typesupport_introspection_c__GraspPlanning_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    GraspPlanning
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    GraspPlanning
  ),
  &moveit_msgs__srv__GraspPlanning__get_type_hash,
  &moveit_msgs__srv__GraspPlanning__get_type_description,
  &moveit_msgs__srv__GraspPlanning__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning)() {
  if (!moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GraspPlanning_Event)()->data;
  }

  return &moveit_msgs__srv__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_service_type_support_handle;
}
