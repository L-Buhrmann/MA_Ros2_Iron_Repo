# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_robotiq_hardware_tests_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED robotiq_hardware_tests_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(robotiq_hardware_tests_FOUND FALSE)
  elseif(NOT robotiq_hardware_tests_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(robotiq_hardware_tests_FOUND FALSE)
  endif()
  return()
endif()
set(_robotiq_hardware_tests_CONFIG_INCLUDED TRUE)

# output package information
if(NOT robotiq_hardware_tests_FIND_QUIETLY)
  message(STATUS "Found robotiq_hardware_tests: 0.0.1 (${robotiq_hardware_tests_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'robotiq_hardware_tests' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT robotiq_hardware_tests_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(robotiq_hardware_tests_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${robotiq_hardware_tests_DIR}/${_extra}")
endforeach()
