/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

House.h:
Implements the House class definition.
The computer player, the house.

*/
#ifndef HOUSE_H
#define HOUSE_H
using namespace std;

#include "GenericPlayer.h"

class House : public GenericPlayer {
public:
    House(const string& name = "Dealer");
    virtual ~House();

    virtual bool isHitting() const;

    void flipFirstCard();
};

#endif
