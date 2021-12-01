#pragma once
#include <iostream>
#include <string>
using namespace std;
class NAME
{
private:
	std::string name;
public:
	NAME(std::string str) { name = str; }
	friend bool operator <(const NAME&a, const NAME&b);
	friend ostream& operator <<(ostream& os, const NAME& date);
	string getname() { return name; }
};

