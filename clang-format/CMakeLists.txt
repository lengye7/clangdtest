cmake_minimum_required(VERSION 3.28)


set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)  
set(CMAKE_CXX_EXTENSIONS OFF)

project(clangdtest VERSION 0.1 LANGUAGES CXX)

include_directories(src)

add_executable(main)

target_sources(main
    PUBLIC
    src/main.cpp
    src/hello.cpp
)