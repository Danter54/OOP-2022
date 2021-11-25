#pragma once

template <typename T>

class Array_Class
{
private:
	T *mas=nullptr;
	int ind;
	int size;
public:
	Array_Class() {
		size = 100;
		ind = 0;
		mas = new T[size];
	}
	void add_elem(T a) {
		if (ind>size) {
			std::cout << "Выход за пределы массива!!!\n";
		}
		mas[ind] = a;
		ind++;
	}

};

