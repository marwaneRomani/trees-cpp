cmake_minimum_required(VERSION 3.27)
project(treesCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(treesCpp main.cpp
        Node.cpp
        Node.h
        Tree.cpp
        Tree.h)
