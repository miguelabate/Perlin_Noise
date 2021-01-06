cmake_minimum_required(VERSION 3.17)
project(Perlin_Noise)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Perlin_Noise
        PerlinDemoConsole.cpp
        PerlinNoise.cpp
        PerlinNoise.h
        ppm.cpp
        ppm.h)
