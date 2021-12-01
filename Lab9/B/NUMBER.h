#pragma once
#include <iostream>
using namespace std;

class NUMBER
{
private:
	int number;
public:
	NUMBER(int a) { number = a; }
	int get(int a) { a = number; }
	friend ostream& operator << (ostream& os, const NUMBER date);
};

