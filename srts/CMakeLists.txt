cmake_minimum_required(VERSION 3.16)
project(srts VERSION 0.1.0)

include(CTest)
enable_testing()
include_directories(src)

add_subdirectory(src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
