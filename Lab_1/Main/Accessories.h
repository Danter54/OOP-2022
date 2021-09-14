#pragma once
#include <string>
using namespace std;

class Accessories
{
private:
	string *name;
	char type;
	double denomination;
	unsigned int count;

public:

	Accessories() {
		this->name = nullptr;
		this->type = NULL;
		this->denomination = 0;
		this->count = 0;
	}
	void set(string a,char&b,double&c,unsigned int&d);
	void get(string& a, char& b, double& c, unsigned int& d);
	void show(void);
};

