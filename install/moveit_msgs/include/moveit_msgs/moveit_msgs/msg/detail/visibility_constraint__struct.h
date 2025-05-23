// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SENSOR_Z'.
/**
  * The axis that is assumed to indicate the direction of view for the sensor
  * X = 2, Y = 1, Z = 0
 */
enum
{
  moveit_msgs__msg__VisibilityConstraint__SENSOR_Z = 0
};

/// Constant 'SENSOR_Y'.
enum
{
  moveit_msgs__msg__VisibilityConstraint__SENSOR_Y = 1
};

/// Constant 'SENSOR_X'.
enum
{
  moveit_msgs__msg__VisibilityConstraint__SENSOR_X = 2
};

// Include directives for member types
// Member 'target_pose'
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/VisibilityConstraint in the package moveit_msgs.
/**
  * The constraint is useful to maintain visibility to a disc (the target) in a particular frame.
  * This disc forms the base of a visibiliy cone whose tip is at the origin of the sensor.
  * Maintaining visibility is done by ensuring the robot does not obstruct the visibility cone.
  * Note:
  * This constraint does NOT enforce minimum or maximum distances between the sensor
  * and the target, nor does it enforce the target to be in the field of view of
  * the sensor. A PositionConstraint can (and probably should) be used for such purposes.
 */
typedef struct moveit_msgs__msg__VisibilityConstraint
{
  /// The radius of the disc that should be maintained visible
  double target_radius;
  /// The pose of the disc; as the robot moves, the pose of the disc may change as well
  /// This can be in the frame of a particular robot link, for example
  geometry_msgs__msg__PoseStamped target_pose;
  /// From the sensor origin towards the target, the disc forms a visibility cone
  /// This cone is approximated using many sides. For example, when using 4 sides,
  /// that in fact makes the visibility region be a pyramid.
  /// This value should always be 3 or more.
  int32_t cone_sides;
  /// The pose in which visibility is to be maintained.
  /// The frame id should represent the robot link to which the sensor is attached.
  /// It is assumed the sensor can look directly at the target, in any direction.
  /// This assumption is usually not true, but additional PositionConstraints
  /// can resolve this issue.
  geometry_msgs__msg__PoseStamped sensor_pose;
  /// Even though the disc is maintained visible, the visibility cone can be very small
  /// because of the orientation of the disc with respect to the sensor. It is possible
  /// for example to view the disk almost from a side, in which case the visibility cone
  /// can end up having close to 0 volume. The view angle is defined to be the angle between
  /// the normal to the visibility disc and the direction vector from the sensor origin.
  /// The value below represents the minimum desired view angle. For a perfect view,
  /// this value will be 0 (the two vectors are exact opposites). For a completely obstructed view
  /// this value will be Pi/2 (the vectors are perpendicular). This value defined below
  /// is the maximum view angle to be maintained. This should be a value in the open interval
  /// (0, Pi/2). If 0 is set, the view angle is NOT enforced.
  double max_view_angle;
  /// This angle is used similarly to max_view_angle but limits the maximum angle
  /// between the sensor origin direction vector and the axis that connects the
  /// sensor origin to the target frame origin. The value is again in the range (0, Pi/2)
  /// and is NOT enforced if set to 0.
  double max_range_angle;
  uint8_t sensor_view_direction;
  /// A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)
  double weight;
} moveit_msgs__msg__VisibilityConstraint;

// Struct for a sequence of moveit_msgs__msg__VisibilityConstraint.
typedef struct moveit_msgs__msg__VisibilityConstraint__Sequence
{
  moveit_msgs__msg__VisibilityConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__VisibilityConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_H_
