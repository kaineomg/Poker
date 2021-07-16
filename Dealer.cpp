#include "Dealer.h"

void Dealer::getStartTable(Deck& deck)
{
	for (int i = 0;i < 3;i++)
	{
		Card card = deck.GetCard();
		table.push_back(card);
	}
}

void Dealer::getTableCard(Deck& deck)
{
	Card card = deck.GetCard();
	table.push_back(card);
}

void Dealer::printTable()
{
	for (int i = 0; i < table.size(); i++)
	{
		table[i].PrintCardT();
	}
}
