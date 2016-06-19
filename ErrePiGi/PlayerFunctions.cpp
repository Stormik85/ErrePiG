#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include "Functions.h"

using namespace std;

void inventoryLookup(const int MAX_ITEMS, string playerName, string weapon, string inventory[])
{
	cout << "\nIn his hands " << playerName << " has: " << weapon;
	cout << "\nLet's see what " << playerName << " has in his pockets:\n";
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (!inventory[i].empty())
		{
			cout << "In the pocket " << i + 1 << " " << playerName << " has: " << inventory[i] << endl;
		}
		else
		{
			continue;
		}
	}
}

string equipItem(string weapon, string playerName, string inventory[])
{
	bool valid = false;
	int inventoryPosition;
	string currentWeapon = weapon;
	cout << "\nSelect the weapon you want " << playerName << " to equip: ";
	cout << "\nTo equip a weapon just type the pocket you want\n";
	
	while (!valid)
	{
		valid = true;

		cin >> inventoryPosition;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(20);
			cout << "Please, insert the number of the pocket you wish to take the weapon from\n";
			valid = false;
		}
	}

	inventoryPosition = inventoryPosition - 1;

	if ((inventory[inventoryPosition] != currentWeapon) && (!inventory[inventoryPosition].empty()) && (inventory[inventoryPosition] != "Shield") && (inventory[inventoryPosition] != "Hat") && (inventory[inventoryPosition] != "Pendant") && (inventory[inventoryPosition] != "Diamond") && (inventory[inventoryPosition] != "Ring"))
	{
		currentWeapon = inventory[inventoryPosition];
		cout << "\n" << playerName << " have successfully equipped " << currentWeapon << "!";


		if (currentWeapon == "Dagger")
		{
			printDagger();
		}
		else if (currentWeapon == "Short Sword")
		{
			printShortSword();
		}
		else if (currentWeapon == "Long Sword")
		{
			printLongSword();
		}
		else if (currentWeapon == "Two Handed Axe")
		{
			printTwoHandedAxe();
		}
		else if (currentWeapon == "Dragon Slayer Sword")
		{
			printDragonSlayerSword();
		}
	}
	else { cout << "\nNot a weapon!"; }

	weapon = currentWeapon;
	return weapon;
}

string dropItem(const int MAX_ITEMS, string playerName, string weapon, string inventory[])
{
	int inventoryPosition;

	cout << "\nSelect the item you want " << playerName << " to drop: ";
	cin >> inventoryPosition;
	inventoryPosition = inventoryPosition - 1;

	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if ((!inventory[inventoryPosition].empty()) && (inventory[inventoryPosition] != weapon))
		{
			inventory[inventoryPosition] = "";
		}
	}

	return inventory[inventoryPosition];
}