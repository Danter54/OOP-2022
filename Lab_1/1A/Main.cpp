#include"Header_Includer.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");

	int x, y;
	int sum, pow;

	cout << "Введите значение х и у: ";
	cin >> x >> y;
	Point obj;
	obj.Set(x,y);
	obj.Sum_pow(sum,pow);

	cout << "Вы задали значение х = " << x << ", и значение у = " << y<<endl;
	cout << "Произвдеение равно - "<<pow<<", сумма равна - "<<sum<<endl;

}