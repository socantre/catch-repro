cmake_minimum_required(VERSION 3.1)
project(catch_test CXX)

add_compile_options(/analyze /Wall /WX /wd4820 /wd4625 /wd4626 /wd4514 /wd4350 /wd4571 /wd4710 /wd4371 /wd4711)
add_definitions(-DNTDDI_WIN7SP1=0x06010100 -DCATCH_CONFIG_SFINAE -DCATCH_CONFIG_CPP11_NULLPTR)

add_executable(catch_test test.cpp catch.hpp)

