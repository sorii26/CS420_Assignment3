#include "Game.h"
#include <iostream>
using namespace std;

/*Constructor:
* Call the setName function for player object and pass it the name.
* Call function populate() using the deck object.
* Call function shuffle() using the deck object
*/
Game::Game(const string& name) {
    player.setName(name);
    deck.populate();
    deck.shuffle();
}

Game::~Game() {
}

//Function deals initial cards to each player.
void Game::play() {
    for (int i = 0; i < 2; ++i) {
        deck.deal(player);
        deck.deal(house);
    }

    house.flipFirstCard();

    cout << player << endl;
    cout << house << endl;

    deck.additionalCards(player);

    house.flipFirstCard();

    cout << house << endl;

    deck.additionalCards(house);

    if (house.isBusted()) {
        if (!player.isBusted()) {
            player.win();
        }
    } else {
        if (!player.isBusted()) {
            int playerTotal = player.getTotal();
            int houseTotal = house.getTotal();

            if (playerTotal > houseTotal) {
                player.win();
            } else if (playerTotal < houseTotal) {
                player.lose();
            } else {
                player.push();
            }
        }
    }

    player.clearHand();
    house.clearHand();
}
