#include <iostream>
#include "Point.h"
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int x, y;
	cout << "������� Point1 >>";
	cin >> x >> y;
	Point p1(x,y);
	cout << "������� Point2 >>";
	cin >> x >> y;
	Point p2(x,y);

	vector <Point> point_v1;
	vector <Point> point_v2;

	point_v1.push_back(p1);
	point_v2.push_back(p2);

	bool zn = point_v1 == point_v2;

	if (zn==true) {
		cout << "��� �����!\n";
	}
	else if (zn == false) {
		cout << "��� �� �����!\n";

	}

	return 0;
 }