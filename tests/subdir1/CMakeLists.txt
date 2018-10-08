add_executable(test_bar test_bar.cc ${${PROJECT_NAME}_SOURCE_DIR}/subdir1/bar.cc)
target_include_directories(test_bar PRIVATE ${${PROJECT_NAME}_SOURCE_DIR}/subdir1)
target_link_libraries(test_bar gtest gtest_main foo)
add_test(${PROJECT_NAME}-tests test_bar)
