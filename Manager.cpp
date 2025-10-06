#include "Manager.h"

float Manager::getBonus()
{
    return bonus;
}

void Manager::setBonus(float b)
{
    bonus = b; 
}

Manager::Manager()
{
    setBonus(1000);
}

Manager::Manager(string s, string n, string a, float sal, string pos, float b):Employee(s,  n,  a, sal,  pos)
{
    setBonus(b);
}

void Manager::printInfo()
{
    Employee::printInfo();
    cout << "Bonus:" << getBonus() << endl;
}
