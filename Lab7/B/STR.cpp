#include "STR.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <iterator>
#include <string>
#include <regex>

std::ofstream& operator<<(std::ofstream& out, STR const& curr)
{
	int len = curr.str.length();
	string nonupper_s = "";

	for (int i = 0; i < len;i++) {
		if (curr.str[i]<-64 ||curr.str[i]>-33 && curr.str[i]<48 ||curr.str[i]>57 && curr.str[i]<65 || curr.str[i]>90) {
			nonupper_s = nonupper_s + curr.str[i];
		}
	}

	out << "" << nonupper_s;

	return out;
}
