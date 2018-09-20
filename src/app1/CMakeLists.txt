find_package(cJSON REQUIRED)
find_package(RapidJSON REQUIRED)

add_executable(app1 main.cpp)
target_link_libraries(app1 ${CJSON_LIBRARIES})
target_include_directories(app1 PUBLIC ${CJSON_INCLUDE_DIR}
                                PUBLIC ${RapidJSON_INCLUDE_DIR})
