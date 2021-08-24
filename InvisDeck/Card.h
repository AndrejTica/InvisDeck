
#pragma once
#include "string"
#include <iostream>
#include <stdlib.h>

#define SPADES 1
#define CLUBS 2
#define HEARTS 3
#define DIAMONDS 4

class Card {

private:

	unsigned int _suit;
	unsigned int _value;
	unsigned int _card;

public:

	Card(int s, int v);
	Card();
	std::string toString();
	int rawPrint();


};