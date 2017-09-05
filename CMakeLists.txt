cmake_minimum_required(VERSION 3.0)

# Enable C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_library(lib SHARED lib.cpp)
add_executable(main main.cpp)
target_link_libraries(main lib)