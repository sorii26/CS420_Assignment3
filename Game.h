/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

Game.h:
Implements the Game class definition.
A Blackjack game.

*/
#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"
#include "House.h"

class Game {
public:
    Game(const std::string& name);
    ~Game();

    void play();

private:
    Deck deck;
    House house;
    Player player;
};

#endif
