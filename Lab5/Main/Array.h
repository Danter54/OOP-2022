#pragma once
#include "Header_Includer.h"
class Array
{
private:
	int* arr;
	int size=0;
public:
	void InitfromFile();
	void setArray();
	void Output();

	void operator[](string txt);


};

