// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:action/ExecuteTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/action/detail/execute_trajectory__struct.h"
#include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
#include "moveit_msgs/action/detail/execute_trajectory__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_Goal_type_support_ids_t;

static const _ExecuteTrajectory_Goal_type_support_ids_t _ExecuteTrajectory_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_Goal_type_support_symbol_names_t _ExecuteTrajectory_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_Goal)),
  }
};

typedef struct _ExecuteTrajectory_Goal_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_Goal_type_support_data_t;

static _ExecuteTrajectory_Goal_type_support_data_t _ExecuteTrajectory_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_Goal_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_Goal__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_Goal__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_Goal)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_Result_type_support_ids_t;

static const _ExecuteTrajectory_Result_type_support_ids_t _ExecuteTrajectory_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_Result_type_support_symbol_names_t _ExecuteTrajectory_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_Result)),
  }
};

typedef struct _ExecuteTrajectory_Result_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_Result_type_support_data_t;

static _ExecuteTrajectory_Result_type_support_data_t _ExecuteTrajectory_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_Result_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_Result__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_Result__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_Result)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_Feedback_type_support_ids_t;

static const _ExecuteTrajectory_Feedback_type_support_ids_t _ExecuteTrajectory_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_Feedback_type_support_symbol_names_t _ExecuteTrajectory_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_Feedback)),
  }
};

typedef struct _ExecuteTrajectory_Feedback_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_Feedback_type_support_data_t;

static _ExecuteTrajectory_Feedback_type_support_data_t _ExecuteTrajectory_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_Feedback_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_Feedback__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_Feedback__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_Feedback)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_SendGoal_Request_type_support_ids_t;

static const _ExecuteTrajectory_SendGoal_Request_type_support_ids_t _ExecuteTrajectory_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_SendGoal_Request_type_support_symbol_names_t _ExecuteTrajectory_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Request)),
  }
};

typedef struct _ExecuteTrajectory_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_SendGoal_Request_type_support_data_t;

static _ExecuteTrajectory_SendGoal_Request_type_support_data_t _ExecuteTrajectory_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_SendGoal_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Request)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_SendGoal_Response_type_support_ids_t;

static const _ExecuteTrajectory_SendGoal_Response_type_support_ids_t _ExecuteTrajectory_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_SendGoal_Response_type_support_symbol_names_t _ExecuteTrajectory_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Response)),
  }
};

typedef struct _ExecuteTrajectory_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_SendGoal_Response_type_support_data_t;

static _ExecuteTrajectory_SendGoal_Response_type_support_data_t _ExecuteTrajectory_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_SendGoal_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Response)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_SendGoal_Event_type_support_ids_t;

static const _ExecuteTrajectory_SendGoal_Event_type_support_ids_t _ExecuteTrajectory_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_SendGoal_Event_type_support_symbol_names_t _ExecuteTrajectory_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Event)),
  }
};

typedef struct _ExecuteTrajectory_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_SendGoal_Event_type_support_data_t;

static _ExecuteTrajectory_SendGoal_Event_type_support_data_t _ExecuteTrajectory_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_SendGoal_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Event__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Event__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_SendGoal_Event)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ExecuteTrajectory_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_SendGoal_type_support_ids_t;

static const _ExecuteTrajectory_SendGoal_type_support_ids_t _ExecuteTrajectory_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_SendGoal_type_support_symbol_names_t _ExecuteTrajectory_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_SendGoal)),
  }
};

typedef struct _ExecuteTrajectory_SendGoal_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_SendGoal_type_support_data_t;

static _ExecuteTrajectory_SendGoal_type_support_data_t _ExecuteTrajectory_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_SendGoal_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecuteTrajectory_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ExecuteTrajectory_SendGoal_Request_message_type_support_handle,
  &ExecuteTrajectory_SendGoal_Response_message_type_support_handle,
  &ExecuteTrajectory_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    action,
    ExecuteTrajectory_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    action,
    ExecuteTrajectory_SendGoal
  ),
  &moveit_msgs__action__ExecuteTrajectory_SendGoal__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_SendGoal)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_GetResult_Request_type_support_ids_t;

