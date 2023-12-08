cmake_minimum_required(VERSION 3.27)
project(Lexer)

set(CMAKE_CXX_STANDARD 23)

add_executable(Lexer sourceFiles/main.cpp
        sourceFiles/LexGraph.cpp
        headerFiles/LexGraph.h
        sourceFiles/Lexer.cpp
        headerFiles/Lexer.h
)
