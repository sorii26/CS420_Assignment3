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
    cout << getName() << ", do you want a hit? (Y/N): ";
    char response;
    cin >> response;
    return (response == 'y' || response == 'Y');
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
