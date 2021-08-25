#include "Card.h"

Card::Card(int v, int s) : _value(v), _suit(s) {

    if (v>13 || s>4)
    {
        exit(EXIT_FAILURE);
    }

    int pow = 10;
    while (s >= pow)
        pow *= 10;
    _card = v * pow + s;

}

int Card::rawPrint() {

    return _card;
}

int Card::getValue(){
    
    return _value;
}

std::string Card::toString() {

    std::string suit;
    std::string value;

    int iValue1;
    int iValue2;

    //seperate the value from the concat number

    int iValue;
    //if value is higher than 10, we need to take two digits cuz dunno how to parse first two digits at the same time
    if (_value>9)
    {
    
    iValue1 = _card / 10 % 10;
    iValue2 = _card / 100 % 10;
    //concat the two digits into one
    int pow = 10;
    while (iValue1 >= pow)
        pow *= 10;
    iValue = iValue2 * pow + iValue1;
     
    }

    if (_value<10)
    {
        iValue = _card / 10 % 10;
    }
    
    //seperate the suit from the concat number

    int tSuit;
    tSuit = _card % 10;
    
    //assign the suit int coresponding to the string 

    switch (tSuit)
    {
    case 1:
        suit = 'S';
        break;
    case 2:
        suit = 'C';
        break;
    case 3:
        suit = 'H';
        break;
    case 4:
        suit = 'D';
        break;
    }

    //now the value int coresponding to the string 
    
    switch (iValue)
    {
    case 10:
        value = "10";
        break;
    case 11:
        value = 'J';
        break;
    case 12:
        value = 'Q';
        break;
    case 13:
        value = 'K';
        break;
    case 1:
        value = 'A';
        break;
    case 2:
        value = '2';
        break;
    case 3:
        value = '3';
        break;
    case 4:
        value = '4';
        break;
    case 5:
        value = '5';
        break;
    case 6:
        value = '6';
        break;
    case 7:
        value = '7';
        break;
    case 8:
        value = '8';
        break;
    case 9:
        value = '9';
        break;
    }

    std::string ret = value + suit + " ";

    return ret;

}
