#include "Menu.h"
#include "Life.h"

Menu::Menu()
{
	world = Life();
}

void Menu::printMainMenu()
{
	std::cout << "(Q)uit, S(u)perclean, (C)lean, (P)arameters, (R)andom, "
		"(T)oggle, (G)liddergun, O(n)e, G(o)";
}

void Menu::printSubMenu()
{
	std::cout << "(S)tepsize, (P)ercentage, (D)eath, (L)ife, (B)ack";
}

void options()
{
	char input;
	do
	{

	} while(input != )
		switch
}