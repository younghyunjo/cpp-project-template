cmake_minimum_required(VERSION 3.12)

project(cpp-project-template LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

include (compile_options)

# IMPORTANT:"third_party" must be first of subdirectory
add_subdirectory(third_party)
add_subdirectory(src)

if (CMAKE_BUILD_TYPE MATCHES Debug)
    set(${PROJECT_NAME}_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
    include_directories(src)
    add_subdirectory(tests)
endif()
