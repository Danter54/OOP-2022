#include <iostream>
#include <map>
#include "NAME.h"
#include "NUMBER.h"
using namespace std;

int main() {
	system("chcp 1251");
	string names[] = {"Вася","Антон","Сергей","Валерий","Игорь"};
	int numbers[] = {123456, 456982, 145236, 246789, 243658};

	map <NAME, NUMBER> map1;
	map <NAME, NUMBER>::iterator iter;

	int size = 0;
	cout << "Введите размер списка >> ";
	cin >> size;
	while (size<3 || size>5) {
		cin >> size;
	}
	for (int i = 0; i < size; i++) {
		map1.insert({NAME(names[i]),NUMBER(numbers[i])});
	}


	cout << "Список:\n";
	for (auto p = begin(map1); p != end(map1); p++) {
		cout << p->first << ' ' << p->second << endl;
	}
	string a;
	cout << "Введите ключ (Имя) >> ";
	cin >> a;
	iter = map1.find(a);
	if (iter == map1.end()) {
		cout << "Не найдено!\n";
	}
	cout << "Найдено: " << iter->first << '\t' << iter->second << endl;


	return 0;
}