static const _ExecuteTrajectory_GetResult_Request_type_support_ids_t _ExecuteTrajectory_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_GetResult_Request_type_support_symbol_names_t _ExecuteTrajectory_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Request)),
  }
};

typedef struct _ExecuteTrajectory_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_GetResult_Request_type_support_data_t;

static _ExecuteTrajectory_GetResult_Request_type_support_data_t _ExecuteTrajectory_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_GetResult_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Request__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Request__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Request)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_GetResult_Response_type_support_ids_t;

static const _ExecuteTrajectory_GetResult_Response_type_support_ids_t _ExecuteTrajectory_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_GetResult_Response_type_support_symbol_names_t _ExecuteTrajectory_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Response)),
  }
};

typedef struct _ExecuteTrajectory_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_GetResult_Response_type_support_data_t;

static _ExecuteTrajectory_GetResult_Response_type_support_data_t _ExecuteTrajectory_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_GetResult_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Response__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Response__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Response)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_GetResult_Event_type_support_ids_t;

static const _ExecuteTrajectory_GetResult_Event_type_support_ids_t _ExecuteTrajectory_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_GetResult_Event_type_support_symbol_names_t _ExecuteTrajectory_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Event)),
  }
};

typedef struct _ExecuteTrajectory_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_GetResult_Event_type_support_data_t;

static _ExecuteTrajectory_GetResult_Event_type_support_data_t _ExecuteTrajectory_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_GetResult_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Event__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Event__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_GetResult_Event)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ExecuteTrajectory_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_GetResult_type_support_ids_t;

static const _ExecuteTrajectory_GetResult_type_support_ids_t _ExecuteTrajectory_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_GetResult_type_support_symbol_names_t _ExecuteTrajectory_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_GetResult)),
  }
};

typedef struct _ExecuteTrajectory_GetResult_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_GetResult_type_support_data_t;

static _ExecuteTrajectory_GetResult_type_support_data_t _ExecuteTrajectory_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_GetResult_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecuteTrajectory_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ExecuteTrajectory_GetResult_Request_message_type_support_handle,
  &ExecuteTrajectory_GetResult_Response_message_type_support_handle,
  &ExecuteTrajectory_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    action,
    ExecuteTrajectory_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    action,
    ExecuteTrajectory_GetResult
  ),
  &moveit_msgs__action__ExecuteTrajectory_GetResult__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_GetResult__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_GetResult)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteTrajectory_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteTrajectory_FeedbackMessage_type_support_ids_t;

static const _ExecuteTrajectory_FeedbackMessage_type_support_ids_t _ExecuteTrajectory_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteTrajectory_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteTrajectory_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteTrajectory_FeedbackMessage_type_support_symbol_names_t _ExecuteTrajectory_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, ExecuteTrajectory_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, ExecuteTrajectory_FeedbackMessage)),
  }
};

typedef struct _ExecuteTrajectory_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ExecuteTrajectory_FeedbackMessage_type_support_data_t;

static _ExecuteTrajectory_FeedbackMessage_type_support_data_t _ExecuteTrajectory_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteTrajectory_FeedbackMessage_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteTrajectory_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteTrajectory_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteTrajectory_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteTrajectory_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteTrajectory_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_FeedbackMessage)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::ExecuteTrajectory_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "moveit_msgs/action/execute_trajectory.h"
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__type_support.h"

static rosidl_action_type_support_t _moveit_msgs__action__ExecuteTrajectory__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &moveit_msgs__action__ExecuteTrajectory__get_type_hash,
  &moveit_msgs__action__ExecuteTrajectory__get_type_description,
  &moveit_msgs__action__ExecuteTrajectory__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory)()
{
  // Thread-safe by always writing the same values to the static struct
  _moveit_msgs__action__ExecuteTrajectory__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_SendGoal)();
  _moveit_msgs__action__ExecuteTrajectory__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_GetResult)();
  _moveit_msgs__action__ExecuteTrajectory__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _moveit_msgs__action__ExecuteTrajectory__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, ExecuteTrajectory_FeedbackMessage)();
  _moveit_msgs__action__ExecuteTrajectory__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_moveit_msgs__action__ExecuteTrajectory__typesupport_c;
}

#ifdef __cplusplus
}
#endif
