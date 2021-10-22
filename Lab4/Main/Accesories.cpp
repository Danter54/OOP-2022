#include "Accesories.h"

Accesories::Accesories()
{
	name = nullptr;
	type = '\0';
	denomination = 0;
	count = 0;
}	//����������� �� ���������

Accesories::Accesories(string a, char& b, double& c, unsigned int& d)
{
	name = a;
	type = b;
	denomination = c;
	count = d;
}	//����������� � �����������

Accesories::Accesories(const Accesories& temp)
{
	this->name = temp.name;
	this->type = temp.type;
	this->denomination = temp.denomination;
	this->count = temp.count;
}	//����������� �����������

void Accesories::linebuild()
{
	cout << "\n|-------------------------------------------------------------|\n";
}

void Accesories::head()
{
	cout << "_______________________________________________________________\n";
	cout << "|         ����������� ��������� ������ ������� ����           |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|   �����������   | ��� |      �������      |   ����������    |\n";
	cout << "|-------------------------------------------------------------|\n";
}

void Accesories::output()
{
	cout<< "|" << setw(17) << name
		<< "|" << setw(5) << type
		<< "|" << setw(19) << denomination
		<< "|" << setw(17) << count << "|\n";
}
