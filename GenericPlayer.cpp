/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

GenericPlayer.cpp:
Implements the GenericPlayer class methods.
A generic Blackjack player. Not a full player, but the common elements of a human player and the computer player. This is an abstract class.

*/
#include "GenericPlayer.h"
#include <iostream>
using namespace std;

//Constructor: Initialize the member variables using the member initializer in the constructor.
GenericPlayer::GenericPlayer(const string& name) : name(name) {
}

GenericPlayer::~GenericPlayer() {
}

//Function indicates whether the generic player is busted (>21).
bool GenericPlayer::isBusted() const {
    if (getTotal() > 21) {
        return true;
    } else {
        return false;
    }
}
//Function prints the name and displays that the player has busted.
bool GenericPlayer::bust() const {
    cout << name << " busts." << endl;
    return true;
}

string GenericPlayer::getName() const {
    return name;
}

void GenericPlayer::setName(const string& name) {
    this->name = name;
}

ostream& operator<<(ostream& os, const GenericPlayer& player) {
    os << player.name << ":\t";

    vector<Card*>::const_iterator iter;

    if (!player.cardVector.empty()) {
        for (iter = player.cardVector.begin(); iter != player.cardVector.end(); ++iter) {
            os << *(*iter) << "\t";
        }

        if (player.getTotal() != 0) {
            os << "(" << player.getTotal() << ")";
        }
    } else {
        os << "<empty>";
    }

    return os;
}
