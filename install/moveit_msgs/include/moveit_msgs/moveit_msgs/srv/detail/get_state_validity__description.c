// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice

#include "moveit_msgs/srv/detail/get_state_validity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__GetStateValidity__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xfc, 0xd2, 0x4a, 0xe0, 0xfd, 0x8c, 0x2f,
      0x16, 0xd4, 0xaf, 0xe3, 0x97, 0xef, 0xaf, 0x03,
      0x42, 0x7d, 0x1f, 0x89, 0x9f, 0xe9, 0x1e, 0xcf,
      0x6c, 0xb7, 0xf7, 0xf1, 0xc6, 0xca, 0x87, 0x20,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__GetStateValidity_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x18, 0x9b, 0x31, 0x2d, 0xaa, 0x94, 0xb0, 0x63,
      0x44, 0x96, 0x9f, 0x68, 0x8a, 0xdc, 0x59, 0x35,
      0xf3, 0xab, 0x08, 0x20, 0x8e, 0x57, 0x02, 0x4e,
      0x61, 0x87, 0xd5, 0xc6, 0x20, 0xf5, 0xae, 0xae,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__GetStateValidity_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xd2, 0x2d, 0x06, 0x8a, 0x72, 0xcb, 0x1b,
      0x17, 0xd1, 0xa6, 0x05, 0x6a, 0xde, 0xd2, 0xff,
      0xca, 0xa0, 0x11, 0x36, 0xb5, 0x98, 0xcd, 0x1d,
      0xc7, 0x4f, 0xc0, 0x25, 0xfb, 0xee, 0x2e, 0xcc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__GetStateValidity_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xad, 0xf6, 0xe9, 0x9b, 0xe2, 0x6e, 0xf7,
      0xbb, 0xb4, 0x1f, 0x53, 0x95, 0x87, 0xfd, 0x01,
      0x68, 0x3c, 0xf0, 0x98, 0x74, 0x6d, 0xf1, 0xd4,
      0x24, 0x6f, 0x1d, 0x84, 0x7e, 0x82, 0x2d, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "moveit_msgs/msg/detail/position_constraint__functions.h"
