cmake_minimum_required(VERSION 2.8.9)
project (libacecom)
include_directories(include)
file(GLOB SOURCES "src/*.cpp" "src/exception/*.cpp")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11  -pedantic -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wmissing-declarations -Wmissing-include-dirs -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-conversion -Wsign-promo -Wstrict-overflow=5 -Wswitch-default -Wundef -Werror -Wno-unused")

add_library(libacecom SHARED ${SOURCES})
install(TARGETS libacecom DESTINATION /usr/local/lib)