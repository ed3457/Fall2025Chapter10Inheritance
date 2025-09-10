#pragma once
#include "Person.h"
class Employee :public Person
{
private:
	float salary;
	string position;
public:
	void setSalary(float s);
	float getSalary();

	void setPosition(string p);
	string getPosition();

	Employee();
	Employee(string s, string n, string a, float sal, string pos);

	void printInfo();// override 
};

