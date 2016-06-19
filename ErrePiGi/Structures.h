#pragma once

#include<iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 10;
const int baseMoney = 0;

//int inventoryPosition = 0;
string inventory[MAX_ITEMS] = { "Hat", "Dagger", "Shield"};
string playerName;
string weapon = "Dagger";

enum monster { GOBLIN, ORK, TROLL, DRAGON, NUM_MONSTERS };
enum monsterLife { GOBLIN_LIFE = 10, ORK_LIFE = 15, TROLL_LIFE = 20, DRAGON_LIFE = 50 };
enum weaponsDamage { DAGGER_DMG = 1, SHORT_SWORD_DMG = 2, LONG_SWORD_DMG = 5, TWO_HANDED_AXE_DMG = 10, DRAGON_SLAYER_SWORD_DMG = 50 };

const string monsterType[NUM_MONSTERS] = {"Goblin", "Ork", "Troll" , "Dragon" };

const string loot[10] = { "Short Sword","Long Sword", "Two Handed Axe", "Dragon Slayer Sword", "Shield", "Hat", "Pendant", "Diamond", "Dagger", "Ring" };

