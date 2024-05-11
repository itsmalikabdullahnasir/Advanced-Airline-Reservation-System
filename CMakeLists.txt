cmake_minimum_required(VERSION 3.28)
project(CLION_VERSION)

set(CMAKE_CXX_STANDARD 14)

add_executable(CLION_VERSION
        main.cpp
        Credential.h
        staff.h
        inventory.h
        Report.h)
