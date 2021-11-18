#include "COMP.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
void COMP::set(double a, double b)
{
	x = a;
	y = b;
}
void COMP::show()
{
	cout << "z = "  << x << " + i" << y<<endl;
}

void COMP::write_in_file()
{
	ofstream file;
	file.open("Comp.txt", ios::app);
	if (!file.is_open()) {
		cout << "Файл не открылся!!!\n";
		return;
	}
	string str;
	str = to_string(x) + " + i" + to_string(y)+'\n';
	file << str;
	file.close();
}

