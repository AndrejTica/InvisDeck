#include "Deck.h"

Deck::Deck() {

	int i = 1;
	
	while (i<14)
	{
		Card card(i, HEARTS);
		cards.push_back(card);
		i++;
	}
		
	i = 1;
	
	while (i < 14)
	{
		Card card(i, SPADES);
		cards.push_back(card);
		i++;
	}

	i = 1;

	while (i < 14)
	{
		Card card(i, DIAMONDS);
		cards.push_back(card);
		i++;
	}

	i = 1;

	while (i < 14)
	{
		Card card(i, CLUBS);
		cards.push_back(card);
		i++;
	}

}

void Deck::print(){

	std::cout << "\n The Deck: \n";
	int x = 0;
	for (std::vector<Card>::iterator it = cards.begin(); it != cards.end(); ++it) {
		
		std::cout << it->toString();
		x++;
		if (x==13 || x==13*2 || x==13*3)
		{
			std::cout << "\n";
		}
	}

}

std::string Deck::randomCard() {

	srand(time(NULL));
	int random = rand() % cards.size();
	return cards[random].toString();

}

int Deck::randomCard_raw() {

	srand(time(NULL));
	int random = rand() % cards.size();
	return cards[random].rawPrint();

}

void Deck::shuffle() {

	std::random_device rd;
	std::mt19937 g(rd());

	std::shuffle(cards.begin(), cards.end(), g);

	this->print();
}

void Deck::invisDeck() {

	int card = this->randomCard_raw();
	int v = card / 10;
	int s = card % 10;
	int xv;
	int xs;

	std::cout << "The chosen card is: "<< this->randomCard();

	std::cout << "\nWhat card do we need to search for?";
	std::cin >> xv;
	//std::cout << "\nWhat card do we need to search for?";
	//std::cin >> xs;


	if (v+xv==13)
	{
		std::cout << "Niceu" << std::endl;
	}

	

}









