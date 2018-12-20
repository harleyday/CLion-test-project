cmake_minimum_required(VERSION 3.5.1)
project(cppTestProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(cppTestProject main.cpp Person.cpp Person.h)
