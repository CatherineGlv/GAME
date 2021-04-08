// начало игры и ошибки...
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Card.h"
#include "Hand.h"
#include "GenericPlayer.h"
#include "Player.h"
#include "House.h"
#include "Deck.h"
#include "Game.h"

using namespace std;
	
ostream& operator<<(ostream& os, const Card& aCard);
ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
	
int main()
{
	cout << "\t\tWelcome to Blackjack!\n\n";
	int numPlayers = 0;

	while (numPlayers < 1 || numPlayers > 7)
	{
		cout << "How many players? (1 - 7): ";
		cin >> numPlayers;
	}

	vector<string> names;
	string name;
	for (int i = 0; i < numPlayers; ++i)
	{
		cout << "Enter �layer name: ";
		cin >> name;
		names.push_back(name);
	}
	cout << endl;

	Game aGame(names);
	char again = '�';
	while (again != 'n' && again != 'N')
	{
		aGame.Pl��();
		cout << "\nDo you want to play again? (Y/N): ";
		cin >> again;
	}
	return 0;
}