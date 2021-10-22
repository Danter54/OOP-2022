#include "Accesories.h"

Accesories::Accesories()
{
	name = nullptr;
	type = '\0';
	denomination = 0;
	count = 0;
}	//Конструктор по умолчанию

Accesories::Accesories(string a, char& b, double& c, unsigned int& d)
{
	name = a;
	type = b;
	denomination = c;
	count = d;
}	//Конструктор с параметрами

Accesories::Accesories(const Accesories& temp)
{
	this->name = temp.name;
	this->type = temp.type;
	this->denomination = temp.denomination;
	this->count = temp.count;
}	//Конструктор копирования

void Accesories::linebuild()
{
	cout << "\n|-------------------------------------------------------------|\n";
}

void Accesories::head()
{
	cout << "_______________________________________________________________\n";
	cout << "|         Буддистские монастыри Японии периода Нара           |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|   Обозначение   | Тип |      Номинал      |   Количество    |\n";
	cout << "|-------------------------------------------------------------|\n";
}

void Accesories::output()
{
	cout<< "|" << setw(17) << name
		<< "|" << setw(5) << type
		<< "|" << setw(19) << denomination
		<< "|" << setw(17) << count << "|\n";
}
