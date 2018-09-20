find_package(cJSON REQUIRED)
find_package(curl REQUIRED)

add_library(foo foo.cc)
include_directories(foo)
target_link_libraries(foo ${CJSON_LIBRARIES} CURL::libcurl)
target_include_directories(foo
        PUBLIC ${CJSON_INCLUDE_DIR}
        PUBLIC ${CURL_INCLUDE_DIR})

