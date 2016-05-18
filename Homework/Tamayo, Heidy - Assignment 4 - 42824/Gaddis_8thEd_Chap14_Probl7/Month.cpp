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
    else if(name=='JANUARY'||name=='january'||name=='January')
    {
        cout<<"1"<<endl;
    }
    else if(name=='FEBRUARY'||name=='february'||name=='January')
    {
        cout<<"1"<<endl;
    }
}