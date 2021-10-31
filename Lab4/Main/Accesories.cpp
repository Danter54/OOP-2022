#include "Accesories.h"

Accesories::Accesories()
{
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

string Accesories::Retname()
{
	return name;
}

ostream& operator<<(ostream& stream, Accesories& obj)
{
	stream << setw(17) << obj.name<<"|";
	stream << setw(5) << obj.type << "|";
	stream << setw(19) << obj.denomination << "|";
	stream << setw(17) << obj.count;
	return stream;
}
