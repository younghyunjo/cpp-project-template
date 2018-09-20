cmake_minimum_required(VERSION 3.12)
project(cpp-project-template LANGUAGES CXX)

include_directories(include)

# IMPORTANT. Must be first of subdirectory
add_subdirectory(third_party)

add_subdirectory(src)

