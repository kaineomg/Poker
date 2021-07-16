#pragma once
#include <iostream>
#include <vector>
#include<string>
#include "Card.h"
#include "Deck.h"
using namespace std;
class Player
{
private:
	vector<Card>hand;
	string name;

public:
	Player(char imya) 
	{
		name = imya;
	};
	Player() 
	{
	};
	void setName();
    void getHand(Deck& deck);
	void PrintHand();
};

