#pragma once
class Point
{
private:
	int x, y;

public:
	Point();
	Point(int ValueX, int ValueY);
	Point(Point& obj);

	void Set(int valueX, int valueY);
	void Sum_pow(int&sum,int&pow);



};

