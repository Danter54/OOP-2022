#include"Header_Includer.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"RU");
	int count_arr =0;

	string name;
	char type;
	double denomination;
	unsigned int count;

	cout << "������� ���������� ��������: ";
	while (true) {
		cin >> count_arr;
		if (count_arr <0 || count_arr == 0 || count_arr>UINT32_MAX) {
			cout << "������� ��������� �����!!!\n";
			cout << "������� ���������� ��������: ";
			cin >> count_arr;
		}
		else break;
	}

	Accessories *obj=new Accessories[count_arr];

	cout << "������ ������ set:\n";
	for (int i = 0; i < count_arr; i++) {
		cout << "������� ��������,���,������� � ����������:  ";
		cin >> name >> type >> denomination >> count;
		obj[i].set(name, type, denomination, count);
	}

	cout << "������ ������ show:\n";
	Output(obj,count_arr);

	cout << "������ ������ get:\n";
	for (int i = 0; i < count_arr;i++) {
		name.clear();
		type = ' ';
		denomination = 0;
		count = 0;
		obj[i].get(name, type, denomination, count); 
		cout << "�������� ������� �������� ������� get:" << endl;
		cout << name << ' ' << type << ' ' << denomination << ' ' << count << endl;
	}





	delete[] obj;
	return 0;
}