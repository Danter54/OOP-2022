#include <iostream>
#include "Array_Class.h"

using namespace std;

int main() {
	int choice = 0;

	cout << "Какой массив вы хотите создать (1 - целочисленный, 2 - вещественный)>> ";
	cin >> choice;
	if (choice==1) {
		Array_Class <int> mas;
	}
	else if (choice == 2) {
		Array_Class <double> mas;
	}

	return 0;
}