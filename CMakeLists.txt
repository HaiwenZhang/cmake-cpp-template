cmake_minimum_required(VERSION 3.10)

# set the project name
project(demo)

add_definitions(-std=c++14)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

add_subdirectory(./mylib)

add_subdirectory(./src)
