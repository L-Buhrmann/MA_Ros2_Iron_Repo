// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/load_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Request_filename
{
public:
  Init_LoadMap_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::LoadMap_Request filename(::moveit_msgs::srv::LoadMap_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::LoadMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::LoadMap_Request>()
{
  return moveit_msgs::srv::builder::Init_LoadMap_Request_filename();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Response_success
{
public:
  Init_LoadMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::LoadMap_Response success(::moveit_msgs::srv::LoadMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::LoadMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::LoadMap_Response>()
{
  return moveit_msgs::srv::builder::Init_LoadMap_Response_success();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Event_response
{
public:
  explicit Init_LoadMap_Event_response(::moveit_msgs::srv::LoadMap_Event & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::LoadMap_Event response(::moveit_msgs::srv::LoadMap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::LoadMap_Event msg_;
};

class Init_LoadMap_Event_request
{
public:
  explicit Init_LoadMap_Event_request(::moveit_msgs::srv::LoadMap_Event & msg)
  : msg_(msg)
  {}
  Init_LoadMap_Event_response request(::moveit_msgs::srv::LoadMap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LoadMap_Event_response(msg_);
  }

private:
  ::moveit_msgs::srv::LoadMap_Event msg_;
};

class Init_LoadMap_Event_info
{
public:
  Init_LoadMap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMap_Event_request info(::moveit_msgs::srv::LoadMap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LoadMap_Event_request(msg_);
  }

private:
  ::moveit_msgs::srv::LoadMap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::LoadMap_Event>()
{
  return moveit_msgs::srv::builder::Init_LoadMap_Event_info();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
