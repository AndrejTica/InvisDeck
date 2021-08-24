#pragma once
#include <string>
#include <iostream>
#include "Card.h"
#include <vector>

class Deck {

private:
     
    std::vector<Card> cards;

public:

    Deck();
    void shuffle();
    void print();
    void newOrder();
    std::string randomCard();
    

};