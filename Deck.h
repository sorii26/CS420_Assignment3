/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

Deck.h:
Implements the Deck class definition.
A Blackjack deck. Has extra functionality that Hand doesn't, such as shuffling and dealing.

*/
#ifndef DECK_H
#define DECK_H

#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand {
public:
    Deck();
    virtual ~Deck();

    void populate();
    void shuffle();
    bool deal(Hand& aHand);
    void additionalCards(GenericPlayer& aGenericPlayer);
};

#endif
