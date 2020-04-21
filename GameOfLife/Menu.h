#pragma once
#include <iostream>
#include "Life.h"

class Menu
{
public:
	Menu();
	void options();
	void printMainMenu();
	void printSubMenu();
private:
	Life world;
};
