#include <iostream>
#include "STR.h"
using namespace std;
#include <fstream>
#include <string>


int main() {
	setlocale(LC_ALL,"RU");
	system("chcp 1251");

	STR obj1("���������� ������ Ofstream 19.11.2021");

	string str;
	cout << "������� ������ >>";
	getline(cin,str);

	STR obj2(str);

	ofstream file;
	file.open("text.txt",ios::out);


	if (!file.is_open()) {
		cout << "���� �� ������!!!";
		return 0;
	}
	
	file << obj1<<endl;
	file << obj2 << endl;
	file.close();

	return 0;
}