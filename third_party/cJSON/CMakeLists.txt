configure_file(CMakeLists.txt.in cJSON-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/cJSON-download )
if(result)
    message(FATAL_ERROR "CMake step for cJSON failed: ${result}")
endif()

execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/cJSON-download )
if(result)
    message(FATAL_ERROR "Build step for cJSON failed: ${result}")
endif()

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "${CMAKE_CURRENT_BINARY_DIR}/install" CACHE PATH "DESC" FORCE)
