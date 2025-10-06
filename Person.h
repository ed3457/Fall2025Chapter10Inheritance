#pragma once
#include <string>
#include <iostream>
using namespace std; 

class Person
{
private:
	string ssn;
	string name;
	string address; 
public:
	void setSSN(string s);
	string getSSN();
	void setName(string n);
	string getName();
	void setAddress(string a);
	string getAddress();

	virtual void printInfo();
	Person();
	Person(string s, string n, string a);

};

