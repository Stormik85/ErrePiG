#pragma once

#include<string>

using namespace std;

//Menu Functions
void printBaseActions();
void printInventoryActions();

//Art Functions
void printLandscape();
void printDagger();
void printShortSword();
void printLongSword();
void printTwoHandedAxe();
void printDragonSlayerSword();
void printGoblin();
void printOrk();
void printTroll();
void printDragon();

//Player Functions
void inventoryLookup(const int, string, string, string[]);
string equipItem(string, string, string[]);
string dropItem(const int, string, string, string[]);

//Game functions
void combat(int, const string[], string, int, int, const string[], string[], int);