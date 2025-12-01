/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

Deck.cpp:
Implements the Deck class methods.
A Blackjack deck. Has extra functionality that Hand doesn't, such as shuffling and dealing.
*/

#include "Deck.h"
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>


using namespace std;

//Constructor: calls the function cardVector.reserve(52) & the function populate().
Deck::Deck() {
    cardVector.reserve(52);
    populate();
}

Deck::~Deck() {
}

//Function creates standard deck of 52 cards.
void Deck::populate() {
    clearHand();

    for (int s = Card::CLUBS; s <= Card::SPADES; ++s) {
        for (int r = Card::ACE; r <= Card::KING; ++r) {
            add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)));
        }
    }
}

//Function shuffles the cards.
void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cardVector.begin(), cardVector.end(), g);
}


//Function d4eals one card to a hand. A hand is any player.
bool Deck::deal(Hand& aHand) {
    if (!cardVector.empty()) {              
        aHand.add(cardVector.back());
        cardVector.pop_back();
        return true;                        
    } else {
        cout << "Out of cards. Unable to deal." << endl;
        return false;                       
    }
}

//Function gives additional cards to any player for as long as that player can and wants to hit.
void Deck::additionalCards(GenericPlayer& aGenericPlayer) {
    while (!aGenericPlayer.isBusted() && aGenericPlayer.isHitting()) {
        if (!deal(aGenericPlayer)) {
            break;
        }
        cout << aGenericPlayer << endl;

        if (aGenericPlayer.isBusted()) {
            aGenericPlayer.bust();
        }
    }
}
