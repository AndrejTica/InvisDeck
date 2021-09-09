
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

	int _suit;
	int _value;
	int _card;

public:

	Card(int s, int v);
	Card();
	std::string toString();
	int rawPrint();
	int getValue();
	int stringToRaw(std::string s);


};