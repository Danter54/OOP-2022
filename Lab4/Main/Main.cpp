#include <iostream>
#include "Header_Includer.h"
#include "Accesories.h"

void main() {
	setlocale(LC_ALL,"RU");

	string temp_str;
	char temp_type;
	double temp_denom;
	unsigned int temp_count;
	cout << "¬ведите обозначение, тип, номинал, количество: ";
	cin >> temp_str >> temp_type >> temp_denom >> temp_count;
	Accesories obj1(temp_str, temp_type, temp_denom, temp_count);

	cout << "¬ведите обозначение, тип, номинал, количество: ";
	cin >> temp_str >> temp_type >> temp_denom >> temp_count;
	Accesories obj2(temp_str, temp_type, temp_denom, temp_count);

	obj1.head();
	obj1.output();
	obj2.output();

}