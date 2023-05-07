cmake_minimum_required(VERSION 3.23)
set(this example)
project(${this} C CXX)

enable_testing()

add_subdirectory(googletest)

set (Headers
    example.hpp
)

set (Sources
    example.cc
)

add_library(${this} STATIC ${Sources} ${Headers})

add_subdirectory(test)