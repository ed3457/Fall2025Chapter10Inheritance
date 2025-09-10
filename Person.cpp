#include "Person.h"

void Person::setSSN(string s)
{
	ssn = s;
}

string Person::getSSN()
{
	return ssn;
}

void Person::setName(string n)
{
	name = n;
}

string Person::getName()
{
	return name;
}

void Person::setAddress(string a)
{
	address = a;
}

string Person::getAddress()
{
	return address;
}

void Person::printInfo()
{ 
	cout << "SSN:" << getSSN()<<endl;
	cout << "Name:" << getName() << endl;
	cout << "Address:" << getAddress() << endl;
}

Person::Person():Person("Not set", "Not set", "Not set")
{
}

Person::Person(string s, string n, string a)
{
	setSSN(s);
	setAddress(a);
	setName(n);

}
