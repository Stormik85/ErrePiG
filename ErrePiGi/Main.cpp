#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include "Structures.h"
#include "Functions.h"

using namespace std;

int main()
{

	char choiceA;
	char choiceI = 'n';

	cout << "Please enter your name o fearless adventurer: ";
	cin >> playerName;

	cout << "\nLet's start the mighty quest of " << playerName << endl;
	cout << "\nNow that the journey has begun it's time to make your choice: " << endl;
	while (true)
	{
		printBaseActions();
		cin >> choiceA;
		switch (choiceA)
		{
		case 'f':	//forward
		{
			if ((weapon != "Dagger") && (weapon != "Short Sword") && (weapon != "Long Sword") && (weapon != "Two Handed Axe") && (weapon != "Dragon Slayer Sword"))
			{
				cout << "\n" << playerName << " don't have a weapon in hand, you'll be stuck in an endless loop of pain";
			}
			else
			{
				srand(static_cast<unsigned int>(time(0)));
				int tileEvent = (rand() % 10 + 1);

				int weapDmg = 0, monstLife = 0;

				system("cls");
				if (tileEvent < 5)
				{
					printLandscape();
				}
				else
				{
					int randomMonster = (rand() % NUM_MONSTERS);

					if (randomMonster == 0) { monstLife = GOBLIN_LIFE; }
					else if (randomMonster == 1) { monstLife = ORK_LIFE; }
					else if (randomMonster == 2) { monstLife = TROLL_LIFE; }
					else if (randomMonster == 3) { monstLife = DRAGON_LIFE; }

					if (weapon == "Dagger") { weapDmg = DAGGER_DMG; }
					else if (weapon == "Short Sword") { weapDmg = SHORT_SWORD_DMG; }
					else if (weapon == "Long Sword") { weapDmg = LONG_SWORD_DMG; }
					else if (weapon == "Two Handed Axe") { weapDmg = TWO_HANDED_AXE_DMG; }
					else if (weapon == "Dragon Slayer Sword") { weapDmg = DRAGON_SLAYER_SWORD_DMG; }

					combat(randomMonster, monsterType, playerName, weapDmg, monstLife, loot, inventory, MAX_ITEMS);
					cout << endl;
				}
			}

			break; }
		case 'l':	//Inventory functions - TODO (one done)
		{
			choiceI = 'n';
			system("cls");
			while (choiceI != 'b')
			{

				printInventoryActions();
				cin >> choiceI;
				switch (choiceI)
				{
				case 'n':	//Nothing, only for variable initialization (temporary solution)
				{
					continue;
				}
				case 'e':	//Equip an item - DONE
				{
					system("cls");
					weapon = equipItem(weapon, playerName, inventory);

					break;
				}
				case 'p':	//peek into inventory - DONE
				{
					system("cls");

					inventoryLookup(MAX_ITEMS, playerName, weapon, inventory);

					break;
				}
				case 'd':
				{
					dropItem(MAX_ITEMS, playerName, weapon, inventory);
					break;
				}
				case 'b':	//go back - DONE
				{
					system("cls");
					break; }
				default:
					cout << "Invalid action" << endl;
					break;
				}
			}
			break; }
		case 'q':	//quit - DONE
		{
			exit(1); }
		default:
		{
			cout << "Invalid action" << endl;
			break; }
		}
	}

	return 0;
}