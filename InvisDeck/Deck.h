#pragma once
#include <string>
#include <iostream>
#include "Card.h"
#include <vector>
#include <algorithm>
#include <random>

class Deck {

private:
     
    std::vector<Card> cards;

public:

    Deck();
    void shuffle();
    void print();
    std::string randomCard();
    int randomCard_raw();

    void invisDeck();
    

};