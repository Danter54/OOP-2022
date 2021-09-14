#include "Accessories.h"
#include<iostream>
#include <iomanip>

using namespace std;
void Accessories::set(string a, char& b, double& c, unsigned int& d)
{
	int strlenth = a.length();
	this->name = new string[strlenth];
	*name = a;
	this->type = b;
	this->denomination = c;
	this->count = d;
}

void Accessories::get(string& a, char& b, double& c, unsigned int& d)
{

	a = *this->name;
	b = this->type;
	c = this->denomination;
	d = this->count;
}

void Accessories::show(void)
{
	cout <<"|"<<setw(13)<<setfill(' ')<< *name <<\
	"|" <<setw(5)<< type <<\
	"|" << setw(17) <<  denomination<<\
	"|" <<setw(18)<< count << "|" <<endl;
}
