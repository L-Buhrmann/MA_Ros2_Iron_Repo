// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_services_package:srv/GetPointCloud2.idl
// generated code does not contain a copyright notice

#ifndef COMMON_SERVICES_PACKAGE__SRV__DETAIL__GET_POINT_CLOUD2__TRAITS_HPP_
#define COMMON_SERVICES_PACKAGE__SRV__DETAIL__GET_POINT_CLOUD2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "common_services_package/srv/detail/get_point_cloud2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace common_services_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPointCloud2_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPointCloud2_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPointCloud2_Request & msg, bool use_flow_style = false)
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
  const common_services_package::srv::GetPointCloud2_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_services_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_services_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_services_package::srv::GetPointCloud2_Request & msg)
{
  return common_services_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_services_package::srv::GetPointCloud2_Request>()
{
  return "common_services_package::srv::GetPointCloud2_Request";
}

template<>
inline const char * name<common_services_package::srv::GetPointCloud2_Request>()
{
  return "common_services_package/srv/GetPointCloud2_Request";
}

template<>
struct has_fixed_size<common_services_package::srv::GetPointCloud2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<common_services_package::srv::GetPointCloud2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<common_services_package::srv::GetPointCloud2_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace common_services_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPointCloud2_Response & msg,
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

  // member: cloud
  {
    out << "cloud: ";
    to_flow_style_yaml(msg.cloud, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPointCloud2_Response & msg,
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

  // member: cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud:\n";
    to_block_style_yaml(msg.cloud, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPointCloud2_Response & msg, bool use_flow_style = false)
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
  const common_services_package::srv::GetPointCloud2_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_services_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_services_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_services_package::srv::GetPointCloud2_Response & msg)
{
  return common_services_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_services_package::srv::GetPointCloud2_Response>()
{
  return "common_services_package::srv::GetPointCloud2_Response";
}

template<>
inline const char * name<common_services_package::srv::GetPointCloud2_Response>()
{
  return "common_services_package/srv/GetPointCloud2_Response";
}

template<>
struct has_fixed_size<common_services_package::srv::GetPointCloud2_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<common_services_package::srv::GetPointCloud2_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<common_services_package::srv::GetPointCloud2_Response>
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
  const GetPointCloud2_Event & msg,
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
  const GetPointCloud2_Event & msg,
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

inline std::string to_yaml(const GetPointCloud2_Event & msg, bool use_flow_style = false)
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
  const common_services_package::srv::GetPointCloud2_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_services_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_services_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_services_package::srv::GetPointCloud2_Event & msg)
{
  return common_services_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_services_package::srv::GetPointCloud2_Event>()
{
  return "common_services_package::srv::GetPointCloud2_Event";
}

template<>
inline const char * name<common_services_package::srv::GetPointCloud2_Event>()
{
  return "common_services_package/srv/GetPointCloud2_Event";
}

template<>
struct has_fixed_size<common_services_package::srv::GetPointCloud2_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<common_services_package::srv::GetPointCloud2_Event>
  : std::integral_constant<bool, has_bounded_size<common_services_package::srv::GetPointCloud2_Request>::value && has_bounded_size<common_services_package::srv::GetPointCloud2_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<common_services_package::srv::GetPointCloud2_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_services_package::srv::GetPointCloud2>()
{
  return "common_services_package::srv::GetPointCloud2";
}

template<>
inline const char * name<common_services_package::srv::GetPointCloud2>()
{
  return "common_services_package/srv/GetPointCloud2";
}

template<>
struct has_fixed_size<common_services_package::srv::GetPointCloud2>
  : std::integral_constant<
    bool,
    has_fixed_size<common_services_package::srv::GetPointCloud2_Request>::value &&
    has_fixed_size<common_services_package::srv::GetPointCloud2_Response>::value
  >
{
};

template<>
struct has_bounded_size<common_services_package::srv::GetPointCloud2>
  : std::integral_constant<
    bool,
    has_bounded_size<common_services_package::srv::GetPointCloud2_Request>::value &&
    has_bounded_size<common_services_package::srv::GetPointCloud2_Response>::value
  >
{
};

template<>
struct is_service<common_services_package::srv::GetPointCloud2>
  : std::true_type
{
};

template<>
struct is_service_request<common_services_package::srv::GetPointCloud2_Request>
  : std::true_type
{
};

template<>
struct is_service_response<common_services_package::srv::GetPointCloud2_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMON_SERVICES_PACKAGE__SRV__DETAIL__GET_POINT_CLOUD2__TRAITS_HPP_
