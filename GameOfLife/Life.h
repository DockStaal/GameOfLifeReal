#pragma once
const int MAX = 1000;

class Life
{
public:
	Life();
	void print();
	void randomizeWorld();
	void clean();
	void setPercentage(int p) { percentage = p; }
	void nextGen();
private:
	bool oldWorld[MAX][MAX];
	bool newWorld[MAX][MAX];
	int windowHeight, windowWidth;
	int percentage; //life to death ratio.
	int stepSize; //step size of window movement
	int viewX; //view in x direction, seen from left up corner
	int viewY; //...
	char life;
	char death;
	void coppyNewToOld();
};

