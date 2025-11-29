cmake_minimum_required(VERSION 3.30)
project(CS_420_Assignment3)

set(CMAKE_CXX_STANDARD 20)

add_executable(CS_420_Assignment3 main.cpp
        Card.cpp
        Card.h
        Deck.cpp
        Deck.h
        Game.cpp
        Game.h
        GenericPlayer.cpp
        GenericPlayer.h
        Hand.cpp
        Hand.h
        House.cpp
        House.h
        Player.cpp
        Player.h)
