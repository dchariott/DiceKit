cmake_minimum_required(VERSION 3.12)
project(dice_kit)

set(CMAKE_CXX_STANDARD 11)

add_executable(dice_kit main.cpp dice.cpp dice.h)