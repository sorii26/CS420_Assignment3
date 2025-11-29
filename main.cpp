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
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> again;
        cin.ignore();
    }

    cout << "\nThanks for playing!" << endl;

    return 0;
}