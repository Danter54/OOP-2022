#include <iostream>
#include "Array_class.h"

using namespace std;
int main() {
	system("chcp 1251");
	int choice = 0;
	cout << "������ ���� ������ ����� ������ (1 - �����, 2 - ������������)>>";
	cin >> choice;
	while (choice != 1 && choice != 2) {
		cout << "�� ����� ������� ��������!!!\n";
		cout << ">>";
		cin >> choice;
	}

	if (choice ==1) {
		Array_class <int> mass;
		cout << "������� ��������� �� ������ ���������>>";
		int count = 0;
		cin >> count;
		for (int i = 0; i < count; i++) {
			int elem = 0;
			cout << "������� " << i + 1 << " ������� >>";
			cin >> elem;
			mass.add_elem(elem);
		}
		cout << "Mass sum>> " << mass.sum()<< endl;
		cout << "Average mas>> " << mass.arraise() << endl;
		cout << "Show:\n";
		mass.show();
		cout << "������� ���������� ��� ������ ������������� ��������>>";
		cin >> count;
		cout <<"����. � ����. "<<count << mass[count];
	}
	else if (choice == 2) {
		Array_class <double> mass;
		cout << "������� ��������� �� ������ ���������>>";
		int count = 0;
		cin >> count;
		for (int i = 0; i < count; i++) {
			double elem = 0;
			cout << "������� " << i + 1 << " ������� >>";
			cin >> elem;
			mass.add_elem(elem);
		}
		cout << "Mass sum>> " << mass.sum()<<endl;
		cout << "Average mas>> " << mass.arraise() << endl;
		cout << "Show:\n";
		mass.show();
		cout << "������� ���������� ��� ������ ������������� ��������>>";
		cin >> count;
		cout << "����. � ����. " << count << mass[count];
	}
	return 0;
}