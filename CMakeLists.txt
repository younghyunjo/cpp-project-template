cmake_minimum_required(VERSION 3.12)
project(cpp-project-template LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

include (compile_options)

include_directories(include)

# IMPORTANT:"third_party" must be first of subdirectory
add_subdirectory(third_party)

add_subdirectory(src)

