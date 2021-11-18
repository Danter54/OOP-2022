#include "Functions_Header.h"
#include <fstream>
#include <String>


void Write_in_file(int& iop, int& counter) {
	int count = 0;
	string str;

	ofstream out;
	out.open("text.txt",ios::out);

	if (!out.is_open()) {
		cout << "���� �� ������!!!\n";
		iop = 0;
		return;
	}
	iop = 1;

	
	while (true) {
		cout << "������� ���������� ������������ ����� �� ������ 2 >>";
		cin >> count;
		if (count < 2) {
			cout << "������� ����� ������ 2!!!\n";
		}
		else if (count % 2 != 0) {
			cout << "������� ����� �� ������� 2!!!\n";
		}
		else break;
		
	}
	double* mas = new double[count];
	counter = count;
	
	cout << "������� ����� ����� ������ >> ";
	for (int i = 0; i < count; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < count; i++) {
		
		str += to_string(mas[i])+' ';
	}
	out << str;
	out.close();
}

void Write_in_mas(double* mas, int count, int& iop)
{
	double ch=0;
	string str;
	std::ifstream in("text.txt");
	if (!in.is_open()) {
		cout << "���� �� ������!!!\n";
		iop = 0;
		return;
	}
	iop = 1;
	for (int i = 0; i < count; i++) {
		in >> str;
		ch = std::stod(str);
		mas[i] = ch;
	}
	in.close();
}
