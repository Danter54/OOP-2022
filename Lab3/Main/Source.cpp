#include <iostream>
#include "Classes_Header.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	D1 temp(100,200,300,400);
	D2 temp1(1, 2, 3, 4, 5);

	cout << "D1 temp(100,200,300,400);\n";
	cout << "D2 temp1(1,2,3,4,5);\n";
	cout << "\n—леду€ иерархии класса D1: \n";
	temp.show_d1();
	cout << "B3 - protected\n";
	temp.show_b2();
	temp.show_b1();
	
	cout << "\n—леду€ иерархии класса D4\n";
	temp1.show_d2();
	temp1.show_d1();
	cout << "B3 - protected\n";
	temp1.show_b2();
	temp1.show_b1();

	return 0;
}