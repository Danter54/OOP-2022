#include "Point.h"

ostream& operator<<(ostream& os, const Point date)
{
	return os << "X = " << date.x << " Y = " << date.y << " Sum  =" << date.sum << endl;
}

bool operator==(const Point& a, const Point& b)
{
	if (a.sum == b.sum) {
		return true;
	}
	else return false;
}
