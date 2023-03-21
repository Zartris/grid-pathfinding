cmake_minimum_required(VERSION 3.16)
project(graph CXX)

add_subdirectory(./graph)
# format
add_custom_target(clang-format
        COMMAND clang-format -i
        ../graph/include/*.hpp
        ../graph/src/*.cpp)
