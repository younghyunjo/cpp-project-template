find_package(cJSON REQUIRED)
find_package(curl REQUIRED)


add_executable(app1 main.cpp)
target_link_libraries(app1 ${CJSON_LIBRARIES} CURL::libcurl)
target_include_directories(app1 PUBLIC ${CJSON_INCLUDE_DIR}
                                PUBLIC ${CURL_INCLUDE_DIR})
