cmake_minimum_required(VERSION 3.15)
project(OpsCheck C)

set(CMAKE_C_STANDARD 99)

add_executable(OpsCheck main.c main.h)

enable_testing()

add_test(NAME Runs COMMAND OpsCheck)
