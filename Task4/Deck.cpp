#include "Deck.h"



Deck::Deck()
{
	for (int i = 1; i < 56; i++) {
		deck[i - 1] = Card(i);
	}
}


Deck::~Deck()
{
}

void Deck::print() {
	for (int i = 0; i < 55; i++) {
		deck[i].print();
	}
}
