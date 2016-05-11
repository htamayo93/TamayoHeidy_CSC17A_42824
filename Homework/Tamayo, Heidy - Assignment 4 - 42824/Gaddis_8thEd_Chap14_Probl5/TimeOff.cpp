/* 
 * File:   TimeOff.cpp
 * Author: Heidy Tamayo
 * Created on May 10, 2016, 12:30 PM
 */

#include "TimeOff.h"

TimeOff::TimeOff()
{   
    name="";
    id=0;
}

void TimeOff::setname(string x)
{
    name=x;
}

string TimeOff::getname()
{
    return name;
}

void TimeOff::setid(int x)
{
    id=x;
}

int TimeOff::getid()
{
    return id;
}

void TimeOff::setmaxsick(NumDays msick) 
{
    this->maxsick=msick;    
}

NumDays TimeOff::getmaxsick()
{
    return maxsick;
}

void TimeOff::setsick(NumDays sick) 
{
    this->sick = sick;
}

NumDays TimeOff::getsick()
{
    return sick;
}

void TimeOff::setmaxvac(NumDays mvac) 
{
    this->maxvac=mvac;
}

NumDays TimeOff::getmaxvac()
{
    return maxvac;
}

void TimeOff::setvac(NumDays v) 
{
    this->vac=v;
}

NumDays TimeOff::getvac()
{
    return vac;
}

void TimeOff::setmaxuvac(NumDays muvac)
{
        this->maxuvac = muvac;
    
}

NumDays TimeOff::getmaxuvac()
{
        return maxuvac;    
}

void TimeOff::setuvac(NumDays uv) {
    this->uvac=uv;
}

NumDays TimeOff::getuvac()
{
    return uvac;
}