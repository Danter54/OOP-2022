#include <iostream>
#include "Array_class.h"

using namespace std;
int main() {
	system("chcp 1251");
	int choice = 0;
	cout << "Какого типа данных будет массив (1 - целый, 2 - вещественный)>>";
	cin >> choice;
	while (choice != 1 && choice != 2) {
		cout << "Не верно ведённое значение!!!\n";
		cout << ">>";
		cin >> choice;
	}

	if (choice ==1) {
		Array_class <int> mass;
		cout << "Сколько елементов вы хотите заполнить>>";
		int count = 0;
		cin >> count;
		for (int i = 0; i < count; i++) {
			int elem = 0;
			cout << "Введите " << i + 1 << " елемент >>";
			cin >> elem;
			mass.add_elem(elem);
		}
		cout << "Mass sum>> " << mass.sum()<< endl;
		cout << "Average mas>> " << mass.arraise() << endl;
		cout << "Show:\n";
		mass.show();
		cout << "Введите промежуток для посика максимального значения>>";
		cin >> count;
		cout <<"Макс. в пром. "<<count << mass[count];
	}
	else if (choice == 2) {
		Array_class <double> mass;
		cout << "Сколько елементов вы хотите заполнить>>";
		int count = 0;
		cin >> count;
		for (int i = 0; i < count; i++) {
			double elem = 0;
			cout << "Введите " << i + 1 << " елемент >>";
			cin >> elem;
			mass.add_elem(elem);
		}
		cout << "Mass sum>> " << mass.sum()<<endl;
		cout << "Average mas>> " << mass.arraise() << endl;
		cout << "Show:\n";
		mass.show();
		cout << "Введите промежуток для посика максимального значения>>";
		cin >> count;
		cout << "Макс. в пром. " << count << mass[count];
	}
	return 0;
}