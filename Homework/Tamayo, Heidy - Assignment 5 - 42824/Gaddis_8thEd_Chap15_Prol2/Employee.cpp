/* 
 * File:   Employee.cpp
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:34 PM
 */

#include "Employee.h"

Employee::Employee() 
{
    name="";
    number=0;
    hired=0;
}

Employee::Employee(string names, int numbers, int hires )
{
    setname(names);
    setnumber(numbers);
    sethired(hires);
}

void Employee::setname(string x)
{
    name=x;
}

string Employee::getname()
{
    return name;
}

void Employee::setnumber(int x)
{
    number=x;
}

int Employee::getnumber()
{
    return number;
}

void Employee::sethired(int x)
{
    hired=x;
}

int Employee::gethired()
{
    return hired;
}
