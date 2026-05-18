cmake_minimum_required(VERSION 4.1)
project(AlgGen)

set(CMAKE_CXX_STANDARD 20)

add_executable(AlgGen main.cpp
        TParam.cpp
        TParam.h
        TCandidate.h
        TCandidate.cpp
        TPopulation.h
        TPopulation.cpp
        TKlasa.cpp
        TKlasa.h)
