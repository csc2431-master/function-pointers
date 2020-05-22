cmake_minimum_required(VERSION 3.10)
project(function_pointers)

set(CMAKE_CXX_STANDARD 14)

add_executable(function_pointers
        main.cpp
        fsarray.h fsarray.cpp
        integer.h integer.cpp
        linkedlist.cpp linkedlist.h
        list.h list.cpp
        object.cpp object.h
        person.cpp person.h)