cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest)
include_directories(googletest/googletest/include)
include_directories(googletest/googlemock/include)

add_executable(StrategyGame main.cpp Player.h Factory.h Unit.h Army.h)
target_link_libraries(StrategyGame gtest gtest_main)
