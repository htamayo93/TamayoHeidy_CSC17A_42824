/* 
 * File:   NumDays.cpp
 * Author: Heidy Tamayo
 * Created on May 9, 2016, 2:44 PM
 */

#include "NumDays.h"
NumDays::NumDays()
{
    hourWd=0;
}

void NumDays::sethour(int x)
{
    hourWd=x;
}

int NumDays::gethour()
{
    return hourWd;
}
NumDays::NumDays(int hours)
{
    hourWd=hours;
}
float NumDays::getday()
{
    float day;
    day=static_cast<float>(hourWd)/8;
    return day;
}
int NumDays::operator +(NumDays right)
{
    return this->hourWd+right.hourWd;
}
int NumDays::operator -(NumDays right)
{
    return this->hourWd-right.hourWd;
}
int NumDays::operator ++(int dummy)
{
   hourWd++;
   return hourWd;
}
int NumDays::operator ++()
{
    hourWd++;
    return hourWd;
}
int NumDays::operator --(int dummy)
{
    hourWd--;
    return hourWd;
}
int NumDays::operator --()
{
    hourWd--;
    return hourWd;
}