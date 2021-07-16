#pragma once
#include <iostream>
#include<string>
using namespace std;
class Card
{
private:
	char suit;
	char rank;
public:
	Card()
	{
	};
	Card (char mast_, char znach_) :suit{ mast_ }, rank{ znach_ }
	{
	}

	char GetSuit();
	char GetRank();
	void PrintCard();
	void PrintCardT();
};

