#pragma once
#include <iostream>
using namespace std;
template <typename T>
class Array_class
{
private:
	T* data;
	int size;
	int ind;
public:
	Array_class() {
		size = 100;
		ind = 0;
		data = new T[size];
	}
	~Array_class() {
		delete[] data;
	}
	void add_elem(T a) {
		if (ind>100) {
			cout << "Выход за пределы массива!!!\n";
			return;
		}
		data[ind] = a;
		ind++;
	}

	T sum() {
		T temp = 0;

		for (int i = 0; i < ind; i++) {
			temp += data[i];
		}
		return temp;
	}

	T arraise() {
		return sum() / ind;
	}

	void show() {
		for (int i = 0; i < ind; i++) {
			cout <<data[i]<< " ";
		}
		cout << endl;
	}

	T& operator [](const int index) {
		if (index>ind) {
			cout << "Выход за пределы массива!!!\n";
				return data[0];
		}
		T temp = data[0];
		for (int i = 1; i < index;i++) {
			if (data[i]>temp) {
				temp = data[i];
			}
		}
		return temp;
	}
};

