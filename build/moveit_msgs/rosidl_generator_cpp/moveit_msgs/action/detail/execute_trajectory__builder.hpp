// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:action/ExecuteTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__BUILDER_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/action/detail/execute_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_Goal_controller_names
{
public:
  explicit Init_ExecuteTrajectory_Goal_controller_names(::moveit_msgs::action::ExecuteTrajectory_Goal & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_Goal controller_names(::moveit_msgs::action::ExecuteTrajectory_Goal::_controller_names_type arg)
  {
    msg_.controller_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_Goal msg_;
};

class Init_ExecuteTrajectory_Goal_trajectory
{
public:
  Init_ExecuteTrajectory_Goal_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTrajectory_Goal_controller_names trajectory(::moveit_msgs::action::ExecuteTrajectory_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_ExecuteTrajectory_Goal_controller_names(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_Goal>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_Goal_trajectory();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_Result_error_code
{
public:
  Init_ExecuteTrajectory_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_Result error_code(::moveit_msgs::action::ExecuteTrajectory_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_Result>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_Result_error_code();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_Feedback_state
{
public:
  Init_ExecuteTrajectory_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_Feedback state(::moveit_msgs::action::ExecuteTrajectory_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_Feedback>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_Feedback_state();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteTrajectory_SendGoal_Request_goal(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Request goal(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Request msg_;
};

class Init_ExecuteTrajectory_SendGoal_Request_goal_id
{
public:
  Init_ExecuteTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTrajectory_SendGoal_Request_goal goal_id(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_SendGoal_Request>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_SendGoal_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteTrajectory_SendGoal_Response_stamp(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Response stamp(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Response msg_;
};

class Init_ExecuteTrajectory_SendGoal_Response_accepted
{
public:
  Init_ExecuteTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTrajectory_SendGoal_Response_stamp accepted(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_SendGoal_Response>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_SendGoal_Response_accepted();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_SendGoal_Event_response
{
public:
  explicit Init_ExecuteTrajectory_SendGoal_Event_response(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event response(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event msg_;
};

class Init_ExecuteTrajectory_SendGoal_Event_request
{
public:
  explicit Init_ExecuteTrajectory_SendGoal_Event_request(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteTrajectory_SendGoal_Event_response request(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteTrajectory_SendGoal_Event_response(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event msg_;
};

class Init_ExecuteTrajectory_SendGoal_Event_info
{
public:
  Init_ExecuteTrajectory_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTrajectory_SendGoal_Event_request info(::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteTrajectory_SendGoal_Event_request(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_SendGoal_Event>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_SendGoal_Event_info();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_GetResult_Request_goal_id
{
public:
  Init_ExecuteTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Request goal_id(::moveit_msgs::action::ExecuteTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_GetResult_Request>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_GetResult_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_GetResult_Response_result
{
public:
  explicit Init_ExecuteTrajectory_GetResult_Response_result(::moveit_msgs::action::ExecuteTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Response result(::moveit_msgs::action::ExecuteTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Response msg_;
};

class Init_ExecuteTrajectory_GetResult_Response_status
{
public:
  Init_ExecuteTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTrajectory_GetResult_Response_result status(::moveit_msgs::action::ExecuteTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_GetResult_Response>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_GetResult_Response_status();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_GetResult_Event_response
{
public:
  explicit Init_ExecuteTrajectory_GetResult_Event_response(::moveit_msgs::action::ExecuteTrajectory_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Event response(::moveit_msgs::action::ExecuteTrajectory_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Event msg_;
};

class Init_ExecuteTrajectory_GetResult_Event_request
{
public:
  explicit Init_ExecuteTrajectory_GetResult_Event_request(::moveit_msgs::action::ExecuteTrajectory_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteTrajectory_GetResult_Event_response request(::moveit_msgs::action::ExecuteTrajectory_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteTrajectory_GetResult_Event_response(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Event msg_;
};

class Init_ExecuteTrajectory_GetResult_Event_info
{
public:
  Init_ExecuteTrajectory_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTrajectory_GetResult_Event_request info(::moveit_msgs::action::ExecuteTrajectory_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteTrajectory_GetResult_Event_request(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_GetResult_Event>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_GetResult_Event_info();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteTrajectory_FeedbackMessage_feedback(::moveit_msgs::action::ExecuteTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::ExecuteTrajectory_FeedbackMessage feedback(::moveit_msgs::action::ExecuteTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_FeedbackMessage msg_;
};

class Init_ExecuteTrajectory_FeedbackMessage_goal_id
{
public:
  Init_ExecuteTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTrajectory_FeedbackMessage_feedback goal_id(::moveit_msgs::action::ExecuteTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::moveit_msgs::action::ExecuteTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::ExecuteTrajectory_FeedbackMessage>()
{
  return moveit_msgs::action::builder::Init_ExecuteTrajectory_FeedbackMessage_goal_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__BUILDER_HPP_
