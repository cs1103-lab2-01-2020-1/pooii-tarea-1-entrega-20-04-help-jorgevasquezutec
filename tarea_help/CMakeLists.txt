cmake_minimum_required(VERSION 3.14)
project(tarea_help)
#set(CMAKE_CXX_STANDARD 14)
file(GLOB SOURCE
        "src/*"
        "template/*"
        )

add_executable(tarea_help ${SOURCE})