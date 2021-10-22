#include "A.h"

ostream& operator<<(ostream& stream, A& o1)
{
	
	stream << "|" << setw(10) << o1.name << "  |  ";
	stream << setw(5) << o1.type << "|";
	stream << setw(18) << o1.denomination << "  |";
	stream << setw(17) << o1.count << "  |"<< endl;
	
	return stream;
}

istream& operator>>(istream& stream, A& o1)
{
	cout << "Введите Обозначение, тип, номинал, количество: \n";
	stream >> o1.name;
	stream >> o1.type;
	stream >> o1.denomination;
	stream >> o1.count;
	return stream;
}


A operator+(const A& obj1, const A& obj2)
{
	A temp;
	temp.name = obj1.name + obj2.name;
	temp.type = obj1.type;
	temp.denomination = obj1.denomination + obj2.denomination;
	temp.count = obj1.count + obj2.count;
	return temp;
}

A A::operator()(string a, char b, double c, unsigned int d)
{
	name = a;
	type = b;
	denomination = c;
	count = d;
	return*this;
}

bool A::operator==(const A& obj)
{
	if (name == obj.name && type == obj.type && denomination == obj.denomination && count == obj.count) {
		return true;
	} return false;
}

int& A::operator[](const int i)
{
	int temp;
	if (i<0 || i>name.length()) {
		cout << "Error\n"; exit(0);
	}
	else return temp=name.length();
}
