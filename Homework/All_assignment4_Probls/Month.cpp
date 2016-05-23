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

Month Month::operator ++(int a)
{
    month++;
    if (month==13)
    {
        month=1;
    }
    return *this;
}

Month Month::operator ++()
{
    month++;
    if(month==13)
    {
        month=1;
    }
    return *this;
}

Month Month::operator --(int a)
{
    month--;
    if (month==0)
    {
        month=12;
    }
    return *this;
}

Month Month::operator --()
{
     month--;
    if (month==0)
    {
        month=12;
    }
    return *this;
}

void Month::printn()
{
    if(month==1)
    {
        cout<<"January"<<endl;
    }
    else if (month==2)
    {
        cout<<"February"<<endl;
    }
    else if (month==3)
    {
        cout<<"March"<<endl;
    }
    else if (month==4)
    {
        cout<<"April"<<endl;
    }
    else if (month==5)
    {
        cout<<"May"<<endl;
    }
    else if (month==6)
    {
        cout<<"June"<<endl;
    }
    else if (month==7)
    {
        cout<<"July"<<endl;
    }
    else if (month==8)
    {
        cout<<"August"<<endl;
    }
    else if (month==9)
    {
        cout<<"September"<<endl;
    }
    else if (month==10)
    {
        cout<<"October"<<endl;
    }
    else if (month==11)
    {
        cout<<"November"<<endl;
    }
    else if (month==12)
    {
        cout<<"December"<<endl;
    }
}
void Month::printn2()
{
    if(month==1)
    {
        cout<<"1"<<endl;
    }
    else if (month==2)
    {
        cout<<"2"<<endl;
    }
    else if (month==3)
    {
        cout<<"3"<<endl;
    }
    else if (month==4)
    {
        cout<<"4"<<endl;
    }
    else if (month==5)
    {
        cout<<"5"<<endl;
    }
    else if (month==6)
    {
        cout<<"6"<<endl;
    }
    else if (month==7)
    {
        cout<<"7"<<endl;
    }
    else if (month==8)
    {
        cout<<"8"<<endl;
    }
    else if (month==9)
    {
        cout<<"9"<<endl;
    }
    else if (month==10)
    {
        cout<<"10"<<endl;
    }
    else if (month==11)
    {
        cout<<"11"<<endl;
    }
    else if (month==12)
    {
        cout<<"12"<<endl;
    }
}

void Month::printw()
{
    if(name=="JANUARY"||name=="january"||name=="January")
    {
        cout<<"1"<<endl;
        month=1;
    }
    else if(name=="FEBRUARY"||name=="february"||name=="February")
    {
        cout<<"2"<<endl;
        month=2;
    }
    else if(name=="MARCH"||name=="march"||name=="March")
    {
        cout<<"3"<<endl;
        month=3;
    }
    else if(name=="APRIL"||name=="april"||name=="April")
    {
        cout<<"4"<<endl;
        month=4;
    }
    else if(name=="MAY"||name=="may"||name=="May")
    {
        cout<<"5"<<endl;
        month=5;
    }
    else if(name=="JUNE"||name=="june"||name=="June")
    {
        cout<<"6"<<endl;
        month=6;
    }
    else if(name=="JULY"||name=="july"||name=="July")
    {
        cout<<"7"<<endl;
        month=7;
    }
    else if(name=="AUGUST"||name=="august"||name=="August")
    {
        cout<<"8"<<endl;
        month=8;
    }
    else if(name=="SEPTEMBER"||name=="september"||name=="September")
    {
        cout<<"9"<<endl;
        month=9;
    }
    else if(name=="OCTOBER"||name=="october"||name=="October")
    {
        cout<<"10"<<endl;
        month=10;
    }
    else if(name=="NOVEMBER"||name=="november"||name=="November")
    {
        cout<<"11"<<endl;
        month=11;
    }
    else if(name=="DECEMBER"||name=="december"||name=="December")
    {
        cout<<"12"<<endl;
        month=12;
    }  
}
