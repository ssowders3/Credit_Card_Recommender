cmake_minimum_required(VERSION 3.9)
project(Project)

set(CMAKE_CXX_STANDARD 11)

add_executable(Project main.cpp Parser.cpp Parser.h Card.cpp Card.h)