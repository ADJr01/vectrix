cmake_minimum_required(VERSION 3.31)
project(vectrix)

set(CMAKE_CXX_STANDARD 17)

add_executable(vectrix main.cpp
        vectrix/vec2.cpp
        vectrix/vec2.h
        vectrix/vex3.cpp
        vectrix/vex3.h
        vectrix/vec4.cpp
        vectrix/vec4.h
        vectrix/vectrix.cpp
        vectrix/vectrix.h
)
