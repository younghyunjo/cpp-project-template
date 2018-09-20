include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(bar)
add_subdirectory(foo)

set(${PROJECT_NAME}-targets foo bar)

message(${PROJECT_NAME})
message(${PROJECT_NAME}-targets)
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}-targets})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

add_library(${PROJECT_NAME}-static STATIC ${${PROJECT_NAME}-targets})
set_target_properties(${PROJECT_NAME}-static PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(${PROJECT_NAME}-static PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
