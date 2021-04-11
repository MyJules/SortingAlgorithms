cmake_minimum_required(VERSION 3.0.0)
project(SortingAlgorithms VERSION 0.1.0)

include_directories(src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../srts/)

add_subdirectory(src)

add_executable(SortingAlgorithms main.cpp)

target_link_libraries(SortingAlgorithms ${CMAKE_CURRENT_SOURCE_DIR}/../srts/build/libsrts.a)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
