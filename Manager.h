#pragma once
#include "Employee.h"
class Manager : public Employee
{
private: 
	float bonus;

public:
	float getBonus();
	void setBonus(float b);
	Manager();
	Manager(string s, string n, string a, float sal, string pos,float b);
	void printInfo();// override 
};

