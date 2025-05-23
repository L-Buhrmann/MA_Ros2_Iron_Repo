// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/srv/detail/get_cartesian_path__struct.h"
#include "moveit_msgs/srv/detail/get_cartesian_path__type_support.h"
#include "moveit_msgs/srv/detail/get_cartesian_path__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCartesianPath_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCartesianPath_Request_type_support_ids_t;

static const _GetCartesianPath_Request_type_support_ids_t _GetCartesianPath_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCartesianPath_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCartesianPath_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCartesianPath_Request_type_support_symbol_names_t _GetCartesianPath_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetCartesianPath_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetCartesianPath_Request)),
  }
};

typedef struct _GetCartesianPath_Request_type_support_data_t
{
  void * data[2];
} _GetCartesianPath_Request_type_support_data_t;

static _GetCartesianPath_Request_type_support_data_t _GetCartesianPath_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCartesianPath_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetCartesianPath_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetCartesianPath_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetCartesianPath_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCartesianPath_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCartesianPath_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetCartesianPath_Request__get_type_hash,
  &moveit_msgs__srv__GetCartesianPath_Request__get_type_description,
  &moveit_msgs__srv__GetCartesianPath_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, GetCartesianPath_Request)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::GetCartesianPath_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__type_support.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCartesianPath_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCartesianPath_Response_type_support_ids_t;

static const _GetCartesianPath_Response_type_support_ids_t _GetCartesianPath_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCartesianPath_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCartesianPath_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCartesianPath_Response_type_support_symbol_names_t _GetCartesianPath_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetCartesianPath_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetCartesianPath_Response)),
  }
};

typedef struct _GetCartesianPath_Response_type_support_data_t
{
  void * data[2];
} _GetCartesianPath_Response_type_support_data_t;

static _GetCartesianPath_Response_type_support_data_t _GetCartesianPath_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCartesianPath_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetCartesianPath_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetCartesianPath_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetCartesianPath_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCartesianPath_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCartesianPath_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetCartesianPath_Response__get_type_hash,
  &moveit_msgs__srv__GetCartesianPath_Response__get_type_description,
  &moveit_msgs__srv__GetCartesianPath_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, GetCartesianPath_Response)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::GetCartesianPath_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__type_support.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCartesianPath_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCartesianPath_Event_type_support_ids_t;

static const _GetCartesianPath_Event_type_support_ids_t _GetCartesianPath_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCartesianPath_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCartesianPath_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCartesianPath_Event_type_support_symbol_names_t _GetCartesianPath_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetCartesianPath_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetCartesianPath_Event)),
  }
};

typedef struct _GetCartesianPath_Event_type_support_data_t
{
  void * data[2];
} _GetCartesianPath_Event_type_support_data_t;

static _GetCartesianPath_Event_type_support_data_t _GetCartesianPath_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCartesianPath_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetCartesianPath_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetCartesianPath_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetCartesianPath_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCartesianPath_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCartesianPath_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetCartesianPath_Event__get_type_hash,
  &moveit_msgs__srv__GetCartesianPath_Event__get_type_description,
  &moveit_msgs__srv__GetCartesianPath_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, GetCartesianPath_Event)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::GetCartesianPath_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_cartesian_path__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetCartesianPath_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCartesianPath_type_support_ids_t;

static const _GetCartesianPath_type_support_ids_t _GetCartesianPath_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCartesianPath_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCartesianPath_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCartesianPath_type_support_symbol_names_t _GetCartesianPath_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetCartesianPath)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetCartesianPath)),
  }
};

typedef struct _GetCartesianPath_type_support_data_t
{
  void * data[2];
} _GetCartesianPath_type_support_data_t;

static _GetCartesianPath_type_support_data_t _GetCartesianPath_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCartesianPath_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetCartesianPath_service_typesupport_ids.typesupport_identifier[0],
  &_GetCartesianPath_service_typesupport_symbol_names.symbol_name[0],
  &_GetCartesianPath_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetCartesianPath_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCartesianPath_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetCartesianPath_Request_message_type_support_handle,
  &GetCartesianPath_Response_message_type_support_handle,
  &GetCartesianPath_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    GetCartesianPath
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    GetCartesianPath
  ),
  &moveit_msgs__srv__GetCartesianPath__get_type_hash,
  &moveit_msgs__srv__GetCartesianPath__get_type_description,
  &moveit_msgs__srv__GetCartesianPath__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, GetCartesianPath)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::GetCartesianPath_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
