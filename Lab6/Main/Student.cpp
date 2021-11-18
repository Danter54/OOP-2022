#include "Student.h"
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

Student::Student()
{
	name = "";
	lastname = "";
	middlename = "";
	fac = "";
	group = "";
	mark = 0;
}

void Student::init()
{
	cout << "Введите ФИО, факультет, группу, оценку: ";
	cin >>lastname>>name>>middlename>>fac>>group>>mark ;
}

void Student::show()
{
	string fullname = lastname+' '+name+' '+middlename;
	string fac_group = fac + '-' + group;
	cout << '|' << setw(38) << fullname << '|' << setw(13) << fac << '|' << setw(10) << fac_group << '|' << setw(11) <<setprecision(2) <<mark << '|'<<endl;
}

void Student::random_init()
{
	srand(rand());
	string name[5] = { "Артем","Иван","Павел","Сергей","Кирилл" };
	string lastname[5] = { "Данилевский","Палий","Артеменко","Иванов","Куц" };
	string middlename[5] = { "Андреевич","Иванович","Петрович","Сергеевич","Александрович" };
	string fac[5] = {"КН","БЭМ","Е","О","ХТ"};
	string group[5] = {"320В","221А","331Г","421Б","332Г"};

	this->name = name[rand()%5];

	this->lastname = lastname[rand()%5];

	this->middlename = middlename[rand() % 5];

	this->fac = fac[rand()%5];

	this->group = group[rand() % 5];

	mark = (rand()%5);
}

string Student::ret_lastname()
{
	return lastname;
}
