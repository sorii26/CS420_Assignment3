/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

Player.h:
Implements the Player class definition.
A human Blackjack player.

*/
#ifndef PLAYER_H
#define PLAYER_H
using namespace std;

#include "GenericPlayer.h"

class Player : public GenericPlayer {
public:
    Player(const string& name = "");
    virtual ~Player();

    virtual bool isHitting() const;

    void win() const;
    void lose() const;
    void push() const;
};

#endif
