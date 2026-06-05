cmake_minimum_required(VERSION 4.1)
project(1_docs)

set(CMAKE_CXX_STANDARD 20)

add_executable(1_docs main.cpp
        src/sum.cpp
        src/sum.h
        src/full.cpp
        src/full.h)

target_include_directories(1_docs PRIVATE ${CMAKE_SOURCE_DIR}/src)