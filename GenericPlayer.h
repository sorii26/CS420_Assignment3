/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

GenericPlayer.h:
Implements the GenericPlayer class definition.
A generic Blackjack player. Not a full player, but the common elements of a human player and the computer player. This is an abstract class.

*/
#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H
using namespace std;

#include <string>
#include "Hand.h"

class GenericPlayer : public Hand {
public:
    GenericPlayer(const string& name = "");
    virtual ~GenericPlayer();

    virtual bool isHitting() const = 0;

    bool isBusted() const;
    bool bust() const;

    string getName() const;
    void setName(const string& name);

    friend ostream& operator<<(ostream& os, const GenericPlayer& player);

private:
    string name;
};

#endif
