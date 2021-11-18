#pragma once
class COMP
{private:
	double x, y;
public:
	COMP() { x = 0; y = 0; }
	COMP(double a, double b) { x = a; y = b; }
	void set(double a, double b);
	void show();
	void write_in_file();


};

