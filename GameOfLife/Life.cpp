#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Life.h"
#include <string>


Life::Life()
{
	for (int i = 0; i <= MAX - 1; i++)
	{
		for (int j = 0; j <= MAX - 1; j++)
		{
			newWorld[i][j] = false;
			oldWorld[i][j] = false;
		}
	}
	windowHeight = 25;
	windowWidth = 80;
	percentage = 100;
	stepSize = 1;
	life = 'O';
	death = '-';
	viewX = 100;
	viewY = 100;
}

void Life::randomizeWorld()
{
	std::srand(std::time(NULL));
	for (int i = 1; i <= MAX - 2; i++)
	{
		for (int j = 1; j <= MAX - 2; j++)
		{
			newWorld[i][j] = ((rand() % 100)< percentage);
		}
	}
}

void Life::print()
{
	std::string str = "";
	str += "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	for (int i = 0; i <= windowHeight - 1; i++)
	{
		for (int j = 0; j <= windowWidth - 1; j++)
		{
			if (newWorld[viewY + i][viewX + j])
				//std::cout << life << " ";
				str = str + life + " ";
			else
				//std::cout << death << " ";
				str = str + death + " ";
		}
		//std::cout << std::endl;
		str += "\n";
	}
	std::cout << str;
}

void Life::clean()
{
	for (int i = 1; i <= MAX - 2; i++)
	{
		for (int j = 1; j <= MAX - 2; j++)
		{
			newWorld[i][j] = false;
		}
	}
}

void Life::nextGen()
{
	coppyNewToOld();
	int countLife = 0;
	for (int i = 1; i <= MAX - 2; i++)
	{
		for (int j = 1; j <= MAX - 2; j++)
		{
			for (int k = -1; k <= 1; k++)
				for (int l = -1; l <= 1; l++)
					countLife += oldWorld[i + k][j + l];
			if (oldWorld[i][j] && countLife != 3 && countLife != 4)
				newWorld[i][j] = false;
			if (!oldWorld[i][j] && countLife == 3)
				newWorld[i][j] = true;
			countLife = 0;
		}
	}
}

void Life::coppyNewToOld()
{
	for (int i = 1; i <= MAX - 2; i++)
		for (int j = 1; j <= MAX - 2; j++)
			oldWorld[i][j] = newWorld[i][j];
}