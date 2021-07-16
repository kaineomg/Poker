#include "Deck.h"

void Deck::ShowDeck()
{
	for (int i = 0;i <deck.size();i++)
	{
		deck[i].PrintCard();
	}

}

void Deck::shuffle()
{

	for (int i = 0; i < deck.size(); i++) {
		int j = i + rand() % (deck.size() - i);
		swap(deck[j], deck[i]);
	}
}

Card Deck::GetCard()
{
	
	Card card = deck.front();
	deck.erase(deck.begin());
	return card;

}
