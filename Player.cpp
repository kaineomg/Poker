#include "Player.h"

void Player::setName()
{
	string name;
	cout << "¬ведите им€ игрока"<<endl;
	cin >> name;
	this->name = name;
	system("cls");
}

void Player::getHand(Deck& deck)
{
	for (int i = 0;i < 2;i++) 
	{
		Card card = deck.GetCard();
		hand.push_back(card);
	}
}

void Player::PrintHand()
{
	cout << this->name<<endl;
	for (int i = 0; i < hand.size(); i++)
	{
		hand[i].PrintCard();
	}
}
