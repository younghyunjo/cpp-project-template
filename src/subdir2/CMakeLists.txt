find_package(cJSON REQUIRED)
find_package(CURL REQUIRED)

add_library(foo OBJECT foo.cc)
set_target_properties(foo PROPERTIES POSITION_INDEPENDENT_CODE ON)
target_include_directories(foo
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
        PRIVATE ${CJSON_INCLUDE_DIR}
        PRIVATE ${CURL_INCLUDE_DIR})
target_link_libraries(foo PUBLIC ${CJSON_LIBRARIES} CURL::libcurl)
