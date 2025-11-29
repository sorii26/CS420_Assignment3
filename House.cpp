#include "House.h"
#include <iostream>
using namespace std;
//Constructor: calls the base class constructor to intialize the member variable.
House::House(const string& name) : GenericPlayer(name) {
}

House::~House() {
}

//Function indicates whether the dealer wants to hit.
bool House::isHitting() const {
    if (getTotal() <= 16) {
        return true;
    } else {
        return false;
    }
}

//Function flips over the first card. A message will display if there are no cards to flip.
void House::flipFirstCard() {
    if (!cardVector.empty()) {
        cardVector[0]->flip();
    } else {
        std::cout << "No cards to flip." << endl;
    }
}
