cmake_minimum_required(VERSION 2.8.7)
project (Testing)
set( PROJECT_LINK_LIBS libacecom.dylib libUnitTest++.a)
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set( PROJECT_LINK_LIBS )
include_directories(../include)

add_executable(libacetesting src/main.cpp)
target_link_libraries(libacetesting ${PROJECT_LINK_LIBS} )