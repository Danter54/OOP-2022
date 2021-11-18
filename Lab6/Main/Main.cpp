#include <iostream>
#include "Student.h"
using namespace std;

void random(Student* obj, int col);
void output(Student*obj, int col);
void sort(Student* obj, int col);

int main() {
	system("chcp 1251");

	int switcher = 0;
	int init = 0;
	int col=0;
	int sorted = 0;
	int choice;

	Student* students=nullptr;

	while (true) {

		cout << "Выберите действие: \n";
		cout << "1-Создание объектов;\n";
		cout << "2-Сортировать\n";
		cout << "3-Вывод на экран\n";
		cout << "4-Выход из программы\n";
		cout << ">>";
		cin >> switcher;

		switch (switcher)
		{
		case(1):
			if (init==1) {
				cout << "Таблица уже заполнена!\n";
				break;
			}
			cout << "Сколько студентов выхотите создать >> ";
			cin >> col;

			if (col<=0) {
				cout << "Введите число больше 0\n";
				break;
			}

			students = new Student[col];
			cout << "Заполнить рандомно(0),вручную(1)>>";
			cin >> choice;
			if (choice==0) {
				init = 1;
				cout << "Заполнение...\n";
				random(students, col);
			}
			else if (choice == 1) {
				init = 1;
				for (int i = 0; i < col; i++) {
					students[i].init();
				}
			}
			else {
				cout << "Неверно введённое значение!\n";
				break;
			}


			break;
		case(2):
			if (init == 0) {
				cout << "Таблица не заполнена\n";
				break;
			}
			sort(students,col);
			sorted = 1;
			break;
		case(3):
			if (init==0) {
				cout << "Таблица не заполнена\n";
				break;
			}

			output(students, col);
			break;
		case(4):
			return 0;
			break;
		default:
			cout << "Неверно введённый вариант!!!\n";
			break;
		}
	}
}

void random(Student* obj, int col) {
	srand(time(NULL));
	for (int i = 0; i < col; i++) {
		obj[i].random_init();
	}
}

void output(Student *obj, int col) {
	cout << "                            Cтуденты: \n";
	cout << "-----------------------------------------------------------------------------\n";//38,13,10.11
	cout << "|                  ФИО                 |  Факультет  |  Группа  |    Бал    |\n";
	cout << "-----------------------------------------------------------------------------\n";
	for (int i = 0; i < col; i++) {
		obj[i].show();
	}
	cout << "-----------------------------------------------------------------------------\n";
}

void sort(Student* obj, int col) {
	Student temp;
	for (int i = 0; i < col;i++) {
		for (int j = i + 1; j < col; j++) {
			if (obj[i].ret_lastname()>obj[j].ret_lastname()) {
				temp = obj[i];
				obj[i] = obj[j];
				obj[j] = temp;
			}
		}
	}
}
