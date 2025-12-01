#include "Card.h"
using namespace std;

/*Constructor: initializes the member variables using the member initializer list in the constructor. The body
of the constructor remains empty.*/
Card::Card(RANK rank, SUIT suit, bool isUp) : rank(rank), suit(suit), isFaceUp(isUp) {
}

//Return the value of the card if the card is facing up. Otherwise return 0.*/
int Card::getValue() const {
    if (!isFaceUp) {
        return 0;
    }

    if (rank >= 10) {
        return 10;
    }
    
    return rank;
}

//Function flips a card. Face up becomes face down, and face down becomes face up.*/
void Card::flip() {
    isFaceUp = !isFaceUp;
}

ostream& operator<<(ostream& os, const Card& card) {
    const string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    const string SUITS[] = {"C", "D", "H", "S"};

    if (card.isFaceUp) {
        os << RANKS[card.rank] << SUITS[card.suit];
    } else {
        os << "XX";
    }

    return os;
}
