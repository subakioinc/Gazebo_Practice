cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_executable(stop stop.cpp)
target_link_libraries(stop ${GAZEBO_LIBRARIES})

add_library(move_box SHARED move_box.cpp)
target_link_libraries(move_box ${GAZEBO_LIBRARIES})

