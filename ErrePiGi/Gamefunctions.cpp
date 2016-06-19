#include <iostream>
#include <string>
#include <ctime>
#include "Functions.h"

using namespace std;

void combat(int randomMonster, const string monsterType[], string playerName, int weaponDamage, int monsterLife, const string loot[], string inventory[], int MAX_ITEMS)
{
	srand(static_cast<unsigned int>(time(0)));

	int currentLife = monsterLife;
	int randomLoot = (rand() % 9);
	int check = 0;

	cout << "\n" << playerName << " has encountered " << monsterType[randomMonster] << "!";

	switch (randomMonster)
	{
	case 0:
		printGoblin();
		break;
	case 1:
		printOrk();
		break;
	case 2:
		printTroll();
		break;
	case 3:
		printDragon();
		break;
	}
	while (currentLife > 0)
	{
		cout << "\n" << playerName << " attacks " << monsterType[randomMonster] << " for " << weaponDamage << " damage";
		currentLife = currentLife - weaponDamage;
		cout << "\nThe monster has " << currentLife << " life points";
	}
	cout << "\nThe " << monsterType[randomMonster] << " is dead";

	cout << "\n" << playerName << " obtained " << loot[randomLoot];

	for (int c = 0; c < MAX_ITEMS; c++)
	{
		if (inventory[c].empty()) { check++; }
	}

	if (check == 0)
	{
		cout << ", but " << playerName << " doesn't have any free pocket, and he lost the loot";
		return;
	}
	else if (check == 1)
	{
		cout << "\nWarning, " << playerName << " has only one pocket free. ";

		for (int i = 0; i < MAX_ITEMS; i++)
		{
			if (inventory[i].empty())
			{
				inventory[i] = loot[randomLoot];
				break;
			}
		}
	}
	else
	{
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			if (inventory[i].empty())
			{
				inventory[i] = loot[randomLoot];
				break;
			}
		}
	}

}
