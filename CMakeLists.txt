cmake_minimum_required(VERSION 4.0)
project(Task3)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(Task3 main.cpp
        src/Window.cpp
        src/Screen.cpp
       )
