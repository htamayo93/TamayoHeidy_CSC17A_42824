/* 
 * File:   Employee.cpp
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 2:43 PM
 */

#include "Employee.h"

Employee::Employee()
{
    name="";
    idNum=0;
    depart="";
    posit="";
}
void Employee::setname(string x) 
{
    name=x;
}
string Employee::getname()
{
    return name;
}
void Employee::setid(int x)
{
    idNum=x;
}
int Employee::getid()
{
    return idNum;
}
void Employee::setdepart(string x)
{
    depart=x;
}
string Employee::getdepart()
{
    return depart;
}
void Employee::setposit(string x)
{
    posit=x;
}
string Employee::getposit()
{
    return posit;
}
