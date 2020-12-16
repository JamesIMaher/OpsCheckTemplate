cmake_minimum_required(VERSION 3.15)
project(OpsCheck C)

set(CMAKE_C_STANDARD 99)

add_executable(OpsCheck HelloWorld.c HelloWorld.h)
add_executable(TestOpsCheck testOpsCheck.c HelloWorld.h HelloWorld.c)

enable_testing()

add_test(NAME Runs COMMAND TestOpsCheck)
