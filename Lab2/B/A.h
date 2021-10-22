#pragma once
#include "Header_Includer.h"
class A
{private:
	string name;
	char type;
	double denomination;
	unsigned int count;

	friend ostream& operator<<(ostream& stream, A& o1);
	friend istream& operator>>(istream& stream, A& o1);

public:
	A operator ()(string a, char b, double c, unsigned int d);
	friend A operator+(const A&obj1, const A&obj2);
	bool operator ==(const A& obj);
	int& operator[](const int i);

};