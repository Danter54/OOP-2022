#pragma once
#include "Header_Includer.h"
class Accesories
{
private:
	string name;
	char type;
	double denomination;
	unsigned int count;

	friend ostream& operator <<(ostream& stream, Accesories& obj);
	friend istream& operator >> (istream& stream, Accesories& obj);
public:
	Accesories();
	Accesories(string a, char& b, double& c, unsigned int& d);
	Accesories(const Accesories& temp);

	string Retname();

	

};

