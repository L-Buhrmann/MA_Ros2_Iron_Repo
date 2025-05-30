// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/srv/detail/grasp_planning__functions.h"
#include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_Request_type_support_ids_t;

static const _GraspPlanning_Request_type_support_ids_t _GraspPlanning_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_Request_type_support_symbol_names_t _GraspPlanning_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GraspPlanning_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GraspPlanning_Request)),
  }
};

typedef struct _GraspPlanning_Request_type_support_data_t
{
  void * data[2];
} _GraspPlanning_Request_type_support_data_t;

static _GraspPlanning_Request_type_support_data_t _GraspPlanning_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GraspPlanning_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__GraspPlanning_Request__get_type_hash,
  &moveit_msgs__srv__GraspPlanning_Request__get_type_description,
  &moveit_msgs__srv__GraspPlanning_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Request>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GraspPlanning_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GraspPlanning_Request)() {
  return get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_Response_type_support_ids_t;

static const _GraspPlanning_Response_type_support_ids_t _GraspPlanning_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_Response_type_support_symbol_names_t _GraspPlanning_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GraspPlanning_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GraspPlanning_Response)),
  }
};

typedef struct _GraspPlanning_Response_type_support_data_t
{
  void * data[2];
} _GraspPlanning_Response_type_support_data_t;

static _GraspPlanning_Response_type_support_data_t _GraspPlanning_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GraspPlanning_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__GraspPlanning_Response__get_type_hash,
  &moveit_msgs__srv__GraspPlanning_Response__get_type_description,
  &moveit_msgs__srv__GraspPlanning_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Response>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GraspPlanning_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GraspPlanning_Response)() {
  return get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_Event_type_support_ids_t;

static const _GraspPlanning_Event_type_support_ids_t _GraspPlanning_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_Event_type_support_symbol_names_t _GraspPlanning_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GraspPlanning_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GraspPlanning_Event)),
  }
};

typedef struct _GraspPlanning_Event_type_support_data_t
{
  void * data[2];
} _GraspPlanning_Event_type_support_data_t;

static _GraspPlanning_Event_type_support_data_t _GraspPlanning_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GraspPlanning_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__GraspPlanning_Event__get_type_hash,
  &moveit_msgs__srv__GraspPlanning_Event__get_type_description,
  &moveit_msgs__srv__GraspPlanning_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Event>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GraspPlanning_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GraspPlanning_Event)() {
  return get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_type_support_ids_t;

static const _GraspPlanning_type_support_ids_t _GraspPlanning_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_type_support_symbol_names_t _GraspPlanning_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GraspPlanning)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GraspPlanning)),
  }
};

typedef struct _GraspPlanning_type_support_data_t
{
  void * data[2];
} _GraspPlanning_type_support_data_t;

static _GraspPlanning_type_support_data_t _GraspPlanning_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_GraspPlanning_service_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_service_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GraspPlanning_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<moveit_msgs::srv::GraspPlanning>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<moveit_msgs::srv::GraspPlanning>,
  &moveit_msgs__srv__GraspPlanning__get_type_hash,
  &moveit_msgs__srv__GraspPlanning__get_type_description,
  &moveit_msgs__srv__GraspPlanning__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::srv::GraspPlanning>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GraspPlanning_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
