#include <iostream>

#include "cjson/cJSON.h"
#include "curl/curl.h"


int cjson_test() {
    std::cout << "Curl version:";
    std::cout << cJSON_Version() <<std::endl;
}

void curl_test() {
    std::cout << "Curl version:";
    std::cout << curl_version() << std::endl;
}

int foo(bool a) {
    if (a)
        return 1;
    else
        return 0;
}
