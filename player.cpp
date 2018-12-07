#include "player.h"
#include "funciones.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void player::pickup()
{
	inventory.push_back("Knife");
	cout << endl;
	cout << "You pick up the knife." << endl;
}

void player::use()
{
	cout << "You use the item." << endl;
	cout << endl;
}



