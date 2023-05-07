cmake_minimum_required(VERSION 3.23)

set(this example_tests)

set (Sources 
    example_tests.cc
)

add_executable(${this} ${Sources})

target_link_libraries(${this} PUBLIC
    gtest_main
    example
)

add_test(
    NAME ${this}
    COMMAND ${this}
)

# Configure the cmake, build all projects (F7), run >CMake: Run Tests