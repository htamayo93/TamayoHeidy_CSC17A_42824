/* 
 * File:   changelimit.cpp
 * Author: Heidy Tamayo 
 * Created on June 3, 2016, 1:05 PM
 */

#include "changelimit.h"

changelimit::changelimit() 
{
    limit2=0;
}

void changelimit::setlimit2(int x)
{
    limit2=x;
}

int changelimit::getlimit2(){
    return limit2;
}

changelimit changelimit::operator++() 
{
    ++limit2;
    getlimit2();
    return *this;
}