// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/GetMotionSequence.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/srv/detail/get_motion_sequence__struct.h"
#include "moveit_msgs/srv/detail/get_motion_sequence__type_support.h"
#include "moveit_msgs/srv/detail/get_motion_sequence__functions.h"
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

typedef struct _GetMotionSequence_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMotionSequence_Request_type_support_ids_t;

static const _GetMotionSequence_Request_type_support_ids_t _GetMotionSequence_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMotionSequence_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMotionSequence_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMotionSequence_Request_type_support_symbol_names_t _GetMotionSequence_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetMotionSequence_Request)),
  }
};

typedef struct _GetMotionSequence_Request_type_support_data_t
{
  void * data[2];
} _GetMotionSequence_Request_type_support_data_t;

static _GetMotionSequence_Request_type_support_data_t _GetMotionSequence_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMotionSequence_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetMotionSequence_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetMotionSequence_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetMotionSequence_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMotionSequence_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMotionSequence_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetMotionSequence_Request__get_type_hash,
  &moveit_msgs__srv__GetMotionSequence_Request__get_type_description,
  &moveit_msgs__srv__GetMotionSequence_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, GetMotionSequence_Request)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::GetMotionSequence_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__type_support.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__functions.h"
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

typedef struct _GetMotionSequence_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMotionSequence_Response_type_support_ids_t;

static const _GetMotionSequence_Response_type_support_ids_t _GetMotionSequence_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMotionSequence_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMotionSequence_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMotionSequence_Response_type_support_symbol_names_t _GetMotionSequence_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetMotionSequence_Response)),
  }
};

typedef struct _GetMotionSequence_Response_type_support_data_t
{
  void * data[2];
} _GetMotionSequence_Response_type_support_data_t;

static _GetMotionSequence_Response_type_support_data_t _GetMotionSequence_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMotionSequence_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetMotionSequence_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetMotionSequence_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetMotionSequence_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMotionSequence_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMotionSequence_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetMotionSequence_Response__get_type_hash,
  &moveit_msgs__srv__GetMotionSequence_Response__get_type_description,
  &moveit_msgs__srv__GetMotionSequence_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, GetMotionSequence_Response)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::GetMotionSequence_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__type_support.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__functions.h"
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

typedef struct _GetMotionSequence_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMotionSequence_Event_type_support_ids_t;

static const _GetMotionSequence_Event_type_support_ids_t _GetMotionSequence_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMotionSequence_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMotionSequence_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMotionSequence_Event_type_support_symbol_names_t _GetMotionSequence_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetMotionSequence_Event)),
  }
};

typedef struct _GetMotionSequence_Event_type_support_data_t
{
  void * data[2];
} _GetMotionSequence_Event_type_support_data_t;

static _GetMotionSequence_Event_type_support_data_t _GetMotionSequence_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMotionSequence_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetMotionSequence_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetMotionSequence_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetMotionSequence_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMotionSequence_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMotionSequence_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetMotionSequence_Event__get_type_hash,
  &moveit_msgs__srv__GetMotionSequence_Event__get_type_description,
  &moveit_msgs__srv__GetMotionSequence_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, GetMotionSequence_Event)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::GetMotionSequence_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__type_support.h"
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
typedef struct _GetMotionSequence_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMotionSequence_type_support_ids_t;

static const _GetMotionSequence_type_support_ids_t _GetMotionSequence_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMotionSequence_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMotionSequence_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMotionSequence_type_support_symbol_names_t _GetMotionSequence_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetMotionSequence)),
  }
};

typedef struct _GetMotionSequence_type_support_data_t
{
  void * data[2];
} _GetMotionSequence_type_support_data_t;

static _GetMotionSequence_type_support_data_t _GetMotionSequence_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMotionSequence_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetMotionSequence_service_typesupport_ids.typesupport_identifier[0],
  &_GetMotionSequence_service_typesupport_symbol_names.symbol_name[0],
  &_GetMotionSequence_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetMotionSequence_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMotionSequence_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetMotionSequence_Request_message_type_support_handle,
  &GetMotionSequence_Response_message_type_support_handle,
  &GetMotionSequence_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    GetMotionSequence
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    GetMotionSequence
  ),
  &moveit_msgs__srv__GetMotionSequence__get_type_hash,
  &moveit_msgs__srv__GetMotionSequence__get_type_description,
  &moveit_msgs__srv__GetMotionSequence__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, GetMotionSequence)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::GetMotionSequence_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
