cmake_minimum_required(VERSION 3.8)
project(ur3_description_controller)

find_package(ament_cmake REQUIRED)

install(
  DIRECTORY launch config urdf
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
