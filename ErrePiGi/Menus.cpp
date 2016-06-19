#include <iostream>
#include <string>
#include "Functions.h"

void printBaseActions()
{
	cout << "\nWhat do you want to do?" << endl;
	cout << "f - to go further" << endl;
	cout << "l - to look at your inventory" << endl;
	cout << "q - to quit" << endl << endl;
}

void printInventoryActions()
{
	cout << "\nWhat do you want to do?" << endl;
	cout << "e - to equip an item" << endl;
	cout << "d - to drop an item" << endl;
	cout << "p - peek into the inventory" << endl;
	cout << "b - to go back" << endl << endl;
}