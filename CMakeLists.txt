cmake_minimum_required(VERSION 3.10)
project(LMS)

# Set the source directory
set(CMAKE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# Add the source files
add_executable(LMS 
    main.cpp
    src/Brrower.cpp
)

# Include necessary headers
include_directories(headers)