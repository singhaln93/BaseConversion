cmake_minimum_required(VERSION 3.16.3)
project(Project)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(src)
add_subdirectory(lib)

target_include_directories(${PROJECT_NAME} 
PUBLIC src
PUBLIC lib
)

target_link_directories(${PROJECT_NAME} 
PRIVATE src
PRIVATE lib
)

target_link_libraries(${PROJECT_NAME} src lib)
