cmake_minimum_required(VERSION 3.8)
project(ur5_description_controller)

find_package(ament_cmake REQUIRED)

install(
  DIRECTORY launch config urdf rviz meshes
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
