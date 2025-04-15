// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_services_package:srv/GetFloat32Array.idl
// generated code does not contain a copyright notice

#ifndef COMMON_SERVICES_PACKAGE__SRV__DETAIL__GET_FLOAT32_ARRAY__TRAITS_HPP_
#define COMMON_SERVICES_PACKAGE__SRV__DETAIL__GET_FLOAT32_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "common_services_package/srv/detail/get_float32_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace common_services_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFloat32Array_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFloat32Array_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFloat32Array_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace common_services_package

namespace rosidl_generator_traits
{

[[deprecated("use common_services_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_services_package::srv::GetFloat32Array_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_services_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_services_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_services_package::srv::GetFloat32Array_Request & msg)
{
  return common_services_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_services_package::srv::GetFloat32Array_Request>()
{
  return "common_services_package::srv::GetFloat32Array_Request";
}

template<>
inline const char * name<common_services_package::srv::GetFloat32Array_Request>()
{
  return "common_services_package/srv/GetFloat32Array_Request";
}

template<>
struct has_fixed_size<common_services_package::srv::GetFloat32Array_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<common_services_package::srv::GetFloat32Array_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<common_services_package::srv::GetFloat32Array_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace common_services_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFloat32Array_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFloat32Array_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFloat32Array_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace common_services_package

namespace rosidl_generator_traits
{

[[deprecated("use common_services_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_services_package::srv::GetFloat32Array_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_services_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_services_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_services_package::srv::GetFloat32Array_Response & msg)
{
  return common_services_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_services_package::srv::GetFloat32Array_Response>()
{
  return "common_services_package::srv::GetFloat32Array_Response";
}

template<>
inline const char * name<common_services_package::srv::GetFloat32Array_Response>()
{
  return "common_services_package/srv/GetFloat32Array_Response";
}

template<>
struct has_fixed_size<common_services_package::srv::GetFloat32Array_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<common_services_package::srv::GetFloat32Array_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<common_services_package::srv::GetFloat32Array_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace common_services_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFloat32Array_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFloat32Array_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFloat32Array_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace common_services_package

namespace rosidl_generator_traits
{

[[deprecated("use common_services_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_services_package::srv::GetFloat32Array_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_services_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_services_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_services_package::srv::GetFloat32Array_Event & msg)
{
  return common_services_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_services_package::srv::GetFloat32Array_Event>()
{
  return "common_services_package::srv::GetFloat32Array_Event";
}

template<>
inline const char * name<common_services_package::srv::GetFloat32Array_Event>()
{
  return "common_services_package/srv/GetFloat32Array_Event";
}

template<>
struct has_fixed_size<common_services_package::srv::GetFloat32Array_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<common_services_package::srv::GetFloat32Array_Event>
  : std::integral_constant<bool, has_bounded_size<common_services_package::srv::GetFloat32Array_Request>::value && has_bounded_size<common_services_package::srv::GetFloat32Array_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<common_services_package::srv::GetFloat32Array_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_services_package::srv::GetFloat32Array>()
{
  return "common_services_package::srv::GetFloat32Array";
}

template<>
inline const char * name<common_services_package::srv::GetFloat32Array>()
{
  return "common_services_package/srv/GetFloat32Array";
}

template<>
struct has_fixed_size<common_services_package::srv::GetFloat32Array>
  : std::integral_constant<
    bool,
    has_fixed_size<common_services_package::srv::GetFloat32Array_Request>::value &&
    has_fixed_size<common_services_package::srv::GetFloat32Array_Response>::value
  >
{
};

template<>
struct has_bounded_size<common_services_package::srv::GetFloat32Array>
  : std::integral_constant<
    bool,
    has_bounded_size<common_services_package::srv::GetFloat32Array_Request>::value &&
    has_bounded_size<common_services_package::srv::GetFloat32Array_Response>::value
  >
{
};

template<>
struct is_service<common_services_package::srv::GetFloat32Array>
  : std::true_type
{
};

template<>
struct is_service_request<common_services_package::srv::GetFloat32Array_Request>
  : std::true_type
{
};

template<>
struct is_service_response<common_services_package::srv::GetFloat32Array_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMON_SERVICES_PACKAGE__SRV__DETAIL__GET_FLOAT32_ARRAY__TRAITS_HPP_
