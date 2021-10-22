#include "Header_Includer.h"
#include "A.h"

int main() {
	setlocale(LC_ALL,"RU");

	A obj;
	cin >> obj;
	cout << obj;
	cout<<"Size of char = "<<obj[5]<<endl;
	string a = "RTR-14-26";
	char b = 'T';
	double c = 1160.2563;
	unsigned int d = 2000;

	obj(a,b,c,d);
	cout << obj<<endl;
	return 0;
}