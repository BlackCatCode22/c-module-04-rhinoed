cmake_minimum_required(VERSION 3.30)
project(zoo_animals_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(zoo_animals_project main.cpp
        Animal.cpp
        Animal.h
        Hyena.cpp
        Hyena.h
        Tiger.cpp
        Tiger.h
        Lion.cpp
        Lion.h
        Bear.cpp
        Bear.h
        Parser.h
        ZooManager.cpp
        ZooManager.h
)