#include "moveit_msgs/msg/detail/bounding_volume__functions.h"
#include "geometry_msgs/msg/detail/transform__functions.h"
#include "geometry_msgs/msg/detail/wrench__functions.h"
#include "moveit_msgs/msg/detail/collision_object__functions.h"
#include "sensor_msgs/msg/detail/joint_state__functions.h"
#include "shape_msgs/msg/detail/mesh_triangle__functions.h"
#include "shape_msgs/msg/detail/solid_primitive__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "moveit_msgs/msg/detail/attached_collision_object__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "moveit_msgs/msg/detail/contact_information__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "moveit_msgs/msg/detail/joint_constraint__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "object_recognition_msgs/msg/detail/object_type__functions.h"
#include "shape_msgs/msg/detail/plane__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
#include "moveit_msgs/msg/detail/orientation_constraint__functions.h"
#include "moveit_msgs/msg/detail/constraints__functions.h"
#include "sensor_msgs/msg/detail/multi_dof_joint_state__functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
#include "moveit_msgs/msg/detail/robot_state__functions.h"
#include "geometry_msgs/msg/detail/polygon__functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"
#include "moveit_msgs/msg/detail/visibility_constraint__functions.h"
#include "shape_msgs/msg/detail/mesh__functions.h"
#include "moveit_msgs/msg/detail/constraint_eval_result__functions.h"
#include "moveit_msgs/msg/detail/cost_source__functions.h"
#include "geometry_msgs/msg/detail/point32__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point32__EXPECTED_HASH = {1, {
    0x2f, 0xc4, 0xdb, 0x7c, 0xae, 0x16, 0xa4, 0x58,
    0x2c, 0x79, 0xa5, 0x6b, 0x66, 0x17, 0x3a, 0x8d,
    0x48, 0xd5, 0x2c, 0x7d, 0xc5, 0x20, 0xdd, 0xc5,
    0x5a, 0x0d, 0x4b, 0xcf, 0x2a, 0x4b, 0xfd, 0xbc,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Polygon__EXPECTED_HASH = {1, {
    0x37, 0x82, 0xf9, 0xf0, 0xbf, 0x04, 0x49, 0x64,
    0xd6, 0x92, 0xd6, 0xc0, 0x17, 0xd7, 0x05, 0xe3,
    0x76, 0x11, 0xaf, 0xb1, 0xf0, 0xbf, 0x6a, 0x9d,
    0xee, 0x24, 0x8a, 0x7d, 0xda, 0x0f, 0x78, 0x4a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseStamped__EXPECTED_HASH = {1, {
    0x10, 0xf3, 0x78, 0x6d, 0x7d, 0x40, 0xfd, 0x2b,
    0x54, 0x36, 0x78, 0x35, 0x61, 0x4b, 0xff, 0x85,
    0xd4, 0xad, 0x3b, 0x5d, 0xab, 0x62, 0xbf, 0x8b,
    0xca, 0x0c, 0xc2, 0x32, 0xd7, 0x3b, 0x4c, 0xd8,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Transform__EXPECTED_HASH = {1, {
    0xbe, 0xb8, 0x3f, 0xbe, 0x69, 0x86, 0x36, 0x35,
    0x14, 0x61, 0xf6, 0xf3, 0x5d, 0x1a, 0xbb, 0x20,
    0x01, 0x0c, 0x43, 0xd5, 0x53, 0x74, 0xd8, 0x1b,
    0xd0, 0x41, 0xf1, 0xba, 0x25, 0x81, 0xfd, 0xdc,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Twist__EXPECTED_HASH = {1, {
    0x9c, 0x45, 0xbf, 0x16, 0xfe, 0x09, 0x83, 0xd8,
    0x0e, 0x3c, 0xfe, 0x75, 0x0d, 0x68, 0x35, 0x84,
    0x3d, 0x26, 0x5a, 0x9a, 0x6c, 0x46, 0xbd, 0x2e,
    0x60, 0x9f, 0xcd, 0xdd, 0xe6, 0xfb, 0x8d, 0x2a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Wrench__EXPECTED_HASH = {1, {
    0x01, 0x8e, 0x85, 0x19, 0xd5, 0x7c, 0x16, 0xad,
    0xbe, 0x97, 0xc9, 0xfe, 0x14, 0x60, 0xef, 0x21,
    0xfe, 0xc7, 0xe3, 0x1b, 0xc5, 0x41, 0xde, 0x3d,
    0x65, 0x3a, 0x35, 0x89, 0x56, 0x77, 0xce, 0x52,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__AttachedCollisionObject__EXPECTED_HASH = {1, {
    0x7f, 0xdf, 0xe7, 0x95, 0x1a, 0x33, 0xa8, 0x57,
    0xf2, 0x0f, 0xc4, 0x2c, 0x9e, 0xd4, 0x10, 0xa3,
    0x8d, 0x06, 0xdd, 0x0c, 0x20, 0x9a, 0xc7, 0x74,
    0xec, 0xea, 0x74, 0x6d, 0xc4, 0x87, 0xdc, 0x41,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__BoundingVolume__EXPECTED_HASH = {1, {
    0x00, 0xbb, 0x0d, 0xf2, 0xed, 0xac, 0x63, 0x74,
    0x97, 0xde, 0xdf, 0x17, 0x78, 0xd8, 0xf2, 0x17,
    0x18, 0x7c, 0x8d, 0x9d, 0x10, 0xf4, 0x1d, 0xcf,
    0xcc, 0xc4, 0xd8, 0x57, 0x81, 0x23, 0xef, 0x13,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__CollisionObject__EXPECTED_HASH = {1, {
    0x74, 0xb0, 0xac, 0xd6, 0xd5, 0x6b, 0xe0, 0x32,
    0xbf, 0x4f, 0x76, 0x4b, 0x2c, 0x26, 0x33, 0xf5,
    0x05, 0x88, 0xb5, 0xfb, 0x2b, 0xd7, 0x1e, 0x97,
    0x20, 0x6c, 0x59, 0x05, 0x27, 0x47, 0xcf, 0x7e,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__ConstraintEvalResult__EXPECTED_HASH = {1, {
    0xb6, 0x32, 0xab, 0x96, 0xd6, 0x8f, 0xbf, 0xd5,
    0x87, 0x54, 0x6b, 0x1c, 0x58, 0x5a, 0x3b, 0x8b,
    0xe0, 0x60, 0x6b, 0x7d, 0xe7, 0x75, 0x19, 0x29,
    0x65, 0x33, 0x92, 0xb3, 0x43, 0x03, 0x99, 0x97,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__Constraints__EXPECTED_HASH = {1, {
    0x71, 0x71, 0x82, 0x00, 0x45, 0x9a, 0xe8, 0xfe,
    0xcd, 0xc4, 0xf2, 0xc9, 0x63, 0x12, 0x15, 0xf7,
    0xeb, 0xa5, 0xff, 0x68, 0x6c, 0x70, 0x1a, 0x32,
    0xe2, 0x31, 0xba, 0x8b, 0x11, 0xb3, 0x59, 0x2b,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__ContactInformation__EXPECTED_HASH = {1, {
    0x47, 0xc9, 0x26, 0xe5, 0x39, 0xa1, 0xf5, 0x47,
    0x29, 0xec, 0x4a, 0x9e, 0xdc, 0x56, 0x8a, 0x98,
    0x36, 0x78, 0xbe, 0xef, 0xb9, 0x08, 0x84, 0x1d,
    0x68, 0xfb, 0xb3, 0xcf, 0xf3, 0xfe, 0xee, 0xcb,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__CostSource__EXPECTED_HASH = {1, {
    0xdd, 0x6b, 0xd4, 0xe3, 0x83, 0xe1, 0x02, 0xb4,
    0xb7, 0xef, 0x54, 0xe4, 0x6e, 0x2f, 0x8c, 0xd4,
    0xb4, 0x32, 0x3a, 0x2c, 0x56, 0x37, 0x0c, 0x42,
    0x86, 0x2b, 0xd2, 0xd3, 0x35, 0x8a, 0x59, 0xf6,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__JointConstraint__EXPECTED_HASH = {1, {
    0x49, 0x96, 0x64, 0x1a, 0x8e, 0x12, 0xf5, 0xb7,
    0xfd, 0xe0, 0x7f, 0x1c, 0xec, 0x14, 0x90, 0x32,
    0x4e, 0x1c, 0x40, 0x35, 0xac, 0x5f, 0xc9, 0x89,
    0xce, 0x99, 0xc9, 0x60, 0x0c, 0x31, 0xe3, 0x0d,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__OrientationConstraint__EXPECTED_HASH = {1, {
    0x7a, 0x19, 0x17, 0xac, 0x47, 0x88, 0x6e, 0xb1,
    0xfc, 0x17, 0x03, 0x17, 0x95, 0x21, 0x98, 0xb2,
    0x03, 0xbb, 0x79, 0x7f, 0x07, 0x27, 0x04, 0x75,
    0xa7, 0xbb, 0xaf, 0x69, 0x2c, 0xad, 0x28, 0x71,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__PositionConstraint__EXPECTED_HASH = {1, {
    0x37, 0x58, 0x50, 0x4d, 0xab, 0xfe, 0x33, 0x7a,
    0x1a, 0x66, 0x0b, 0x29, 0x91, 0x7e, 0x34, 0x05,
    0xe5, 0xe8, 0x58, 0xfd, 0xd6, 0xe9, 0x97, 0x6e,
    0xdb, 0xa0, 0x42, 0x75, 0x39, 0x65, 0x23, 0xdf,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__RobotState__EXPECTED_HASH = {1, {
    0x7c, 0x51, 0x6d, 0xc1, 0x57, 0x13, 0xe5, 0x45,
    0xcb, 0x28, 0x36, 0xc5, 0xca, 0x74, 0x5f, 0xbd,
    0xcf, 0xcc, 0x10, 0xde, 0x48, 0x55, 0xa4, 0x1c,
    0x83, 0xe6, 0xb4, 0xbf, 0x1a, 0xfc, 0x3f, 0x83,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__VisibilityConstraint__EXPECTED_HASH = {1, {
    0x2b, 0x47, 0x99, 0x35, 0x30, 0x7d, 0xe4, 0x21,
    0x62, 0x32, 0x21, 0x52, 0x0e, 0xe5, 0xd9, 0xff,
    0xab, 0x49, 0x4a, 0xf7, 0xf4, 0xb1, 0x94, 0x51,
    0x14, 0xfc, 0x7e, 0x48, 0x31, 0x85, 0x6c, 0x75,
  }};
static const rosidl_type_hash_t object_recognition_msgs__msg__ObjectType__EXPECTED_HASH = {1, {
    0x5e, 0xb3, 0xee, 0x39, 0x76, 0x40, 0x33, 0x66,
    0xd7, 0xc5, 0x0d, 0x7d, 0xbe, 0xe8, 0xbe, 0xc9,
    0x6b, 0x3b, 0xce, 0xd1, 0xe7, 0x52, 0x67, 0x4a,
    0x71, 0x94, 0xa3, 0x58, 0x41, 0x63, 0x21, 0x34,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__JointState__EXPECTED_HASH = {1, {
    0xa1, 0x3e, 0xe3, 0xa3, 0x30, 0xe3, 0x46, 0xc9,
    0xd8, 0x7b, 0x5a, 0xa1, 0x8d, 0x24, 0xe1, 0x16,
    0x90, 0x75, 0x2b, 0xd3, 0x3a, 0x03, 0x50, 0xf1,
    0x1c, 0x58, 0x82, 0xbc, 0x91, 0x79, 0x26, 0x0e,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__MultiDOFJointState__EXPECTED_HASH = {1, {
    0x4d, 0x4d, 0xed, 0x70, 0x2c, 0xfb, 0xa7, 0xff,
    0x3e, 0xc7, 0x83, 0x83, 0x5c, 0x1a, 0x14, 0x25,
    0xf7, 0x5e, 0x53, 0x93, 0x9a, 0x43, 0x0f, 0xf3,
    0x55, 0xd1, 0xfe, 0xe4, 0xb3, 0xbb, 0xc4, 0x0b,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t shape_msgs__msg__Mesh__EXPECTED_HASH = {1, {
    0xf2, 0x15, 0x0b, 0x82, 0xd8, 0xee, 0x7e, 0x8b,
    0xc3, 0xf3, 0x96, 0xa2, 0xb1, 0x58, 0xae, 0xfb,
    0x4b, 0x9a, 0x55, 0x10, 0xa4, 0x74, 0xbe, 0x27,
    0x1b, 0xa1, 0x26, 0x8a, 0xeb, 0xb5, 0x52, 0x89,
  }};
static const rosidl_type_hash_t shape_msgs__msg__MeshTriangle__EXPECTED_HASH = {1, {
    0x61, 0x8e, 0x5c, 0x07, 0x3e, 0xeb, 0x72, 0x9e,
    0x43, 0x3e, 0xf6, 0x22, 0x6e, 0x72, 0xc0, 0x1d,
    0x99, 0x5c, 0x45, 0x9f, 0xb7, 0xd7, 0x63, 0x48,
    0xc9, 0x70, 0x04, 0x09, 0xa5, 0x02, 0x0b, 0xd0,
  }};
static const rosidl_type_hash_t shape_msgs__msg__Plane__EXPECTED_HASH = {1, {
    0xdf, 0xbf, 0xe8, 0x31, 0x46, 0x89, 0xc8, 0x50,
    0x61, 0x5d, 0x4a, 0x72, 0x7a, 0xf0, 0x17, 0xe9,
    0xaa, 0x86, 0xc1, 0x0e, 0x36, 0x9a, 0x60, 0x6c,
    0x8c, 0x85, 0x1e, 0xf8, 0xf1, 0x6c, 0x58, 0xc8,
  }};
static const rosidl_type_hash_t shape_msgs__msg__SolidPrimitive__EXPECTED_HASH = {1, {
    0x28, 0x02, 0xa1, 0x51, 0x90, 0xaa, 0xdc, 0x3f,
    0x49, 0x65, 0x84, 0xdf, 0x4b, 0x0b, 0x4c, 0x58,
    0x24, 0xd8, 0xa0, 0xb3, 0x1a, 0xae, 0xf8, 0x39,
    0xfa, 0xa7, 0x5b, 0xc3, 0x4d, 0xda, 0x38, 0xac,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH = {1, {
    0x17, 0x9b, 0x33, 0xeb, 0xa5, 0x9d, 0x67, 0x6f,
    0x6d, 0x96, 0x7a, 0xc7, 0x1f, 0xe3, 0x5e, 0x7c,
    0xa2, 0xf6, 0x4b, 0x2f, 0x39, 0x28, 0xf4, 0xa0,
    0x18, 0xce, 0xc1, 0x15, 0xe2, 0x13, 0x79, 0x6e,
  }};
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH = {1, {
    0xde, 0x89, 0x07, 0x03, 0x6d, 0x8b, 0xd4, 0x5a,
    0xac, 0x6f, 0x30, 0xcc, 0x90, 0x44, 0xa3, 0xd4,
    0xa3, 0x29, 0xc4, 0x2c, 0xbf, 0x71, 0x9a, 0xff,
    0x7d, 0x95, 0xa5, 0x84, 0xcf, 0xa5, 0x32, 0xd7,
  }};
#endif

static char moveit_msgs__srv__GetStateValidity__TYPE_NAME[] = "moveit_msgs/srv/GetStateValidity";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Point32__TYPE_NAME[] = "geometry_msgs/msg/Point32";
static char geometry_msgs__msg__Polygon__TYPE_NAME[] = "geometry_msgs/msg/Polygon";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseStamped__TYPE_NAME[] = "geometry_msgs/msg/PoseStamped";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Transform__TYPE_NAME[] = "geometry_msgs/msg/Transform";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char geometry_msgs__msg__Wrench__TYPE_NAME[] = "geometry_msgs/msg/Wrench";
static char moveit_msgs__msg__AttachedCollisionObject__TYPE_NAME[] = "moveit_msgs/msg/AttachedCollisionObject";
static char moveit_msgs__msg__BoundingVolume__TYPE_NAME[] = "moveit_msgs/msg/BoundingVolume";
static char moveit_msgs__msg__CollisionObject__TYPE_NAME[] = "moveit_msgs/msg/CollisionObject";
static char moveit_msgs__msg__ConstraintEvalResult__TYPE_NAME[] = "moveit_msgs/msg/ConstraintEvalResult";
static char moveit_msgs__msg__Constraints__TYPE_NAME[] = "moveit_msgs/msg/Constraints";
static char moveit_msgs__msg__ContactInformation__TYPE_NAME[] = "moveit_msgs/msg/ContactInformation";
static char moveit_msgs__msg__CostSource__TYPE_NAME[] = "moveit_msgs/msg/CostSource";
static char moveit_msgs__msg__JointConstraint__TYPE_NAME[] = "moveit_msgs/msg/JointConstraint";
static char moveit_msgs__msg__OrientationConstraint__TYPE_NAME[] = "moveit_msgs/msg/OrientationConstraint";
static char moveit_msgs__msg__PositionConstraint__TYPE_NAME[] = "moveit_msgs/msg/PositionConstraint";
static char moveit_msgs__msg__RobotState__TYPE_NAME[] = "moveit_msgs/msg/RobotState";
static char moveit_msgs__msg__VisibilityConstraint__TYPE_NAME[] = "moveit_msgs/msg/VisibilityConstraint";
static char moveit_msgs__srv__GetStateValidity_Event__TYPE_NAME[] = "moveit_msgs/srv/GetStateValidity_Event";
static char moveit_msgs__srv__GetStateValidity_Request__TYPE_NAME[] = "moveit_msgs/srv/GetStateValidity_Request";
static char moveit_msgs__srv__GetStateValidity_Response__TYPE_NAME[] = "moveit_msgs/srv/GetStateValidity_Response";
static char object_recognition_msgs__msg__ObjectType__TYPE_NAME[] = "object_recognition_msgs/msg/ObjectType";
static char sensor_msgs__msg__JointState__TYPE_NAME[] = "sensor_msgs/msg/JointState";
static char sensor_msgs__msg__MultiDOFJointState__TYPE_NAME[] = "sensor_msgs/msg/MultiDOFJointState";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char shape_msgs__msg__Mesh__TYPE_NAME[] = "shape_msgs/msg/Mesh";
static char shape_msgs__msg__MeshTriangle__TYPE_NAME[] = "shape_msgs/msg/MeshTriangle";
static char shape_msgs__msg__Plane__TYPE_NAME[] = "shape_msgs/msg/Plane";
static char shape_msgs__msg__SolidPrimitive__TYPE_NAME[] = "shape_msgs/msg/SolidPrimitive";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char trajectory_msgs__msg__JointTrajectory__TYPE_NAME[] = "trajectory_msgs/msg/JointTrajectory";
static char trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME[] = "trajectory_msgs/msg/JointTrajectoryPoint";

// Define type names, field names, and default values
static char moveit_msgs__srv__GetStateValidity__FIELD_NAME__request_message[] = "request_message";
static char moveit_msgs__srv__GetStateValidity__FIELD_NAME__response_message[] = "response_message";
static char moveit_msgs__srv__GetStateValidity__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__GetStateValidity__FIELDS[] = {
  {
    {moveit_msgs__srv__GetStateValidity__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__GetStateValidity_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__GetStateValidity_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__GetStateValidity_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__GetStateValidity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Polygon__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__AttachedCollisionObject__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__BoundingVolume__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__CollisionObject__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__ConstraintEvalResult__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__Constraints__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__ContactInformation__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__CostSource__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__JointConstraint__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__OrientationConstraint__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__PositionConstraint__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__RobotState__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__VisibilityConstraint__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {object_recognition_msgs__msg__ObjectType__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__JointState__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__MultiDOFJointState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Mesh__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__MeshTriangle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Plane__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__SolidPrimitive__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__GetStateValidity__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__GetStateValidity__TYPE_NAME, 32, 32},
      {moveit_msgs__srv__GetStateValidity__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__GetStateValidity__REFERENCED_TYPE_DESCRIPTIONS, 38, 38},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point32__EXPECTED_HASH, geometry_msgs__msg__Point32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Polygon__EXPECTED_HASH, geometry_msgs__msg__Polygon__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Polygon__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Wrench__EXPECTED_HASH, geometry_msgs__msg__Wrench__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = geometry_msgs__msg__Wrench__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__AttachedCollisionObject__EXPECTED_HASH, moveit_msgs__msg__AttachedCollisionObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = moveit_msgs__msg__AttachedCollisionObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__BoundingVolume__EXPECTED_HASH, moveit_msgs__msg__BoundingVolume__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = moveit_msgs__msg__BoundingVolume__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__CollisionObject__EXPECTED_HASH, moveit_msgs__msg__CollisionObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = moveit_msgs__msg__CollisionObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__ConstraintEvalResult__EXPECTED_HASH, moveit_msgs__msg__ConstraintEvalResult__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = moveit_msgs__msg__ConstraintEvalResult__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__Constraints__EXPECTED_HASH, moveit_msgs__msg__Constraints__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = moveit_msgs__msg__Constraints__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__ContactInformation__EXPECTED_HASH, moveit_msgs__msg__ContactInformation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = moveit_msgs__msg__ContactInformation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__CostSource__EXPECTED_HASH, moveit_msgs__msg__CostSource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = moveit_msgs__msg__CostSource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__JointConstraint__EXPECTED_HASH, moveit_msgs__msg__JointConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = moveit_msgs__msg__JointConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__OrientationConstraint__EXPECTED_HASH, moveit_msgs__msg__OrientationConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = moveit_msgs__msg__OrientationConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__PositionConstraint__EXPECTED_HASH, moveit_msgs__msg__PositionConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = moveit_msgs__msg__PositionConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__RobotState__EXPECTED_HASH, moveit_msgs__msg__RobotState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = moveit_msgs__msg__RobotState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__VisibilityConstraint__EXPECTED_HASH, moveit_msgs__msg__VisibilityConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = moveit_msgs__msg__VisibilityConstraint__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[24].fields = moveit_msgs__srv__GetStateValidity_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[25].fields = moveit_msgs__srv__GetStateValidity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[26].fields = moveit_msgs__srv__GetStateValidity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&object_recognition_msgs__msg__ObjectType__EXPECTED_HASH, object_recognition_msgs__msg__ObjectType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[27].fields = object_recognition_msgs__msg__ObjectType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__JointState__EXPECTED_HASH, sensor_msgs__msg__JointState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[28].fields = sensor_msgs__msg__JointState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__MultiDOFJointState__EXPECTED_HASH, sensor_msgs__msg__MultiDOFJointState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[29].fields = sensor_msgs__msg__MultiDOFJointState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[30].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Mesh__EXPECTED_HASH, shape_msgs__msg__Mesh__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[31].fields = shape_msgs__msg__Mesh__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__MeshTriangle__EXPECTED_HASH, shape_msgs__msg__MeshTriangle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[32].fields = shape_msgs__msg__MeshTriangle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Plane__EXPECTED_HASH, shape_msgs__msg__Plane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[33].fields = shape_msgs__msg__Plane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__SolidPrimitive__EXPECTED_HASH, shape_msgs__msg__SolidPrimitive__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[34].fields = shape_msgs__msg__SolidPrimitive__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[35].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[36].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[37].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__GetStateValidity_Request__FIELD_NAME__robot_state[] = "robot_state";
static char moveit_msgs__srv__GetStateValidity_Request__FIELD_NAME__group_name[] = "group_name";
static char moveit_msgs__srv__GetStateValidity_Request__FIELD_NAME__constraints[] = "constraints";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__GetStateValidity_Request__FIELDS[] = {
  {
    {moveit_msgs__srv__GetStateValidity_Request__FIELD_NAME__robot_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__msg__RobotState__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Request__FIELD_NAME__group_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Request__FIELD_NAME__constraints, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__msg__Constraints__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__GetStateValidity_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Polygon__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__AttachedCollisionObject__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__BoundingVolume__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__CollisionObject__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__Constraints__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__JointConstraint__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__OrientationConstraint__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__PositionConstraint__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__RobotState__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__VisibilityConstraint__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {object_recognition_msgs__msg__ObjectType__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__JointState__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__MultiDOFJointState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Mesh__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__MeshTriangle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Plane__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__SolidPrimitive__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__GetStateValidity_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__GetStateValidity_Request__TYPE_NAME, 40, 40},
      {moveit_msgs__srv__GetStateValidity_Request__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__GetStateValidity_Request__REFERENCED_TYPE_DESCRIPTIONS, 31, 31},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point32__EXPECTED_HASH, geometry_msgs__msg__Point32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Polygon__EXPECTED_HASH, geometry_msgs__msg__Polygon__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Polygon__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Wrench__EXPECTED_HASH, geometry_msgs__msg__Wrench__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = geometry_msgs__msg__Wrench__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__AttachedCollisionObject__EXPECTED_HASH, moveit_msgs__msg__AttachedCollisionObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = moveit_msgs__msg__AttachedCollisionObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__BoundingVolume__EXPECTED_HASH, moveit_msgs__msg__BoundingVolume__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = moveit_msgs__msg__BoundingVolume__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__CollisionObject__EXPECTED_HASH, moveit_msgs__msg__CollisionObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = moveit_msgs__msg__CollisionObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__Constraints__EXPECTED_HASH, moveit_msgs__msg__Constraints__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = moveit_msgs__msg__Constraints__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__JointConstraint__EXPECTED_HASH, moveit_msgs__msg__JointConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = moveit_msgs__msg__JointConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__OrientationConstraint__EXPECTED_HASH, moveit_msgs__msg__OrientationConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = moveit_msgs__msg__OrientationConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__PositionConstraint__EXPECTED_HASH, moveit_msgs__msg__PositionConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = moveit_msgs__msg__PositionConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__RobotState__EXPECTED_HASH, moveit_msgs__msg__RobotState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = moveit_msgs__msg__RobotState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__VisibilityConstraint__EXPECTED_HASH, moveit_msgs__msg__VisibilityConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = moveit_msgs__msg__VisibilityConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&object_recognition_msgs__msg__ObjectType__EXPECTED_HASH, object_recognition_msgs__msg__ObjectType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = object_recognition_msgs__msg__ObjectType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__JointState__EXPECTED_HASH, sensor_msgs__msg__JointState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = sensor_msgs__msg__JointState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__MultiDOFJointState__EXPECTED_HASH, sensor_msgs__msg__MultiDOFJointState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = sensor_msgs__msg__MultiDOFJointState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Mesh__EXPECTED_HASH, shape_msgs__msg__Mesh__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[24].fields = shape_msgs__msg__Mesh__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__MeshTriangle__EXPECTED_HASH, shape_msgs__msg__MeshTriangle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[25].fields = shape_msgs__msg__MeshTriangle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Plane__EXPECTED_HASH, shape_msgs__msg__Plane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[26].fields = shape_msgs__msg__Plane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__SolidPrimitive__EXPECTED_HASH, shape_msgs__msg__SolidPrimitive__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[27].fields = shape_msgs__msg__SolidPrimitive__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[28].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[29].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[30].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__GetStateValidity_Response__FIELD_NAME__valid[] = "valid";
static char moveit_msgs__srv__GetStateValidity_Response__FIELD_NAME__contacts[] = "contacts";
static char moveit_msgs__srv__GetStateValidity_Response__FIELD_NAME__cost_sources[] = "cost_sources";
static char moveit_msgs__srv__GetStateValidity_Response__FIELD_NAME__constraint_result[] = "constraint_result";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__GetStateValidity_Response__FIELDS[] = {
  {
    {moveit_msgs__srv__GetStateValidity_Response__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Response__FIELD_NAME__contacts, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {moveit_msgs__msg__ContactInformation__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Response__FIELD_NAME__cost_sources, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {moveit_msgs__msg__CostSource__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Response__FIELD_NAME__constraint_result, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {moveit_msgs__msg__ConstraintEvalResult__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__GetStateValidity_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__ConstraintEvalResult__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__ContactInformation__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__CostSource__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__GetStateValidity_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__GetStateValidity_Response__TYPE_NAME, 41, 41},
      {moveit_msgs__srv__GetStateValidity_Response__FIELDS, 4, 4},
    },
    {moveit_msgs__srv__GetStateValidity_Response__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__ConstraintEvalResult__EXPECTED_HASH, moveit_msgs__msg__ConstraintEvalResult__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = moveit_msgs__msg__ConstraintEvalResult__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__ContactInformation__EXPECTED_HASH, moveit_msgs__msg__ContactInformation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = moveit_msgs__msg__ContactInformation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__CostSource__EXPECTED_HASH, moveit_msgs__msg__CostSource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = moveit_msgs__msg__CostSource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__GetStateValidity_Event__FIELD_NAME__info[] = "info";
static char moveit_msgs__srv__GetStateValidity_Event__FIELD_NAME__request[] = "request";
static char moveit_msgs__srv__GetStateValidity_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__GetStateValidity_Event__FIELDS[] = {
  {
    {moveit_msgs__srv__GetStateValidity_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__GetStateValidity_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__GetStateValidity_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__GetStateValidity_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Polygon__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__AttachedCollisionObject__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__BoundingVolume__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__CollisionObject__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__ConstraintEvalResult__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__Constraints__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__ContactInformation__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__CostSource__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__JointConstraint__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__OrientationConstraint__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__PositionConstraint__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__RobotState__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__VisibilityConstraint__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetStateValidity_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {object_recognition_msgs__msg__ObjectType__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__JointState__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__MultiDOFJointState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Mesh__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__MeshTriangle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Plane__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__SolidPrimitive__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__GetStateValidity_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__GetStateValidity_Event__TYPE_NAME, 38, 38},
      {moveit_msgs__srv__GetStateValidity_Event__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__GetStateValidity_Event__REFERENCED_TYPE_DESCRIPTIONS, 37, 37},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point32__EXPECTED_HASH, geometry_msgs__msg__Point32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Polygon__EXPECTED_HASH, geometry_msgs__msg__Polygon__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Polygon__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Wrench__EXPECTED_HASH, geometry_msgs__msg__Wrench__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = geometry_msgs__msg__Wrench__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__AttachedCollisionObject__EXPECTED_HASH, moveit_msgs__msg__AttachedCollisionObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = moveit_msgs__msg__AttachedCollisionObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__BoundingVolume__EXPECTED_HASH, moveit_msgs__msg__BoundingVolume__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = moveit_msgs__msg__BoundingVolume__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__CollisionObject__EXPECTED_HASH, moveit_msgs__msg__CollisionObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = moveit_msgs__msg__CollisionObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__ConstraintEvalResult__EXPECTED_HASH, moveit_msgs__msg__ConstraintEvalResult__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = moveit_msgs__msg__ConstraintEvalResult__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__Constraints__EXPECTED_HASH, moveit_msgs__msg__Constraints__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = moveit_msgs__msg__Constraints__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__ContactInformation__EXPECTED_HASH, moveit_msgs__msg__ContactInformation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = moveit_msgs__msg__ContactInformation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__CostSource__EXPECTED_HASH, moveit_msgs__msg__CostSource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = moveit_msgs__msg__CostSource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__JointConstraint__EXPECTED_HASH, moveit_msgs__msg__JointConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = moveit_msgs__msg__JointConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__OrientationConstraint__EXPECTED_HASH, moveit_msgs__msg__OrientationConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = moveit_msgs__msg__OrientationConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__PositionConstraint__EXPECTED_HASH, moveit_msgs__msg__PositionConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = moveit_msgs__msg__PositionConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__RobotState__EXPECTED_HASH, moveit_msgs__msg__RobotState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = moveit_msgs__msg__RobotState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__VisibilityConstraint__EXPECTED_HASH, moveit_msgs__msg__VisibilityConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = moveit_msgs__msg__VisibilityConstraint__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[24].fields = moveit_msgs__srv__GetStateValidity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[25].fields = moveit_msgs__srv__GetStateValidity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&object_recognition_msgs__msg__ObjectType__EXPECTED_HASH, object_recognition_msgs__msg__ObjectType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[26].fields = object_recognition_msgs__msg__ObjectType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__JointState__EXPECTED_HASH, sensor_msgs__msg__JointState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[27].fields = sensor_msgs__msg__JointState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__MultiDOFJointState__EXPECTED_HASH, sensor_msgs__msg__MultiDOFJointState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[28].fields = sensor_msgs__msg__MultiDOFJointState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[29].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Mesh__EXPECTED_HASH, shape_msgs__msg__Mesh__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[30].fields = shape_msgs__msg__Mesh__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__MeshTriangle__EXPECTED_HASH, shape_msgs__msg__MeshTriangle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[31].fields = shape_msgs__msg__MeshTriangle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Plane__EXPECTED_HASH, shape_msgs__msg__Plane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[32].fields = shape_msgs__msg__Plane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__SolidPrimitive__EXPECTED_HASH, shape_msgs__msg__SolidPrimitive__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[33].fields = shape_msgs__msg__SolidPrimitive__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[34].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[35].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[36].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "RobotState robot_state\n"
  "string group_name\n"
  "Constraints constraints\n"
  "\n"
  "---\n"
  "\n"
  "bool valid\n"
  "ContactInformation[] contacts\n"
  "CostSource[] cost_sources\n"
  "ConstraintEvalResult[] constraint_result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__GetStateValidity__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__GetStateValidity__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 179, 179},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__GetStateValidity_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__GetStateValidity_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__GetStateValidity_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__GetStateValidity_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__GetStateValidity_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__GetStateValidity_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__GetStateValidity__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[39];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 39, 39};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__GetStateValidity__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point32__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Polygon__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[10] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[11] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[12] = *geometry_msgs__msg__Wrench__get_individual_type_description_source(NULL);
    sources[13] = *moveit_msgs__msg__AttachedCollisionObject__get_individual_type_description_source(NULL);
    sources[14] = *moveit_msgs__msg__BoundingVolume__get_individual_type_description_source(NULL);
    sources[15] = *moveit_msgs__msg__CollisionObject__get_individual_type_description_source(NULL);
    sources[16] = *moveit_msgs__msg__ConstraintEvalResult__get_individual_type_description_source(NULL);
    sources[17] = *moveit_msgs__msg__Constraints__get_individual_type_description_source(NULL);
    sources[18] = *moveit_msgs__msg__ContactInformation__get_individual_type_description_source(NULL);
    sources[19] = *moveit_msgs__msg__CostSource__get_individual_type_description_source(NULL);
    sources[20] = *moveit_msgs__msg__JointConstraint__get_individual_type_description_source(NULL);
    sources[21] = *moveit_msgs__msg__OrientationConstraint__get_individual_type_description_source(NULL);
    sources[22] = *moveit_msgs__msg__PositionConstraint__get_individual_type_description_source(NULL);
    sources[23] = *moveit_msgs__msg__RobotState__get_individual_type_description_source(NULL);
    sources[24] = *moveit_msgs__msg__VisibilityConstraint__get_individual_type_description_source(NULL);
    sources[25] = *moveit_msgs__srv__GetStateValidity_Event__get_individual_type_description_source(NULL);
    sources[26] = *moveit_msgs__srv__GetStateValidity_Request__get_individual_type_description_source(NULL);
    sources[27] = *moveit_msgs__srv__GetStateValidity_Response__get_individual_type_description_source(NULL);
    sources[28] = *object_recognition_msgs__msg__ObjectType__get_individual_type_description_source(NULL);
    sources[29] = *sensor_msgs__msg__JointState__get_individual_type_description_source(NULL);
    sources[30] = *sensor_msgs__msg__MultiDOFJointState__get_individual_type_description_source(NULL);
    sources[31] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[32] = *shape_msgs__msg__Mesh__get_individual_type_description_source(NULL);
    sources[33] = *shape_msgs__msg__MeshTriangle__get_individual_type_description_source(NULL);
    sources[34] = *shape_msgs__msg__Plane__get_individual_type_description_source(NULL);
    sources[35] = *shape_msgs__msg__SolidPrimitive__get_individual_type_description_source(NULL);
    sources[36] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[37] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[38] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__GetStateValidity_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[32];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 32, 32};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__GetStateValidity_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point32__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Polygon__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[10] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[11] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[12] = *geometry_msgs__msg__Wrench__get_individual_type_description_source(NULL);
    sources[13] = *moveit_msgs__msg__AttachedCollisionObject__get_individual_type_description_source(NULL);
    sources[14] = *moveit_msgs__msg__BoundingVolume__get_individual_type_description_source(NULL);
    sources[15] = *moveit_msgs__msg__CollisionObject__get_individual_type_description_source(NULL);
    sources[16] = *moveit_msgs__msg__Constraints__get_individual_type_description_source(NULL);
    sources[17] = *moveit_msgs__msg__JointConstraint__get_individual_type_description_source(NULL);
    sources[18] = *moveit_msgs__msg__OrientationConstraint__get_individual_type_description_source(NULL);
    sources[19] = *moveit_msgs__msg__PositionConstraint__get_individual_type_description_source(NULL);
    sources[20] = *moveit_msgs__msg__RobotState__get_individual_type_description_source(NULL);
    sources[21] = *moveit_msgs__msg__VisibilityConstraint__get_individual_type_description_source(NULL);
    sources[22] = *object_recognition_msgs__msg__ObjectType__get_individual_type_description_source(NULL);
    sources[23] = *sensor_msgs__msg__JointState__get_individual_type_description_source(NULL);
    sources[24] = *sensor_msgs__msg__MultiDOFJointState__get_individual_type_description_source(NULL);
    sources[25] = *shape_msgs__msg__Mesh__get_individual_type_description_source(NULL);
    sources[26] = *shape_msgs__msg__MeshTriangle__get_individual_type_description_source(NULL);
    sources[27] = *shape_msgs__msg__Plane__get_individual_type_description_source(NULL);
    sources[28] = *shape_msgs__msg__SolidPrimitive__get_individual_type_description_source(NULL);
    sources[29] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[30] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[31] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__GetStateValidity_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__GetStateValidity_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[4] = *moveit_msgs__msg__ConstraintEvalResult__get_individual_type_description_source(NULL);
    sources[5] = *moveit_msgs__msg__ContactInformation__get_individual_type_description_source(NULL);
    sources[6] = *moveit_msgs__msg__CostSource__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__GetStateValidity_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[38];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 38, 38};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__GetStateValidity_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point32__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Polygon__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[10] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[11] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[12] = *geometry_msgs__msg__Wrench__get_individual_type_description_source(NULL);
    sources[13] = *moveit_msgs__msg__AttachedCollisionObject__get_individual_type_description_source(NULL);
    sources[14] = *moveit_msgs__msg__BoundingVolume__get_individual_type_description_source(NULL);
    sources[15] = *moveit_msgs__msg__CollisionObject__get_individual_type_description_source(NULL);
    sources[16] = *moveit_msgs__msg__ConstraintEvalResult__get_individual_type_description_source(NULL);
    sources[17] = *moveit_msgs__msg__Constraints__get_individual_type_description_source(NULL);
    sources[18] = *moveit_msgs__msg__ContactInformation__get_individual_type_description_source(NULL);
    sources[19] = *moveit_msgs__msg__CostSource__get_individual_type_description_source(NULL);
    sources[20] = *moveit_msgs__msg__JointConstraint__get_individual_type_description_source(NULL);
    sources[21] = *moveit_msgs__msg__OrientationConstraint__get_individual_type_description_source(NULL);
    sources[22] = *moveit_msgs__msg__PositionConstraint__get_individual_type_description_source(NULL);
    sources[23] = *moveit_msgs__msg__RobotState__get_individual_type_description_source(NULL);
    sources[24] = *moveit_msgs__msg__VisibilityConstraint__get_individual_type_description_source(NULL);
    sources[25] = *moveit_msgs__srv__GetStateValidity_Request__get_individual_type_description_source(NULL);
    sources[26] = *moveit_msgs__srv__GetStateValidity_Response__get_individual_type_description_source(NULL);
    sources[27] = *object_recognition_msgs__msg__ObjectType__get_individual_type_description_source(NULL);
    sources[28] = *sensor_msgs__msg__JointState__get_individual_type_description_source(NULL);
    sources[29] = *sensor_msgs__msg__MultiDOFJointState__get_individual_type_description_source(NULL);
    sources[30] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[31] = *shape_msgs__msg__Mesh__get_individual_type_description_source(NULL);
    sources[32] = *shape_msgs__msg__MeshTriangle__get_individual_type_description_source(NULL);
    sources[33] = *shape_msgs__msg__Plane__get_individual_type_description_source(NULL);
    sources[34] = *shape_msgs__msg__SolidPrimitive__get_individual_type_description_source(NULL);
    sources[35] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[36] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[37] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
