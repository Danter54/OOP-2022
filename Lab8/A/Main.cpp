#include <iostream>

template <class Type1, class Type2>

class myclass {
public:
	Type1 i;
	Type2 j;
public:
	myclass(Type1 a, Type2 b) {
		i = a; j = b;
	}
	void show() {
		std::cout << i << " " << j << '\n';
	}

	Type1 sum() {
		return i + j;
	}

};



int main() {

	myclass <int, double> obj1(10,13.25);
	myclass <int, int> obj2(12,36);
	myclass <double, double> obj3(13.6, 14.6);
	myclass <double, int> obj4(14.6,16);

	obj1.show();
	std::cout << "1.Sum: " << obj1.sum() << std::endl;

	obj2.show();
	std::cout << "2.Sum: " << obj2.sum()<<std::endl;

	obj3.show();
	std::cout << "3.Sum: " << obj3.sum()<<std::endl;

	obj4.show();
	std::cout << "4.Sum: " << obj4.sum()<<std::endl;


	return 0;
}