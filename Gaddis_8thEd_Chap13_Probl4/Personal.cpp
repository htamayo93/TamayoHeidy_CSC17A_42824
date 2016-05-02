/* 
 * File:   Personal.cpp
 * Author: Heidy Tamayo
 * Created on April 27, 2016, 2:48 PM
 */

#include "Personal.h"

void Personal::setname(string x) 
{
    name=x;
}
string Personal::getname()
{
    return name;
}
void Personal::setadd(string x)
{
    add=x;
}
string Personal::getadd()
{
    return add;
}
void Personal::setage(int x)
{
    age=x;
}
int Personal::getage()
{
    return age;
}
void Personal::setphone(int x)
{
    phone=x;
}
int Personal::getphone()
{
    return phone;
}