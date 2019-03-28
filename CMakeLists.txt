cmake_minimum_required(VERSION 3.13)
project(StrategyGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(StrategyGame main.cpp Player.h Factory.h Unit.h Army.h Map.h)
