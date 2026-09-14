cmake_minimum_required(VERSION 3.20)

project(gbc-emulator
    VERSION 0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(gbc-emulator
    src/main.cpp
    src/cpu/registers.cpp
)

target_include_directories(gbc-emulator
    PRIVATE
        include
)

add_executable(registers_test
    tests/registers_test.cpp
    src/cpu/registers.cpp
)

target_include_directories(registers_test
    PRIVATE
        include
)