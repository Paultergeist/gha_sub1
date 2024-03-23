cmake_minimum_required(VERSION 3.15)
project(testlib CXX)




add_library(testlib src/testlib.cpp)
target_include_directories(testlib PUBLIC include)



set_target_properties(testlib PROPERTIES PUBLIC_HEADER "include/testlib.h")
install(TARGETS testlib)
