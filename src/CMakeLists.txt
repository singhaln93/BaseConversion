cmake_minimum_required(VERSION 3.16.3)
project(src)

#add_library(baseConversion baseConversion.cpp)

#include_directories(${PROJECT_SOURCE_DIR} /src)
add_executable(Project main.cpp)
target_link_libraries(Project lib)
