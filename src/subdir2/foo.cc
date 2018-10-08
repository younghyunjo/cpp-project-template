#include <iostream>

#include "cjson/cJSON.h"
#include "curl/curl.h"

#include "foo.h"

void cjson_test() {
    std::cout << "Curl version:";
    std::cout << cJSON_Version() <<std::endl;
}

void curl_test() {
    std::cout << "Curl version:";
    std::cout << curl_version() << std::endl;
}

int foo(int a) {
    cjson_test();
    curl_test();

    return a;
}