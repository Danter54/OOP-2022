#include "NAME.h"
#include <iostream>
using namespace std;
bool operator<(const NAME& a, const NAME& b)
{
	if (a.name < b.name) {
		return true;
	}
	else return false;
}

ostream& operator<<(ostream& os, const NAME& date)
{
	return os << date.name;
}
