#include <iostream>
#include <string>
#include <vector>
#include "player.h"
#include "funciones.h"

using namespace std;
string playername;

int main()
{
	cout << "Name:"; cin >> playername; cout << endl;
		
		player playern;

		cout << endl;
		cout << "You're in a room with a knife laying on the floor.\n" << endl;
		cout << "What shall you do?" << endl;
		cout << endl;
		while (!choiceroom1Complete)
		{
		cin >> choiceroom1;
			if (strcmp(choiceroom1, "pickup"))
			{
				playern.pickup();
				choiceroom1Complete = true;
			}
			else if (strcmp(choiceroom1, "pick up"))
			{
				playern.pickup();
				choiceroom1Complete = true;
			}
			else
			{
				cout << endl;
				cout << "I don't know what you mean, "<< playername <<". Could you say that again?" << endl;
				cout << endl;
			}

		}
		system("pause");

	return 0;
}