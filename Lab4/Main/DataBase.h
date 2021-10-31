#pragma once
#include "Header_Includer.h"
#include "Accesories.h"
class DataBase
{private:
	string title;
	Accesories* rows[12];
	int col;
	int sorted;
public:
	DataBase(string a);
	~DataBase() { if (col) for (int i = 0; i < col; i++)delete rows[i]; }

	void Add_rec(string a, char& b, double& c, unsigned int d);
	void Del_rec();
	void Sort_DB();
	void Output_DB();
	friend ostream& operator<<(ostream& stream, DataBase& temp);


};

