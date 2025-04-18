// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_msgs:srv/GetGroupUrdf.idl
// generated code does not contain a copyright notice

#include "moveit_msgs/srv/detail/get_group_urdf__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__GetGroupUrdf__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x63, 0xc6, 0x92, 0x85, 0x21, 0xf2, 0xba,
      0xf5, 0xe3, 0x81, 0xb7, 0x3f, 0x8e, 0xbd, 0xea,
      0x4f, 0x2d, 0xf8, 0x95, 0xe6, 0x43, 0xcb, 0x90,
      0xde, 0x93, 0x1a, 0x53, 0x19, 0xb8, 0x19, 0x8c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__GetGroupUrdf_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0xef, 0xa6, 0x79, 0x71, 0x9d, 0xda, 0x57,
      0xa2, 0xe3, 0x62, 0x5b, 0x66, 0x6b, 0x54, 0x00,
      0xed, 0xe4, 0x53, 0xd2, 0x8c, 0x2d, 0x72, 0xfd,
      0x34, 0x14, 0x85, 0xbb, 0xce, 0x05, 0x3b, 0x0c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__GetGroupUrdf_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0x34, 0x65, 0xd7, 0x2c, 0xab, 0x15, 0x9a,
      0x19, 0x47, 0x9b, 0x6a, 0x64, 0x9c, 0x86, 0x0f,
      0x39, 0xff, 0xfa, 0x94, 0x8a, 0x3e, 0xf7, 0x56,
      0x0b, 0x54, 0xb9, 0x0a, 0x57, 0x9f, 0xb5, 0x30,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__GetGroupUrdf_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x15, 0xd7, 0x52, 0x5d, 0x2e, 0x3f, 0xe0,
      0x98, 0x1c, 0x3c, 0xff, 0xd4, 0xdd, 0x36, 0x2a,
      0x06, 0x69, 0x3f, 0xb4, 0xb2, 0x59, 0x5a, 0xec,
      0xa8, 0x60, 0xd4, 0xd3, 0xc2, 0x9f, 0xfd, 0xf5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t moveit_msgs__msg__MoveItErrorCodes__EXPECTED_HASH = {1, {
    0xdc, 0xda, 0x8a, 0x99, 0x50, 0xcf, 0x6d, 0xd6,
    0xac, 0x22, 0x1c, 0x2c, 0x0d, 0x25, 0x09, 0xf5,
    0x2f, 0x13, 0x6a, 0xfa, 0x04, 0x03, 0xdd, 0x19,
    0xbe, 0xac, 0xdf, 0x07, 0xe8, 0x3e, 0x4a, 0x07,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char moveit_msgs__srv__GetGroupUrdf__TYPE_NAME[] = "moveit_msgs/srv/GetGroupUrdf";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char moveit_msgs__msg__MoveItErrorCodes__TYPE_NAME[] = "moveit_msgs/msg/MoveItErrorCodes";
static char moveit_msgs__srv__GetGroupUrdf_Event__TYPE_NAME[] = "moveit_msgs/srv/GetGroupUrdf_Event";
static char moveit_msgs__srv__GetGroupUrdf_Request__TYPE_NAME[] = "moveit_msgs/srv/GetGroupUrdf_Request";
static char moveit_msgs__srv__GetGroupUrdf_Response__TYPE_NAME[] = "moveit_msgs/srv/GetGroupUrdf_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char moveit_msgs__srv__GetGroupUrdf__FIELD_NAME__request_message[] = "request_message";
static char moveit_msgs__srv__GetGroupUrdf__FIELD_NAME__response_message[] = "response_message";
static char moveit_msgs__srv__GetGroupUrdf__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__GetGroupUrdf__FIELDS[] = {
  {
    {moveit_msgs__srv__GetGroupUrdf__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__GetGroupUrdf_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__GetGroupUrdf_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__GetGroupUrdf_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__GetGroupUrdf__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__MoveItErrorCodes__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__GetGroupUrdf__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__GetGroupUrdf__TYPE_NAME, 28, 28},
      {moveit_msgs__srv__GetGroupUrdf__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__GetGroupUrdf__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__MoveItErrorCodes__EXPECTED_HASH, moveit_msgs__msg__MoveItErrorCodes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = moveit_msgs__msg__MoveItErrorCodes__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = moveit_msgs__srv__GetGroupUrdf_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = moveit_msgs__srv__GetGroupUrdf_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = moveit_msgs__srv__GetGroupUrdf_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__GetGroupUrdf_Request__FIELD_NAME__group_name[] = "group_name";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__GetGroupUrdf_Request__FIELDS[] = {
  {
    {moveit_msgs__srv__GetGroupUrdf_Request__FIELD_NAME__group_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__GetGroupUrdf_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__GetGroupUrdf_Request__TYPE_NAME, 36, 36},
      {moveit_msgs__srv__GetGroupUrdf_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__GetGroupUrdf_Response__FIELD_NAME__error_code[] = "error_code";
static char moveit_msgs__srv__GetGroupUrdf_Response__FIELD_NAME__urdf_string[] = "urdf_string";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__GetGroupUrdf_Response__FIELDS[] = {
  {
    {moveit_msgs__srv__GetGroupUrdf_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__msg__MoveItErrorCodes__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf_Response__FIELD_NAME__urdf_string, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__GetGroupUrdf_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {moveit_msgs__msg__MoveItErrorCodes__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__GetGroupUrdf_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__GetGroupUrdf_Response__TYPE_NAME, 37, 37},
      {moveit_msgs__srv__GetGroupUrdf_Response__FIELDS, 2, 2},
    },
    {moveit_msgs__srv__GetGroupUrdf_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&moveit_msgs__msg__MoveItErrorCodes__EXPECTED_HASH, moveit_msgs__msg__MoveItErrorCodes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = moveit_msgs__msg__MoveItErrorCodes__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__GetGroupUrdf_Event__FIELD_NAME__info[] = "info";
static char moveit_msgs__srv__GetGroupUrdf_Event__FIELD_NAME__request[] = "request";
static char moveit_msgs__srv__GetGroupUrdf_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__GetGroupUrdf_Event__FIELDS[] = {
  {
    {moveit_msgs__srv__GetGroupUrdf_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__GetGroupUrdf_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__GetGroupUrdf_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__GetGroupUrdf_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__msg__MoveItErrorCodes__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__GetGroupUrdf_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__GetGroupUrdf_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__GetGroupUrdf_Event__TYPE_NAME, 34, 34},
      {moveit_msgs__srv__GetGroupUrdf_Event__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__GetGroupUrdf_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_msgs__msg__MoveItErrorCodes__EXPECTED_HASH, moveit_msgs__msg__MoveItErrorCodes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = moveit_msgs__msg__MoveItErrorCodes__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = moveit_msgs__srv__GetGroupUrdf_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = moveit_msgs__srv__GetGroupUrdf_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Name of the planning group for which an URDF is requested\n"
  "string group_name\n"
  "---\n"
  "# Whether an error occurred\n"
  "MoveItErrorCodes error_code\n"
  "# URDF of the requested group. Empty if request was not successful e.g. because the group does not exist\n"
  "string urdf_string";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__GetGroupUrdf__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__GetGroupUrdf__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 262, 262},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__GetGroupUrdf_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__GetGroupUrdf_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__GetGroupUrdf_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__GetGroupUrdf_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__GetGroupUrdf_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__GetGroupUrdf_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__GetGroupUrdf__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__GetGroupUrdf__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *moveit_msgs__msg__MoveItErrorCodes__get_individual_type_description_source(NULL);
    sources[3] = *moveit_msgs__srv__GetGroupUrdf_Event__get_individual_type_description_source(NULL);
    sources[4] = *moveit_msgs__srv__GetGroupUrdf_Request__get_individual_type_description_source(NULL);
    sources[5] = *moveit_msgs__srv__GetGroupUrdf_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__GetGroupUrdf_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__GetGroupUrdf_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__GetGroupUrdf_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__GetGroupUrdf_Response__get_individual_type_description_source(NULL),
    sources[1] = *moveit_msgs__msg__MoveItErrorCodes__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__GetGroupUrdf_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__GetGroupUrdf_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *moveit_msgs__msg__MoveItErrorCodes__get_individual_type_description_source(NULL);
    sources[3] = *moveit_msgs__srv__GetGroupUrdf_Request__get_individual_type_description_source(NULL);
    sources[4] = *moveit_msgs__srv__GetGroupUrdf_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
