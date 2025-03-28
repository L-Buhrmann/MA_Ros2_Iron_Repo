# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/GetCartesianPath.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetCartesianPath_Request(type):
    """Metaclass of message 'GetCartesianPath_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.GetCartesianPath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_cartesian_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_cartesian_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_cartesian_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_cartesian_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_cartesian_path__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from moveit_msgs.msg import Constraints
            if Constraints.__class__._TYPE_SUPPORT is None:
                Constraints.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCartesianPath_Request(metaclass=Metaclass_GetCartesianPath_Request):
    """Message class 'GetCartesianPath_Request'."""

    __slots__ = [
        '_header',
        '_start_state',
        '_group_name',
        '_link_name',
        '_waypoints',
        '_max_step',
        '_jump_threshold',
        '_prismatic_jump_threshold',
        '_revolute_jump_threshold',
        '_avoid_collisions',
        '_path_constraints',
        '_max_velocity_scaling_factor',
        '_max_acceleration_scaling_factor',
        '_cartesian_speed_limited_link',
        '_max_cartesian_speed',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'start_state': 'moveit_msgs/RobotState',
        'group_name': 'string',
        'link_name': 'string',
        'waypoints': 'sequence<geometry_msgs/Pose>',
        'max_step': 'double',
        'jump_threshold': 'double',
        'prismatic_jump_threshold': 'double',
        'revolute_jump_threshold': 'double',
        'avoid_collisions': 'boolean',
        'path_constraints': 'moveit_msgs/Constraints',
        'max_velocity_scaling_factor': 'double',
        'max_acceleration_scaling_factor': 'double',
        'cartesian_speed_limited_link': 'string',
        'max_cartesian_speed': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Constraints'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from moveit_msgs.msg import RobotState
        self.start_state = kwargs.get('start_state', RobotState())
        self.group_name = kwargs.get('group_name', str())
        self.link_name = kwargs.get('link_name', str())
        self.waypoints = kwargs.get('waypoints', [])
        self.max_step = kwargs.get('max_step', float())
        self.jump_threshold = kwargs.get('jump_threshold', float())
        self.prismatic_jump_threshold = kwargs.get('prismatic_jump_threshold', float())
        self.revolute_jump_threshold = kwargs.get('revolute_jump_threshold', float())
        self.avoid_collisions = kwargs.get('avoid_collisions', bool())
        from moveit_msgs.msg import Constraints
        self.path_constraints = kwargs.get('path_constraints', Constraints())
        self.max_velocity_scaling_factor = kwargs.get('max_velocity_scaling_factor', float())
        self.max_acceleration_scaling_factor = kwargs.get('max_acceleration_scaling_factor', float())
        self.cartesian_speed_limited_link = kwargs.get('cartesian_speed_limited_link', str())
        self.max_cartesian_speed = kwargs.get('max_cartesian_speed', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.start_state != other.start_state:
            return False
        if self.group_name != other.group_name:
            return False
        if self.link_name != other.link_name:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.max_step != other.max_step:
            return False
        if self.jump_threshold != other.jump_threshold:
            return False
        if self.prismatic_jump_threshold != other.prismatic_jump_threshold:
            return False
        if self.revolute_jump_threshold != other.revolute_jump_threshold:
            return False
        if self.avoid_collisions != other.avoid_collisions:
            return False
        if self.path_constraints != other.path_constraints:
            return False
        if self.max_velocity_scaling_factor != other.max_velocity_scaling_factor:
            return False
        if self.max_acceleration_scaling_factor != other.max_acceleration_scaling_factor:
            return False
        if self.cartesian_speed_limited_link != other.cartesian_speed_limited_link:
            return False
        if self.max_cartesian_speed != other.max_cartesian_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def start_state(self):
        """Message field 'start_state'."""
        return self._start_state

    @start_state.setter
    def start_state(self, value):
        if self._check_fields:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'start_state' field must be a sub message of type 'RobotState'"
        self._start_state = value

    @builtins.property
    def group_name(self):
        """Message field 'group_name'."""
        return self._group_name

    @group_name.setter
    def group_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'group_name' field must be of type 'str'"
        self._group_name = value

    @builtins.property
    def link_name(self):
        """Message field 'link_name'."""
        return self._link_name

    @link_name.setter
    def link_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'link_name' field must be of type 'str'"
        self._link_name = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'Pose'"
        self._waypoints = value

    @builtins.property
    def max_step(self):
        """Message field 'max_step'."""
        return self._max_step

    @max_step.setter
    def max_step(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_step' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_step' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_step = value

    @builtins.property
    def jump_threshold(self):
        """Message field 'jump_threshold'."""
        return self._jump_threshold

    @jump_threshold.setter
    def jump_threshold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'jump_threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'jump_threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._jump_threshold = value

    @builtins.property
    def prismatic_jump_threshold(self):
        """Message field 'prismatic_jump_threshold'."""
        return self._prismatic_jump_threshold

    @prismatic_jump_threshold.setter
    def prismatic_jump_threshold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'prismatic_jump_threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'prismatic_jump_threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._prismatic_jump_threshold = value

    @builtins.property
    def revolute_jump_threshold(self):
        """Message field 'revolute_jump_threshold'."""
        return self._revolute_jump_threshold

    @revolute_jump_threshold.setter
    def revolute_jump_threshold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'revolute_jump_threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'revolute_jump_threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._revolute_jump_threshold = value

    @builtins.property
    def avoid_collisions(self):
        """Message field 'avoid_collisions'."""
        return self._avoid_collisions

    @avoid_collisions.setter
    def avoid_collisions(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'avoid_collisions' field must be of type 'bool'"
        self._avoid_collisions = value

    @builtins.property
    def path_constraints(self):
        """Message field 'path_constraints'."""
        return self._path_constraints

    @path_constraints.setter
    def path_constraints(self, value):
        if self._check_fields:
            from moveit_msgs.msg import Constraints
            assert \
                isinstance(value, Constraints), \
                "The 'path_constraints' field must be a sub message of type 'Constraints'"
        self._path_constraints = value

    @builtins.property
    def max_velocity_scaling_factor(self):
        """Message field 'max_velocity_scaling_factor'."""
        return self._max_velocity_scaling_factor

    @max_velocity_scaling_factor.setter
    def max_velocity_scaling_factor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_velocity_scaling_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_velocity_scaling_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_velocity_scaling_factor = value

    @builtins.property
    def max_acceleration_scaling_factor(self):
        """Message field 'max_acceleration_scaling_factor'."""
        return self._max_acceleration_scaling_factor

    @max_acceleration_scaling_factor.setter
    def max_acceleration_scaling_factor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration_scaling_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_acceleration_scaling_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_acceleration_scaling_factor = value

    @builtins.property
    def cartesian_speed_limited_link(self):
        """Message field 'cartesian_speed_limited_link'."""
        return self._cartesian_speed_limited_link

    @cartesian_speed_limited_link.setter
    def cartesian_speed_limited_link(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'cartesian_speed_limited_link' field must be of type 'str'"
        self._cartesian_speed_limited_link = value

    @builtins.property
    def max_cartesian_speed(self):
        """Message field 'max_cartesian_speed'."""
        return self._max_cartesian_speed

    @max_cartesian_speed.setter
    def max_cartesian_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_cartesian_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_cartesian_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_cartesian_speed = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_GetCartesianPath_Response(type):
    """Metaclass of message 'GetCartesianPath_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.GetCartesianPath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_cartesian_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_cartesian_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_cartesian_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_cartesian_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_cartesian_path__response

            from moveit_msgs.msg import MoveItErrorCodes
            if MoveItErrorCodes.__class__._TYPE_SUPPORT is None:
                MoveItErrorCodes.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotTrajectory
            if RobotTrajectory.__class__._TYPE_SUPPORT is None:
                RobotTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCartesianPath_Response(metaclass=Metaclass_GetCartesianPath_Response):
    """Message class 'GetCartesianPath_Response'."""

    __slots__ = [
        '_start_state',
        '_solution',
        '_fraction',
        '_error_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'start_state': 'moveit_msgs/RobotState',
        'solution': 'moveit_msgs/RobotTrajectory',
        'fraction': 'double',
        'error_code': 'moveit_msgs/MoveItErrorCodes',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MoveItErrorCodes'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import RobotState
        self.start_state = kwargs.get('start_state', RobotState())
        from moveit_msgs.msg import RobotTrajectory
        self.solution = kwargs.get('solution', RobotTrajectory())
        self.fraction = kwargs.get('fraction', float())
        from moveit_msgs.msg import MoveItErrorCodes
        self.error_code = kwargs.get('error_code', MoveItErrorCodes())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.start_state != other.start_state:
            return False
        if self.solution != other.solution:
            return False
        if self.fraction != other.fraction:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_state(self):
        """Message field 'start_state'."""
        return self._start_state

    @start_state.setter
    def start_state(self, value):
        if self._check_fields:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'start_state' field must be a sub message of type 'RobotState'"
        self._start_state = value

    @builtins.property
    def solution(self):
        """Message field 'solution'."""
        return self._solution

    @solution.setter
    def solution(self, value):
        if self._check_fields:
            from moveit_msgs.msg import RobotTrajectory
            assert \
                isinstance(value, RobotTrajectory), \
                "The 'solution' field must be a sub message of type 'RobotTrajectory'"
        self._solution = value

    @builtins.property
    def fraction(self):
        """Message field 'fraction'."""
        return self._fraction

    @fraction.setter
    def fraction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fraction' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fraction' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fraction = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if self._check_fields:
            from moveit_msgs.msg import MoveItErrorCodes
            assert \
                isinstance(value, MoveItErrorCodes), \
                "The 'error_code' field must be a sub message of type 'MoveItErrorCodes'"
        self._error_code = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetCartesianPath_Event(type):
    """Metaclass of message 'GetCartesianPath_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.GetCartesianPath_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_cartesian_path__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_cartesian_path__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_cartesian_path__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_cartesian_path__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_cartesian_path__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCartesianPath_Event(metaclass=Metaclass_GetCartesianPath_Event):
    """Message class 'GetCartesianPath_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<moveit_msgs/GetCartesianPath_Request, 1>',
        'response': 'sequence<moveit_msgs/GetCartesianPath_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'srv'], 'GetCartesianPath_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'srv'], 'GetCartesianPath_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from moveit_msgs.srv import GetCartesianPath_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GetCartesianPath_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GetCartesianPath_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from moveit_msgs.srv import GetCartesianPath_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GetCartesianPath_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GetCartesianPath_Response'"
        self._response = value


class Metaclass_GetCartesianPath(type):
    """Metaclass of service 'GetCartesianPath'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.GetCartesianPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_cartesian_path

            from moveit_msgs.srv import _get_cartesian_path
            if _get_cartesian_path.Metaclass_GetCartesianPath_Request._TYPE_SUPPORT is None:
                _get_cartesian_path.Metaclass_GetCartesianPath_Request.__import_type_support__()
            if _get_cartesian_path.Metaclass_GetCartesianPath_Response._TYPE_SUPPORT is None:
                _get_cartesian_path.Metaclass_GetCartesianPath_Response.__import_type_support__()
            if _get_cartesian_path.Metaclass_GetCartesianPath_Event._TYPE_SUPPORT is None:
                _get_cartesian_path.Metaclass_GetCartesianPath_Event.__import_type_support__()


class GetCartesianPath(metaclass=Metaclass_GetCartesianPath):
    from moveit_msgs.srv._get_cartesian_path import GetCartesianPath_Request as Request
    from moveit_msgs.srv._get_cartesian_path import GetCartesianPath_Response as Response
    from moveit_msgs.srv._get_cartesian_path import GetCartesianPath_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
