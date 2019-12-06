#pragma once
#include <string>

class Card
{
	std::string suit;
	std::string cardnr;
	int card;
public:
	Card();
	Card(int i);
	~Card();
	void print();
};

