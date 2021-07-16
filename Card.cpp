#include "Card.h"

 char Card::GetSuit()
{
	return suit;
}


 char Card::GetRank()
{
	return rank;
}
	
void Card::PrintCard() 
{
	cout << rank << "  " << suit << endl;
}

void Card::PrintCardT()
{
	cout<<"\t\t|" << rank << "  " << suit << "|";
}
