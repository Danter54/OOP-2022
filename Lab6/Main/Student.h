#pragma once
#include <string>
using namespace std;

class Student
{
private:
	 string name;
	 string lastname;
	 string middlename;
	 string fac;
	 string group;
	 double mark;
public:
	Student();

	void init();
	void show();
	void random_init();
	string ret_lastname();
	
	
};

