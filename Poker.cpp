#include <iostream>
#include "Card.h"
#include<Windows.h>
#include"Deck.h"
#include "Player.h"
#include "Dealer.h"

int main()
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));
	Dealer q1;
	Deck qq;
	Player p1;
	Player p2;
	Player p3;
	p1.setName();
	p2.setName();
	p3.setName();
	p1.getHand(qq);
	p1.PrintHand();
	cout << endl;
	p2.getHand(qq);
	p2.PrintHand();
	cout << endl;
	p3.getHand(qq);
	p3.PrintHand();
	cout << endl;
	q1.getStartTable(qq);
	q1.printTable();
	cout << endl;
	q1.getTableCard(qq);
	q1.printTable();
	cout << endl;
	q1.getTableCard(qq);
	q1.printTable();
	cout << endl;
	

	
	
}


