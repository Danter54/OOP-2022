#pragma once
#include <string>
using namespace std;
class Accessories
{
private:
	string* name;
	char type;
	double denomination;
	unsigned int count;
	friend ostream& operator <<(ostream& stream, Accessories& obj);
	friend istream& operator >> (istream& stream, Accessories& obj);
	friend void head(void);
	friend void shapka(void);


public:
	friend void linebuild(void);
	Accessories() { name = nullptr; type = ' '; denomination = 0; count = 0; }
	Accessories(string* a, char& b, double& c, unsigned int& d);
	void setall(string*a, char& b, double& c, unsigned int& d);
	void getall(string* a, char& b, double& c, unsigned int& d);
	void showall(void);
	Accessories operator = (const Accessories& o1);
	int  operator ==(Accessories& o1);
	Accessories operator + (Accessories& o1);

};

