#include <iostream>
#include "Header_Includer.h"
#include "DataBase.h"
#include "Accesories.h"

int main() {
	setlocale(LC_ALL,"RU");

	string temp_str;
	char temp_type;
	double temp_denom;
	unsigned int temp_count;

	int choice = 0;

	DataBase* tmp = new DataBase("\n���� ������ �1\n");
	int a = 0;
	while (!a) {
		cout << "1. �������� ������\n";
		cout << "2. ������� ������\n";
		cout << "3. ����������� ����\n";
		cout << "4. ������� ����\n";
		cout << "5. �����\n";
		cout << "> ";
		cin >> choice;
		switch (choice)
		{
		case(1):
			cout << "������������, ���, �������, ����������: ";
			cin >> temp_str >> temp_type >> temp_denom >> temp_count;
			tmp->Add_rec(temp_str,temp_type,temp_denom,temp_count);
			break;
		case(2):
			tmp->Del_rec();
			break;

		case(4):
			tmp->Output_DB();
			break;

		case(3):
			tmp->Sort_DB();
			break;

		case(5):
			cout << "Exit...\n";
			a = 1;
			break;

		default:
			cout << "�������� �����!\n";
			break;
		}

	}

	return 0;
}