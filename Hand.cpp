#include "Hand.h"
using namespace std;

//Constructor: Calls the reserve() on CardVector and pass a value of 7
Hand::Hand() {
    cardVector.reserve(7);
}
//Destructor: Calls the function clearHand()
Hand::~Hand() {
    clearHand();
}

//Function adds a card to the hand and calls push_back() on the cardVector and pass the cardPtr as its argument
void Hand::add(Card* cardPtr) {
    cardVector.push_back(cardPtr);
}

/*Function clears all cards from the hand:
* Declares an iterator of the type vector<Card*>
* Uses the iterator delete each *iter [name of the iterator]
* Sets the *iter to NULL -- Good practice
* Calls function clear() on cardVector
*/
void Hand::clearHand() {
    vector<Card*>::iterator iter = cardVector.begin();
    for (iter = cardVector.begin(); iter != cardVector.end(); ++iter) {
        delete *iter;
        *iter = NULL;
    }
    cardVector.clear();
}

// Function returns the total value of the hand.
int Hand::getTotal() const {
    if (cardVector.empty()) {
        return 0;
    }

    if (cardVector[0]->getValue() == 0) {
        return 0;
    }

    int total = 0;
    vector<Card*>::const_iterator iter;
    for (iter = cardVector.begin(); iter != cardVector.end(); ++iter) {
        total += (*iter)->getValue();
    }

    for (iter = cardVector.begin(); iter != cardVector.end(); ++iter) {
        if ((*iter)->getValue() == 1) {
            if (total <= 11) {
                total += 10;
                return total;
            }
        }
    }

    return total;
}
