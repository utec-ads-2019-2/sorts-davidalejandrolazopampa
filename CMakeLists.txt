cmake_minimum_required(VERSION 3.14)
project(POO3)

set(CMAKE_CXX_STANDARD 14)

add_executable(PPO3 main.cpp mocker.cpp mocker.h
        tester.cpp tester.h
        counting.h insert.h merge.h quick.h radix.h select.h shell.h sort.h bubble.h)