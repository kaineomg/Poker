#pragma once
#include <iostream>
#include <vector>
#include "Card.h"
#include "Deck.h"
class Dealer
{
private:
	vector<Card>table;

public:
	Dealer() 
	{
	};
	void getStartTable(Deck& deck);
	void getTableCard(Deck& deck);
	void printTable();
};

