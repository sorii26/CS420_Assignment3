/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

House.cpp:
Implements the House class methods.
The computer player, the house.

*/
#include "House.h"
#include <iostream>
using namespace std;
//Constructor: calls the base class constructor to intialize the member variable.
House::House(const string& name) : GenericPlayer(name) {
}

House::~House() {
}

//Function indicates whether the dealer wants to hit.
bool House::isHitting() const {
    if (getTotal() <= 16) {
        return true;
    } else {
        return false;
    }
}

//Function flips over the first card. A message will display if there are no cards to flip.
void House::flipFirstCard() {
    if (!cardVector.empty()) {
        cardVector[0]->flip();
    } else {
        std::cout << "No cards to flip." << endl;
    }
}
