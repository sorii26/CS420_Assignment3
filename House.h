#ifndef HOUSE_H
#define HOUSE_H
using namespace std;

#include "GenericPlayer.h"

class House : public GenericPlayer {
public:
    House(const string& name = "Dealer");
    virtual ~House();

    virtual bool isHitting() const;

    void flipFirstCard();
};

#endif
