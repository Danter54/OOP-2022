#include"Header_Includer.h"

using namespace std;

void shapka(void);
void linebuild(void);



int main() {
	setlocale(LC_ALL, "RU");

	string name;
	char type;
	double denomination;
	unsigned int count;
	int count_obj;

	int q1, q2;
	cout << "¬ведите количество объектов класса: ";
	cin >> count_obj;
	while (true)
	{
		if (count_obj<0 || count_obj>INT32_MAX) {
			cout << "Ќеверно ведЄнное значение!!!\n";
			cout << "¬ведите снова: ";
			cin >> count_obj;
		}
		else break;

	}

	Accessories obj[3];

	for (int i = 0; i < count_obj; i++) {
		cout << "¬ведите название, тип, номинал, количество комплектующих: ";
		cin >> name >> type >> denomination >> count;

		obj[i].setall(&name, type, denomination, count);
	}


	cout << "Ќазвание, тип, номинал, количество комплектующих:\n";

	for (int i = 0; i < count_obj; i++)
	{
		obj[i].showall();
	}

	cout << "ѕерегрузка оператора '='.\n";
	cout << "¬ведите номера экземпл€ров класса: замен€емый и замен€ющий>\n";
	cin >> q1;
	cin >> q2;
	if (isvalid(q1,q2,count_obj) != 0) exit(-1);
	obj[q1-1] = obj[q2-1];

	cout << "Ќазвание, тип, номинал, количество комплектующих:\n";

	for (int i = 0; i < count_obj; i++)
	{
		obj[i].showall();
	}

	cout << "\nѕерегрузка оператора соответстви€ '=='.\n";
	cout << "¬ведите номера экземпл€ров класса, которые надо сравнить>\n";
	cin >> q1;
	cin >> q2;
	if (isvalid(q1, q2, count_obj) != 0) exit(-1);
	if (obj[q1 - 1] == obj[q2 - 1]==0) {
		cout << "Ёкземпл€р класса " << q1 \
			<< " схож с Їкземпл€ром класса " << q2<<endl;
	}

	cout << "\nѕерегрузка оператора суммы '+'.\n";
	cout << "¬ведите номера экземпл€ров класса, которые надо сложить>\n";
	cin >> q1;
	cin >> q2;
	Accessories temp;
	if (isvalid(q1, q2,count_obj) != 0) exit(-1);

	temp = obj[q1-1] + obj[q2-1];
	temp.getall(&name,type, denomination, count);
	temp.showall();

	cout << "\nѕерегрузка оператора потокового ввода '>>'.";
	cout << "\n¬ведите номер экземпл€ра класса: ";
	cin >> q1;
	if(q1<1||q1>count_obj){ cout << "ќшибка! Ёкземпл€ра с таким индексом не существует.";  exit(-1); }
	cin >> obj[q1 - 1];

	cout << "\nѕерегрузка оператора потокового вывода '<<'.";
	cout << "\n¬ведите номер экземпл€ра класса: ";
	cin >> q1;
	if ((q1 > count_obj) || (q1 < 1)) { cout << "ќшибка! Ёкземпл€ра с таким индексом не существует."; exit(-1); }
	shapka();
	cout << obj[q1 - 1];
	linebuild();


	cout << "¬се объекты класса:\n";
	shapka();
	for (int i = 0; i < count_obj; i++) {
		cout << obj[i];
	}
	linebuild();
	return 0;
}


void shapka(void)
{
	cout << "_______________________________________________________________\n";
	cout << "|         Ѕуддистские монастыри японии периода Ќара           |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|      Ќазвание      | “ип |     Ќоминал     |    оличество   |\n";
	cout << "|-------------------------------------------------------------|\n";
}


void linebuild(void)
{
	cout << "\n|-------------------------------------------------------------|\n";
}