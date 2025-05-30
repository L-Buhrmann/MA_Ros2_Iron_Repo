# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ur5_camera_moveit_config2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ur5_camera_moveit_config2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ur5_camera_moveit_config2_FOUND FALSE)
  elseif(NOT ur5_camera_moveit_config2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ur5_camera_moveit_config2_FOUND FALSE)
  endif()
  return()
endif()
set(_ur5_camera_moveit_config2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ur5_camera_moveit_config2_FIND_QUIETLY)
  message(STATUS "Found ur5_camera_moveit_config2: 0.3.0 (${ur5_camera_moveit_config2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ur5_camera_moveit_config2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ur5_camera_moveit_config2_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ur5_camera_moveit_config2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ur5_camera_moveit_config2_DIR}/${_extra}")
endforeach()
