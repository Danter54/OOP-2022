#include "Figure.h"

Figure::Figure()
{
	x = 0;
	y = 0;
	squere = 0;
}

Figure::Figure(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Figure::setsquere()
{
	if (y == 0) {
		squere = x * x;
	}
	else squere = x * y;
}

int Figure::getsquere()
{
	return squere;
}
