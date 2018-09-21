include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(subdir1)
add_subdirectory(subdir2)

#sources from topdir
set(sources main_entry.cc)

# the target names from subdirs
set(subdir_targets bar foo)

add_library(${PROJECT_NAME} SHARED ${sources})
target_link_libraries(${PROJECT_NAME} PRIVATE ${subdir_targets})
install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib)

add_library(${PROJECT_NAME}-static STATIC ${sources})
set_target_properties(${PROJECT_NAME}-static PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} PRIVATE ${subdir_targets})
install(TARGETS ${PROJECT_NAME}-static ARCHIVE DESTINATION lib)