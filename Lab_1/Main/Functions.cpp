#include"Header_Includer.h"

void Output(Accessories* obj, int count_arr)
{
	cout << "|========================================================|" << endl;
	cout << "| ??????????? | ??? |     ???????     |    ??????????    |" << endl;
	cout << "|=============|=====|=================|==================|" << endl;
	for (int i = 0; i < count_arr; i++) {
		obj[i].show();
	}
	cout << "|========================================================|" << endl;
}
