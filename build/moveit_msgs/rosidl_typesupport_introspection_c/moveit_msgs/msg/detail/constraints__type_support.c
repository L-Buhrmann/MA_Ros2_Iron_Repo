// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/constraints__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/constraints__functions.h"
#include "moveit_msgs/msg/detail/constraints__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_constraints`
#include "moveit_msgs/msg/joint_constraint.h"
// Member `joint_constraints`
#include "moveit_msgs/msg/detail/joint_constraint__rosidl_typesupport_introspection_c.h"
// Member `position_constraints`
#include "moveit_msgs/msg/position_constraint.h"
// Member `position_constraints`
#include "moveit_msgs/msg/detail/position_constraint__rosidl_typesupport_introspection_c.h"
// Member `orientation_constraints`
#include "moveit_msgs/msg/orientation_constraint.h"
// Member `orientation_constraints`
#include "moveit_msgs/msg/detail/orientation_constraint__rosidl_typesupport_introspection_c.h"
// Member `visibility_constraints`
#include "moveit_msgs/msg/visibility_constraint.h"
// Member `visibility_constraints`
#include "moveit_msgs/msg/detail/visibility_constraint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__Constraints__init(message_memory);
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_fini_function(void * message_memory)
{
  moveit_msgs__msg__Constraints__fini(message_memory);
}

