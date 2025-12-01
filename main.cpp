/*
Author: Andrei Magno, Isabella Soriano
CS 420
Assignment 3
December 1, 2025

main.cpp:
Runs the Blackjack program.

*/
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

int main() {
    cout << "Welcome to Blackjack!" << endl;

    char again = 'y';
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    Game game(name);

while (again == 'y' || again == 'Y') {
    game.play();

    while (true) {
        cout << "\nDo you want to play again? (Y/N): ";

        string input;
        cin >> input;

        // Must be exactly 1 character AND it must be Y/y/N/n
        if (input.length() == 1 &&
            (input[0] == 'y' || input[0] == 'Y' ||
             input[0] == 'n' || input[0] == 'N')) 
        {
            again = input[0];   // store the valid character
            break;              // exit the loop
        }

        cout << "Invalid input. Please enter only Y or N.\n";
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
    cout << "\nThanks for playing!" << endl;

    return 0;
}