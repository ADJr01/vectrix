cmake_minimum_required(VERSION 3.31)
project(vectrix)

set(CMAKE_CXX_STANDARD 20)

add_executable(vectrix main.cpp
        vectrix/vector/vec2.cpp
        vectrix/vector/vec2.h
        vectrix/vector/vex3.cpp
        vectrix/vector/vex3.h
        vectrix/vector/vec4.cpp
        vectrix/vector/vec4.h
        vectrix/matrix/mat2x2.cpp
        vectrix/matrix/mat2x2.h
        vectrix/matrix/mat3x2.cpp
        vectrix/matrix/mat3x2.h
        vectrix/matrix/mat2x3.cpp
        vectrix/matrix/mat2x3.h
        vectrix/matrix/mat2x4.cpp
        vectrix/matrix/mat2x4.h
        vectrix/matrix/MatrixPartition.cpp
        vectrix/matrix/MatrixPartition.h
)
