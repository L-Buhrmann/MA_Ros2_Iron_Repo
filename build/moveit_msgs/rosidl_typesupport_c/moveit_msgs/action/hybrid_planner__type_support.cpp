// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:action/HybridPlanner.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/action/detail/hybrid_planner__struct.h"
#include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
#include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_Goal_type_support_ids_t;

static const _HybridPlanner_Goal_type_support_ids_t _HybridPlanner_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_Goal_type_support_symbol_names_t _HybridPlanner_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_Goal)),
  }
};

typedef struct _HybridPlanner_Goal_type_support_data_t
{
  void * data[2];
} _HybridPlanner_Goal_type_support_data_t;

static _HybridPlanner_Goal_type_support_data_t _HybridPlanner_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_Goal_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_Goal__get_type_hash,
  &moveit_msgs__action__HybridPlanner_Goal__get_type_description,
  &moveit_msgs__action__HybridPlanner_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_Goal)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_Result_type_support_ids_t;

static const _HybridPlanner_Result_type_support_ids_t _HybridPlanner_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_Result_type_support_symbol_names_t _HybridPlanner_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_Result)),
  }
};

typedef struct _HybridPlanner_Result_type_support_data_t
{
  void * data[2];
} _HybridPlanner_Result_type_support_data_t;

static _HybridPlanner_Result_type_support_data_t _HybridPlanner_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_Result_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_Result_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_Result_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_Result__get_type_hash,
  &moveit_msgs__action__HybridPlanner_Result__get_type_description,
  &moveit_msgs__action__HybridPlanner_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_Result)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_Feedback_type_support_ids_t;

static const _HybridPlanner_Feedback_type_support_ids_t _HybridPlanner_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_Feedback_type_support_symbol_names_t _HybridPlanner_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_Feedback)),
  }
};

typedef struct _HybridPlanner_Feedback_type_support_data_t
{
  void * data[2];
} _HybridPlanner_Feedback_type_support_data_t;

static _HybridPlanner_Feedback_type_support_data_t _HybridPlanner_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_Feedback_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_Feedback__get_type_hash,
  &moveit_msgs__action__HybridPlanner_Feedback__get_type_description,
  &moveit_msgs__action__HybridPlanner_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_Feedback)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_SendGoal_Request_type_support_ids_t;

static const _HybridPlanner_SendGoal_Request_type_support_ids_t _HybridPlanner_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_SendGoal_Request_type_support_symbol_names_t _HybridPlanner_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_SendGoal_Request)),
  }
};

typedef struct _HybridPlanner_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _HybridPlanner_SendGoal_Request_type_support_data_t;

static _HybridPlanner_SendGoal_Request_type_support_data_t _HybridPlanner_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_SendGoal_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_SendGoal_Request__get_type_hash,
  &moveit_msgs__action__HybridPlanner_SendGoal_Request__get_type_description,
  &moveit_msgs__action__HybridPlanner_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_SendGoal_Request)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_SendGoal_Response_type_support_ids_t;

static const _HybridPlanner_SendGoal_Response_type_support_ids_t _HybridPlanner_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_SendGoal_Response_type_support_symbol_names_t _HybridPlanner_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_SendGoal_Response)),
  }
};

typedef struct _HybridPlanner_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _HybridPlanner_SendGoal_Response_type_support_data_t;

static _HybridPlanner_SendGoal_Response_type_support_data_t _HybridPlanner_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_SendGoal_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_SendGoal_Response__get_type_hash,
  &moveit_msgs__action__HybridPlanner_SendGoal_Response__get_type_description,
  &moveit_msgs__action__HybridPlanner_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_SendGoal_Response)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_SendGoal_Event_type_support_ids_t;

static const _HybridPlanner_SendGoal_Event_type_support_ids_t _HybridPlanner_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_SendGoal_Event_type_support_symbol_names_t _HybridPlanner_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_SendGoal_Event)),
  }
};

typedef struct _HybridPlanner_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _HybridPlanner_SendGoal_Event_type_support_data_t;

static _HybridPlanner_SendGoal_Event_type_support_data_t _HybridPlanner_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_SendGoal_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_SendGoal_Event__get_type_hash,
  &moveit_msgs__action__HybridPlanner_SendGoal_Event__get_type_description,
  &moveit_msgs__action__HybridPlanner_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_SendGoal_Event)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
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
typedef struct _HybridPlanner_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_SendGoal_type_support_ids_t;

static const _HybridPlanner_SendGoal_type_support_ids_t _HybridPlanner_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_SendGoal_type_support_symbol_names_t _HybridPlanner_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_SendGoal)),
  }
};

typedef struct _HybridPlanner_SendGoal_type_support_data_t
{
  void * data[2];
} _HybridPlanner_SendGoal_type_support_data_t;

static _HybridPlanner_SendGoal_type_support_data_t _HybridPlanner_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_SendGoal_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HybridPlanner_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &HybridPlanner_SendGoal_Request_message_type_support_handle,
  &HybridPlanner_SendGoal_Response_message_type_support_handle,
  &HybridPlanner_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    action,
    HybridPlanner_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    action,
    HybridPlanner_SendGoal
  ),
  &moveit_msgs__action__HybridPlanner_SendGoal__get_type_hash,
  &moveit_msgs__action__HybridPlanner_SendGoal__get_type_description,
  &moveit_msgs__action__HybridPlanner_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_SendGoal)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_GetResult_Request_type_support_ids_t;

