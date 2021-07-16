#pragma once
#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;
class Deck
{
private:
	vector<char> ranks = { '2', '3', '4', '5', '6', '7','8', '9', '1', 'V', 'Q', 'K', 'A'};
	vector<char> suits = {3,4,5,6};
	vector <Card>deck;
public:
	Deck()
	{
		for (int i = 0; i < suits.size(); i++) {
			for (int j = 0; j < ranks.size(); j++)
			{
				Card card(ranks[j], suits[i]);
				deck.push_back(card);
			}
		}
		shuffle();
	}
	
	void ShowDeck();
	void shuffle();
	Card GetCard();
};

