#pragma once
#include "Header_Includer.h"

class Accesories
{
private:
	string name;
	char type;
	double denomination;
	unsigned int count;
public:
	Accesories();
	Accesories(string a, char& b, double& c, unsigned int& d);
	Accesories(const Accesories& temp);

	void linebuild();
	void head();
	void output();

};

