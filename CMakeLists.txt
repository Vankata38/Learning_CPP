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
        Learning_CPP/src/Pointers.cpp
        Learning_CPP/src/References.cpp
        Learning_CPP/src/Classes.cpp
        Learning_CPP/src/Classes2.cpp
        Learning_CPP/src/Constructors.cpp
        Learning_CPP/src/Inheritance.cpp
        Learning_CPP/src/VFuncs.cpp
)