static const _HybridPlanner_GetResult_Request_type_support_ids_t _HybridPlanner_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_GetResult_Request_type_support_symbol_names_t _HybridPlanner_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_GetResult_Request)),
  }
};

typedef struct _HybridPlanner_GetResult_Request_type_support_data_t
{
  void * data[2];
} _HybridPlanner_GetResult_Request_type_support_data_t;

static _HybridPlanner_GetResult_Request_type_support_data_t _HybridPlanner_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_GetResult_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_GetResult_Request__get_type_hash,
  &moveit_msgs__action__HybridPlanner_GetResult_Request__get_type_description,
  &moveit_msgs__action__HybridPlanner_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_GetResult_Request)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_GetResult_Response_type_support_ids_t;

static const _HybridPlanner_GetResult_Response_type_support_ids_t _HybridPlanner_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_GetResult_Response_type_support_symbol_names_t _HybridPlanner_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_GetResult_Response)),
  }
};

typedef struct _HybridPlanner_GetResult_Response_type_support_data_t
{
  void * data[2];
} _HybridPlanner_GetResult_Response_type_support_data_t;

static _HybridPlanner_GetResult_Response_type_support_data_t _HybridPlanner_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_GetResult_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_GetResult_Response__get_type_hash,
  &moveit_msgs__action__HybridPlanner_GetResult_Response__get_type_description,
  &moveit_msgs__action__HybridPlanner_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_GetResult_Response)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_GetResult_Event_type_support_ids_t;

static const _HybridPlanner_GetResult_Event_type_support_ids_t _HybridPlanner_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_GetResult_Event_type_support_symbol_names_t _HybridPlanner_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_GetResult_Event)),
  }
};

typedef struct _HybridPlanner_GetResult_Event_type_support_data_t
{
  void * data[2];
} _HybridPlanner_GetResult_Event_type_support_data_t;

static _HybridPlanner_GetResult_Event_type_support_data_t _HybridPlanner_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_GetResult_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_GetResult_Event__get_type_hash,
  &moveit_msgs__action__HybridPlanner_GetResult_Event__get_type_description,
  &moveit_msgs__action__HybridPlanner_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_GetResult_Event)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
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
typedef struct _HybridPlanner_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_GetResult_type_support_ids_t;

static const _HybridPlanner_GetResult_type_support_ids_t _HybridPlanner_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_GetResult_type_support_symbol_names_t _HybridPlanner_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_GetResult)),
  }
};

typedef struct _HybridPlanner_GetResult_type_support_data_t
{
  void * data[2];
} _HybridPlanner_GetResult_type_support_data_t;

static _HybridPlanner_GetResult_type_support_data_t _HybridPlanner_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_GetResult_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HybridPlanner_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &HybridPlanner_GetResult_Request_message_type_support_handle,
  &HybridPlanner_GetResult_Response_message_type_support_handle,
  &HybridPlanner_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    action,
    HybridPlanner_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    action,
    HybridPlanner_GetResult
  ),
  &moveit_msgs__action__HybridPlanner_GetResult__get_type_hash,
  &moveit_msgs__action__HybridPlanner_GetResult__get_type_description,
  &moveit_msgs__action__HybridPlanner_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_GetResult)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__functions.h"
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

typedef struct _HybridPlanner_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_FeedbackMessage_type_support_ids_t;

static const _HybridPlanner_FeedbackMessage_type_support_ids_t _HybridPlanner_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_FeedbackMessage_type_support_symbol_names_t _HybridPlanner_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, HybridPlanner_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, HybridPlanner_FeedbackMessage)),
  }
};

typedef struct _HybridPlanner_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _HybridPlanner_FeedbackMessage_type_support_data_t;

static _HybridPlanner_FeedbackMessage_type_support_data_t _HybridPlanner_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_FeedbackMessage_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__action__HybridPlanner_FeedbackMessage__get_type_hash,
  &moveit_msgs__action__HybridPlanner_FeedbackMessage__get_type_description,
  &moveit_msgs__action__HybridPlanner_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_FeedbackMessage)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::HybridPlanner_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "moveit_msgs/action/hybrid_planner.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__type_support.h"

static rosidl_action_type_support_t _moveit_msgs__action__HybridPlanner__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &moveit_msgs__action__HybridPlanner__get_type_hash,
  &moveit_msgs__action__HybridPlanner__get_type_description,
  &moveit_msgs__action__HybridPlanner__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, moveit_msgs, action, HybridPlanner)()
{
  // Thread-safe by always writing the same values to the static struct
  _moveit_msgs__action__HybridPlanner__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_SendGoal)();
  _moveit_msgs__action__HybridPlanner__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_GetResult)();
  _moveit_msgs__action__HybridPlanner__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _moveit_msgs__action__HybridPlanner__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, HybridPlanner_FeedbackMessage)();
  _moveit_msgs__action__HybridPlanner__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_moveit_msgs__action__HybridPlanner__typesupport_c;
}

#ifdef __cplusplus
}
#endif
