// InvisDeck.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include "Card.h"
#include "Deck.h"

int main()
{

    Card card(10 , DIAMONDS);

    std::cout << card.rawPrint() << std::endl;

    std::cout << card.toString();

    Deck deck;
    deck.print();

    std::cout << "\nRandom Card string: " << deck.randomCard() << std::endl;
    std::cout << "Random Card raw: " << deck.randomCard_raw() << std::endl;

    std::cout << "\nShuffled Deck:" << std::endl;
    deck.shuffle();


    /*
    
    *  std::cout << "Hello World!\n";
    int rCard;
    srand(time(NULL));
    //random number from 1 to five
    rCard = rand() % 52 + 1;
    std::cout << rCard << std::endl;
    */

     



}

