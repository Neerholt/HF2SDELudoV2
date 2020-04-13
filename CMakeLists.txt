cmake_minimum_required(VERSION 3.15)
project(LudoV2)

set(CMAKE_CXX_STANDARD 20)

add_executable(LudoV2 main.cpp PlayerData.cpp PlayerData.h Dice.cpp Dice.h Pawn.cpp Pawn.h AI.cpp AI.h)