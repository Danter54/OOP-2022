#include"Header_Includer.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");

	int x, y;
	int sum, pow;

	cout << "������� �������� � � �: ";
	cin >> x >> y;
	Point obj;
	obj.Set(x,y);
	obj.Sum_pow(sum,pow);

	cout << "�� ������ �������� � = " << x << ", � �������� � = " << y<<endl;
	cout << "������������ ����� - "<<pow<<", ����� ����� - "<<sum<<endl;

}