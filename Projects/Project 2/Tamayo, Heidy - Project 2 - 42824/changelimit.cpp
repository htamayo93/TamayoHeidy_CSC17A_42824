/* 
 * File:   changelimit.cpp
 * Author: Heidy Tamayo 
 * Created on June 3, 2016, 1:05 PM
 */

#include "changelimit.h"

changelimit::changelimit()//sets the variable 
{
    limit2=0;
}

void changelimit::setlimit2(int x)//Brings the value from main and is set 
{
    limit2=x;
}

int changelimit::getlimit2(){//Brings the value to main
    return limit2;
}

changelimit changelimit::operator++()//Operator that increments the limit by one
{
    ++limit2;
    getlimit2();
    return *this;
}