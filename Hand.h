#ifndef HAND_H
#define HAND_H
#include <vector>
#include "Card.h"
using namespace std;

class Hand {
public:
    Hand();
    virtual ~Hand();
    void add(Card* cardPtr);
    void clearHand();
    int getTotal() const;

protected:
    vector<Card*> cardVector;
};

#endif
