#include"Header_Includer.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"RU");
	int count_arr =0;

	string name;
	char type;
	double denomination;
	unsigned int count;

	cout << "Введите количество объектов: ";
	while (true) {
		cin >> count_arr;
		if (count_arr <0 || count_arr == 0 || count_arr>UINT32_MAX) {
			cout << "Неверно введенное число!!!\n";
			cout << "Введите количество объектов: ";
			cin >> count_arr;
		}
		else break;
	}

	Accessories *obj=new Accessories[count_arr];

	cout << "Работа метода set:\n";
	for (int i = 0; i < count_arr; i++) {
		cout << "Введите название,тип,номинал и количество:  ";
		cin >> name >> type >> denomination >> count;
		obj[i].set(name, type, denomination, count);
	}

	cout << "Работа метода show:\n";
	Output(obj,count_arr);

	cout << "Работа метода get:\n";
	for (int i = 0; i < count_arr;i++) {
		name.clear();
		type = ' ';
		denomination = 0;
		count = 0;
		obj[i].get(name, type, denomination, count); 
		cout << "Значения которое передала функиця get:" << endl;
		cout << name << ' ' << type << ' ' << denomination << ' ' << count << endl;
	}





	delete[] obj;
	return 0;
}