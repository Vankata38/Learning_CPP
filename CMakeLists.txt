cmake_minimum_required(VERSION 3.26)
project(Learning_CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(Learning_CPP/src)

add_executable(Learning_CPP
        Learning_CPP/src/If.cpp
        Learning_CPP/src/If.h
        Learning_CPP/src/Log.cpp
        Learning_CPP/src/Log.h
        Learning_CPP/src/Loops.cpp
        Learning_CPP/src/Loops.h
        Learning_CPP/src/Main.cpp
)
