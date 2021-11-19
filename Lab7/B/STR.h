#pragma once
#include <string>
#include <iostream>
#include <ostream>
using namespace std;

class STR
{
private:
	string str;
public:
	STR() {
		str = "";
	}
	STR(string a) {
		str = a;
	}
	friend std::ofstream& operator<< (std::ofstream& out, STR const& curr);
};

