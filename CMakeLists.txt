cmake_minimum_required(VERSION 3.6)
project(at_home)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        w4_at_home.cpp
        Passenger.cpp
        Passenger.h)

add_executable(at_home ${SOURCE_FILES})