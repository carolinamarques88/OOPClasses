cmake_minimum_required(VERSION 3.29)
project(TP)

set(CMAKE_CXX_STANDARD 20)

add_executable(TP main.cpp
        Caravana.cpp
        headers/Caravana.h
        Item.cpp
        headers/Item.h
        Buffer.cpp
        headers/Buffer.h
        Cidade.cpp
        headers/Cidade.h
        Mercadoria.cpp
        headers/Mercadoria.h
        Tempestade.cpp
        headers/Tempestade.h
        configs.cpp
        headers/configs.h
        headers/structs.h)
