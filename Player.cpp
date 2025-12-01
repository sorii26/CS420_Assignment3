/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

Player.cpp:
Implements the Player class methods.
A human Blackjack player.

*/
#include "Player.h"
#include <iostream>
using namespace std;

//Constructor: calls the base class constructor to initialize the member variable.
Player::Player(const string& name) : GenericPlayer(name) {
}

Player::~Player() {
}

//Function indicates whether the player wants to hit.
bool Player::isHitting() const {
    while (true) {
        cout << getName() << ", do you want a hit? (Y/N): ";

        string input;
        cin >> input;

        if (input.size() == 1 &&
            (input[0] == 'y' || input[0] == 'Y' ||
             input[0] == 'n' || input[0] == 'N')) 
        {
            return (input[0] == 'y' || input[0] == 'Y');
        }

        cout << "Invalid input. Please enter only Y or N.\n";
    }
}

//Function: prints the name and displays that the player has won.
void Player::win() const {
    cout << getName() << " wins." << endl;
}

//Function prints the name and displays that the player has pushed.
void Player::lose() const {
    cout << getName() << " loses." << endl;
}

//Function prints the name and displays that the player has pushed.
void Player::push() const {
    cout << getName() << " pushes." << endl;
}
