#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_ros_trajectory_cache::moveit_ros_trajectory_cache_lib" for configuration "Release"
set_property(TARGET moveit_ros_trajectory_cache::moveit_ros_trajectory_cache_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_ros_trajectory_cache::moveit_ros_trajectory_cache_lib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_ros_trajectory_cache_lib.so"
  IMPORTED_SONAME_RELEASE "libmoveit_ros_trajectory_cache_lib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_ros_trajectory_cache::moveit_ros_trajectory_cache_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_ros_trajectory_cache::moveit_ros_trajectory_cache_lib "${_IMPORT_PREFIX}/lib/libmoveit_ros_trajectory_cache_lib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
