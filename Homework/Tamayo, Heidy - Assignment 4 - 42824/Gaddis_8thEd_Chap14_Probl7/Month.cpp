/* 
 * File:   Month.cpp
 * Author: Heidy Tamayo
 * Created on May 11, 2016, 2:31 PM
 */

#include "Month.h"

Month::Month() 
{
    month=1;
    name="January";
}
void Month::setname(string x)
{
    name=x;
}
string Month::getname()
{
    return name;
}
void Month::setmonth(int x)
{
    month=x;
}
int Month::getmonth()
{
    return month;
}

int Month::operator ++(int a)
{
    month++;
    return month;
}

int Month::operator ++()
{
    month++;
    return month;
}

int Month::operator --(int a)
{
    month--;
    if (month==0)
    {
        month=12;
    }
    return month;
}

int Month::operator --()
{
     month--;
    if (month==0)
    {
        month=12;
    }
    return month;
}
