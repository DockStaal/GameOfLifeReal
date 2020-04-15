#include <iostream>
#include "Life.h"
#include "windows.h"

int main()
{
	Life life = Life();
	life.randomizeWorld();
	life.print();
	
	for (int i = 0; i <= 500; i++)
	{
		life.nextGen();
		life.print();
		Sleep(30);
	}
}