size_t moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__size_function__Constraints__joint_constraints(
  const void * untyped_member)
{
  const moveit_msgs__msg__JointConstraint__Sequence * member =
    (const moveit_msgs__msg__JointConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__joint_constraints(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__JointConstraint__Sequence * member =
    (const moveit_msgs__msg__JointConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__joint_constraints(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__JointConstraint__Sequence * member =
    (moveit_msgs__msg__JointConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__fetch_function__Constraints__joint_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__JointConstraint * item =
    ((const moveit_msgs__msg__JointConstraint *)
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__joint_constraints(untyped_member, index));
  moveit_msgs__msg__JointConstraint * value =
    (moveit_msgs__msg__JointConstraint *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__assign_function__Constraints__joint_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__JointConstraint * item =
    ((moveit_msgs__msg__JointConstraint *)
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__joint_constraints(untyped_member, index));
  const moveit_msgs__msg__JointConstraint * value =
    (const moveit_msgs__msg__JointConstraint *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__resize_function__Constraints__joint_constraints(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__JointConstraint__Sequence * member =
    (moveit_msgs__msg__JointConstraint__Sequence *)(untyped_member);
  moveit_msgs__msg__JointConstraint__Sequence__fini(member);
  return moveit_msgs__msg__JointConstraint__Sequence__init(member, size);
}

size_t moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__size_function__Constraints__position_constraints(
  const void * untyped_member)
{
  const moveit_msgs__msg__PositionConstraint__Sequence * member =
    (const moveit_msgs__msg__PositionConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__position_constraints(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__PositionConstraint__Sequence * member =
    (const moveit_msgs__msg__PositionConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__position_constraints(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__PositionConstraint__Sequence * member =
    (moveit_msgs__msg__PositionConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__fetch_function__Constraints__position_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__PositionConstraint * item =
    ((const moveit_msgs__msg__PositionConstraint *)
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__position_constraints(untyped_member, index));
  moveit_msgs__msg__PositionConstraint * value =
    (moveit_msgs__msg__PositionConstraint *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__assign_function__Constraints__position_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__PositionConstraint * item =
    ((moveit_msgs__msg__PositionConstraint *)
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__position_constraints(untyped_member, index));
  const moveit_msgs__msg__PositionConstraint * value =
    (const moveit_msgs__msg__PositionConstraint *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__resize_function__Constraints__position_constraints(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__PositionConstraint__Sequence * member =
    (moveit_msgs__msg__PositionConstraint__Sequence *)(untyped_member);
  moveit_msgs__msg__PositionConstraint__Sequence__fini(member);
  return moveit_msgs__msg__PositionConstraint__Sequence__init(member, size);
}

size_t moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__size_function__Constraints__orientation_constraints(
  const void * untyped_member)
{
  const moveit_msgs__msg__OrientationConstraint__Sequence * member =
    (const moveit_msgs__msg__OrientationConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__orientation_constraints(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__OrientationConstraint__Sequence * member =
    (const moveit_msgs__msg__OrientationConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__orientation_constraints(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__OrientationConstraint__Sequence * member =
    (moveit_msgs__msg__OrientationConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__fetch_function__Constraints__orientation_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__OrientationConstraint * item =
    ((const moveit_msgs__msg__OrientationConstraint *)
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__orientation_constraints(untyped_member, index));
  moveit_msgs__msg__OrientationConstraint * value =
    (moveit_msgs__msg__OrientationConstraint *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__assign_function__Constraints__orientation_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__OrientationConstraint * item =
    ((moveit_msgs__msg__OrientationConstraint *)
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__orientation_constraints(untyped_member, index));
  const moveit_msgs__msg__OrientationConstraint * value =
    (const moveit_msgs__msg__OrientationConstraint *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__resize_function__Constraints__orientation_constraints(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__OrientationConstraint__Sequence * member =
    (moveit_msgs__msg__OrientationConstraint__Sequence *)(untyped_member);
  moveit_msgs__msg__OrientationConstraint__Sequence__fini(member);
  return moveit_msgs__msg__OrientationConstraint__Sequence__init(member, size);
}

size_t moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__size_function__Constraints__visibility_constraints(
  const void * untyped_member)
{
  const moveit_msgs__msg__VisibilityConstraint__Sequence * member =
    (const moveit_msgs__msg__VisibilityConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__visibility_constraints(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__VisibilityConstraint__Sequence * member =
    (const moveit_msgs__msg__VisibilityConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__visibility_constraints(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__VisibilityConstraint__Sequence * member =
    (moveit_msgs__msg__VisibilityConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__fetch_function__Constraints__visibility_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__VisibilityConstraint * item =
    ((const moveit_msgs__msg__VisibilityConstraint *)
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__visibility_constraints(untyped_member, index));
  moveit_msgs__msg__VisibilityConstraint * value =
    (moveit_msgs__msg__VisibilityConstraint *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__assign_function__Constraints__visibility_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__VisibilityConstraint * item =
    ((moveit_msgs__msg__VisibilityConstraint *)
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__visibility_constraints(untyped_member, index));
  const moveit_msgs__msg__VisibilityConstraint * value =
    (const moveit_msgs__msg__VisibilityConstraint *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__resize_function__Constraints__visibility_constraints(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__VisibilityConstraint__Sequence * member =
    (moveit_msgs__msg__VisibilityConstraint__Sequence *)(untyped_member);
  moveit_msgs__msg__VisibilityConstraint__Sequence__fini(member);
  return moveit_msgs__msg__VisibilityConstraint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Constraints, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Constraints, joint_constraints),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__size_function__Constraints__joint_constraints,  // size() function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__joint_constraints,  // get_const(index) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__joint_constraints,  // get(index) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__fetch_function__Constraints__joint_constraints,  // fetch(index, &value) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__assign_function__Constraints__joint_constraints,  // assign(index, value) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__resize_function__Constraints__joint_constraints  // resize(index) function pointer
  },
  {
    "position_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Constraints, position_constraints),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__size_function__Constraints__position_constraints,  // size() function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__position_constraints,  // get_const(index) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__position_constraints,  // get(index) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__fetch_function__Constraints__position_constraints,  // fetch(index, &value) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__assign_function__Constraints__position_constraints,  // assign(index, value) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__resize_function__Constraints__position_constraints  // resize(index) function pointer
  },
  {
    "orientation_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Constraints, orientation_constraints),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__size_function__Constraints__orientation_constraints,  // size() function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__orientation_constraints,  // get_const(index) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__orientation_constraints,  // get(index) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__fetch_function__Constraints__orientation_constraints,  // fetch(index, &value) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__assign_function__Constraints__orientation_constraints,  // assign(index, value) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__resize_function__Constraints__orientation_constraints  // resize(index) function pointer
  },
  {
    "visibility_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Constraints, visibility_constraints),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__size_function__Constraints__visibility_constraints,  // size() function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__visibility_constraints,  // get_const(index) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__get_function__Constraints__visibility_constraints,  // get(index) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__fetch_function__Constraints__visibility_constraints,  // fetch(index, &value) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__assign_function__Constraints__visibility_constraints,  // assign(index, value) function pointer
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__resize_function__Constraints__visibility_constraints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_members = {
  "moveit_msgs__msg",  // message namespace
  "Constraints",  // message name
  5,  // number of fields
  sizeof(moveit_msgs__msg__Constraints),
  moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_member_array,  // message members
  moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_type_support_handle = {
  0,
  &moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__msg__Constraints__get_type_hash,
  &moveit_msgs__msg__Constraints__get_type_description,
  &moveit_msgs__msg__Constraints__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Constraints)() {
  moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, JointConstraint)();
  moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PositionConstraint)();
  moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, OrientationConstraint)();
  moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, VisibilityConstraint)();
  if (!moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__Constraints__rosidl_typesupport_introspection_c__Constraints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
