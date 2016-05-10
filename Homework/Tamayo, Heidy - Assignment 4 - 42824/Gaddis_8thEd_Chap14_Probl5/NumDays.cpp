/* 
 * File:   NumDays.cpp
 * Author: Heidy Tamayo
 * Created on May 9, 2016, 2:44 PM
 */

#include "NumDays.h"
NumDays::NumDays()
{
    days=0;
}
void NumDays::setday(int x)
{
    days=x;
    while(days<0)
    {
        cout<<"ERROR:You have enter a wrong number for days."<<endl;
        cout<<"Please enter a valid number."<<endl;
        cin>>days;
    }
}

int NumDays::getday()
{
    return days;
}
