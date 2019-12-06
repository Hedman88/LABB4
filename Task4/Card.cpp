#include "Card.h"
#include <iostream>

using namespace std;

Card::Card() {

}

Card::Card(int i)
{
	if (0 < i && i < 14) {
		suit = "HEARTS";
		if (i > 9) {
			if (i == 10) {
				cardnr = "JACK";
			}
			else if (i == 11) {
				cardnr = "QUEEN";
			}
			else if (i == 12) {
				cardnr = "KING";
			}
			else if(i == 13){
				cardnr = "ACE";
			}
			return;
		}
		cardnr = to_string(i+1);
	}
	if (13 < i && i < 27) {
		suit = "SPADES";
		if (i > 22) {
			if (i == 23) {
				cardnr = "JACK";
			}
			else if (i == 24) {
				cardnr = "QUEEN";
			}
			else if (i == 25) {
				cardnr = "KING";
			}
			else if (i == 26) {
				cardnr = "ACE";
			}
			return;
		}
		cardnr = to_string((i+1)-13);
	}
	if (26 < i && i < 40) {
		suit = "DIAMONDS";
		if (i > 35) {
			if (i == 36) {
				cardnr = "JACK";
			}
			else if (i == 37) {
				cardnr = "QUEEN";
			}
			else if (i == 38) {
				cardnr = "KING";
			}
			else if (i == 39) {
				cardnr = "ACE";
			}
			return;
		}
		cardnr = to_string((i+1)-26);
	}
	if (39 < i && i < 53) {
		suit = "CLUBS";
		if (i > 48) {
			if (i == 49) {
				cardnr = "JACK";
			}
			else if (i == 50) {
				cardnr = "QUEEN";
			}
			else if (i == 51) {
				cardnr = "KING";
			}
			else if (i == 52) {
				cardnr = "ACE";
			}
			return;
		}
		cardnr = to_string((i+1)-39);
	}
	if (52 < i && i < 56) {
		suit = "ALL";
		cardnr = "JOKER";
	}
}


Card::~Card()
{
}

void Card::print() {
	cout << cardnr << " of " << suit << endl << "---------------------------------" << endl;
}