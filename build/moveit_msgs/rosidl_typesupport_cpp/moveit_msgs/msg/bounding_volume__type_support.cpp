// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/msg/detail/bounding_volume__functions.h"
#include "moveit_msgs/msg/detail/bounding_volume__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _BoundingVolume_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BoundingVolume_type_support_ids_t;

static const _BoundingVolume_type_support_ids_t _BoundingVolume_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BoundingVolume_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BoundingVolume_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BoundingVolume_type_support_symbol_names_t _BoundingVolume_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, msg, BoundingVolume)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, BoundingVolume)),
  }
};

typedef struct _BoundingVolume_type_support_data_t
{
  void * data[2];
} _BoundingVolume_type_support_data_t;

static _BoundingVolume_type_support_data_t _BoundingVolume_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BoundingVolume_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_BoundingVolume_message_typesupport_ids.typesupport_identifier[0],
  &_BoundingVolume_message_typesupport_symbol_names.symbol_name[0],
  &_BoundingVolume_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BoundingVolume_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BoundingVolume_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__msg__BoundingVolume__get_type_hash,
  &moveit_msgs__msg__BoundingVolume__get_type_description,
  &moveit_msgs__msg__BoundingVolume__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::msg::BoundingVolume>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_cpp::BoundingVolume_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, msg, BoundingVolume)() {
  return get_message_type_support_handle<moveit_msgs::msg::BoundingVolume>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
