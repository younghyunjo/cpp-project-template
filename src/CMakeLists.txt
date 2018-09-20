
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(bar)
add_subdirectory(foo)

add_library(dummy SHARED foo bar)
set_target_properties(dummy PROPERTIES LINKER_LANGUAGE CXX)


