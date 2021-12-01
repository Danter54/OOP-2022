#pragma once
#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
	int sum;
public:
	Point() { x = 0; y = 0; sum = x+y; }
	Point(int a, int b) { x = a; y = b; sum = x+y; }
	void set(int a, int b) { 
		x = a; y = b; sum = x+y;
	};
	friend ostream& operator << (ostream& os, const Point date);
	friend bool operator ==(const Point&a, const Point& b);
};

