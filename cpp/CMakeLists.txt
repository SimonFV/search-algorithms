cmake_minimum_required(VERSION 3.8)

project(TE_2)

set(CMAKE_CXX_STANDARD_REQUIRED 14)

set(source
    main.cpp
)
include_directories(/home/simon/Cpp/search_algorithms/include)

add_executable(exe ${source})