#pragma once
#include <iostream>

class B1 {
	int a;
public:
	B1(int x) { a = x; }
	void show_b1() { std::cout << "B1 =" << a << std::endl; }
};

class B2 {
	int b;
public:
	B2(int y) { b = y; }
	void show_b2() { std::cout << "B2 =" << b << std::endl; }
};

class B3 {
	int c;
public:
	B3(int z) { c = z; }
	void show_b3() { std::cout << "B3 =" << c << std::endl; }
};

class D1 : public B1, public B2, protected B3 {
	int d;
public:
	D1(int x, int y, int z, int f) : B1(x), B2(y), B3(z) { d = f; };
	void show_d1() { std::cout << "d1 =" << d << std::endl; }
};

class D2 : public D1 {
	int e;
public:
	D2(int x, int y, int z, int f, int g) : D1(x, y, z, f) { e = g; }
	void show_d2() { std::cout << "d2 =" << e << std::endl; }

};