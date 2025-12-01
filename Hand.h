/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

Hand.h:
Implements the Hand class definition.
A blackjack hand. A collection of Card objects.
*/
#ifndef HAND_H
#define HAND_H
#include <vector>
#include "Card.h"
using namespace std;

class Hand {
public:
    Hand();
    virtual ~Hand();
    void add(Card* cardPtr);
    void clearHand();
    int getTotal() const;

protected:
    vector<Card*> cardVector;
};

#endif
