/* 
 * File:   NumDays.cpp
 * Author: Heidy Tamayo
 * Created on May 9, 2016, 2:44 PM
 */

#include "NumDays2.h"
NumDays2::NumDays2()
{
    days=0;
}
void NumDays2::setday(int x)
{
    days=x;
    while(days<0)
    {
        cout<<"ERROR:You have enter a wrong number for days."<<endl;
        cout<<"Please enter a valid number."<<endl;
        cin>>days;
    }
}

int NumDays2::getday()
{
    return days;
}
