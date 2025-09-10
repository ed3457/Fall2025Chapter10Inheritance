#include "Employee.h"

void Employee::setSalary(float s)
{
	salary = s;
}

float Employee::getSalary()
{
	return salary;
}

void Employee::setPosition(string p)
{
	position = p;
}

string Employee::getPosition()
{
	return position;
}

Employee::Employee(string s, string n, string a, float sal, string pos):Person(s,n,a)
{
	setSalary(sal);
	setPosition(pos);
}

Employee::Employee():Employee("Not set","Not set","Not Set",2000,"Not assigned")
{
}

void Employee::printInfo()
{
	Person::printInfo();// call printInfo from the base class 
	cout << getPosition()<<endl;
	cout << getSalary()<<endl;

	
}
