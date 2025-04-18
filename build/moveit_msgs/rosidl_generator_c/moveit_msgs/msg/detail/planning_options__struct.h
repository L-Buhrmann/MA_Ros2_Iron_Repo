// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'planning_scene_diff'
#include "moveit_msgs/msg/detail/planning_scene__struct.h"

/// Struct defined in msg/PlanningOptions in the package moveit_msgs.
typedef struct moveit_msgs__msg__PlanningOptions
{
  /// The diff to consider for the planning scene (optional)
  moveit_msgs__msg__PlanningScene planning_scene_diff;
  /// If this flag is set to true, the action
  /// returns an executable plan in the response but does not attempt execution
  bool plan_only;
  /// If this flag is set to true, the action of planning &
  /// executing is allowed to look around  (move sensors) if
  /// it seems that not enough information is available about
  /// the environment
  bool look_around;
  /// If this value is positive, the action of planning & executing
  /// is allowed to look around for a maximum number of attempts;
  /// If the value is left as 0, the default value is used, as set
  /// with dynamic_reconfigure
  int32_t look_around_attempts;
  /// If set and if look_around is true, this value is used as
  /// the maximum cost allowed for a path to be considered executable.
  /// If the cost of a path is higher than this value, more sensing or
  /// a new plan needed. If left as 0.0 but look_around is true, then
  /// the default value set via dynamic_reconfigure is used
  double max_safe_execution_cost;
  /// If the plan becomes invalidated during execution, it is possible to have
  /// that plan recomputed and execution restarted. This flag enables this
  /// functionality
  bool replan;
  /// The maximum number of replanning attempts
  int32_t replan_attempts;
  /// The amount of time to wait in between replanning attempts (in seconds)
  double replan_delay;
} moveit_msgs__msg__PlanningOptions;

// Struct for a sequence of moveit_msgs__msg__PlanningOptions.
typedef struct moveit_msgs__msg__PlanningOptions__Sequence
{
  moveit_msgs__msg__PlanningOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlanningOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_H_
