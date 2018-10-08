add_library(bar OBJECT bar.cc)
set_target_properties(bar PROPERTIES POSITION_INDEPENDENT_CODE True)
target_link_libraries(bar PUBLIC foo)