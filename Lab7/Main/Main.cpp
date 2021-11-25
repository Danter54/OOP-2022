#include <iostream>
#include"Functions_Header.h"
#include "COMP.h"
#include <fstream>


int main() {
	int is_open = 0;
	int count = 0;
	setlocale(LC_ALL, "RU");

	Write_in_file(is_open,count);	//запись в файл чисел
	if (is_open==0) {
		return 0;
	}
	is_open = 0;
	double* mas = new double[count];

	Write_in_mas(mas,count, is_open);

	if (is_open == 0) {
		return 0;
	}
	COMP* obj = new COMP[count / 2];

	for (int k=0, i = 0, j = 1; k<count/2;k++,i+=2,j+=2) {
		obj[k].set(mas[i],mas[j]);
	}

	for (int i = 0; i < count / 2; i++) {
		obj[i].show();
	}

	for (int i = 0; i < count / 2; i++) {
		obj[i].write_in_file();
	}

	delete[]obj;
	delete[]mas;

	return 0;
}