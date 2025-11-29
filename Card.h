#ifndef CARD_H
#define CARD_H
using namespace std;

#include <iostream>

class Card {
public:
    enum RANK { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
    enum SUIT { CLUBS, DIAMONDS, HEARTS, SPADES };

    Card(RANK rank = ACE, SUIT suit = SPADES, bool isUp = true);

    int getValue() const;
    void flip();

    friend ostream& operator<<(ostream & os, const Card& card);

protected:
    RANK rank;
    SUIT suit;

private:
    bool isFaceUp;
};

#endif
