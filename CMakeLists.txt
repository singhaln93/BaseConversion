CMAKE_MINIMUM_REQUIRED_VERSION(3.16.3)
project(BaseConversion)

set(CMAKE_CXX_STANDARD 17)

include_directories(Project/src)

add_subdirectory(Project/src)
add_subdirectory(Project-Unit-Test/src)
add_subdirectory(Project-Unit-Test/dep/googletest)
