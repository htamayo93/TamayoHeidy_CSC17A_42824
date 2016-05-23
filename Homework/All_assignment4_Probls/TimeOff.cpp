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

void TimeOff::setmaxsick(NumDays2 msick) 
{
    this->maxsick=msick;    
}

NumDays2 TimeOff::getmaxsick()
{
    return maxsick;
}

void TimeOff::setsick(NumDays2 sick) 
{
    this->sick = sick;
}

NumDays2 TimeOff::getsick()
{
    return sick;
}

void TimeOff::setmaxvac(NumDays2 mvac) 
{
    this->maxvac=mvac;
}

NumDays2 TimeOff::getmaxvac()
{
    return maxvac;
}

void TimeOff::setvac(NumDays2 v) 
{
    this->vac=v;
}

NumDays2 TimeOff::getvac()
{
    return vac;
}

void TimeOff::setmaxuvac(NumDays2 muvac)
{
        this->maxuvac = muvac;
    
}

NumDays2 TimeOff::getmaxuvac()
{
        return maxuvac;    
}

void TimeOff::setuvac(NumDays2 uv) {
    this->uvac=uv;
}

NumDays2 TimeOff::getuvac()
{
    return uvac;
}