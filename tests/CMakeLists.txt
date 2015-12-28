cmake_minimum_required(VERSION 2.8.9)
project (Testing)
set( PROJECT_LINK_LIBS libacecom.dylib libUnitTest++.a)
#set( PROJECT_LINK_LIBS )
include_directories(../include)

add_executable(test src/main.cpp)
target_link_libraries(test ${PROJECT_LINK_LIBS} )