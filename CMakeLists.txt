cmake_minimum_required(VERSION 3.23)
project(Lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab2 main.cpp getBoard.h getBoard.cpp movePlayer.h movePlayer.cpp moveObstacles.cpp moveObstacles.h)
