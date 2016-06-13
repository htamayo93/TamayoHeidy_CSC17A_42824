/* 
 * File:   Date.cpp
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 12:22 PM
 */

#include "Date2.h"

void Date2::setday(int y) {
    day=y;
    if(day<1 || day>31)
    {
        throw except();
    }
}
int Date2::getday()
{
    return day;
}
void Date2::setmonth(int x) {
    month=x;
    if(month<1 || month>12)
    {
        throw except();
    }
}
int Date2::getmonth()
{
    return month;
}
void Date2::setyear(int z) {
    year=z;
}
int Date2::getyear()
{
    return year;
}
void Date2::format1()
{
    cout<<endl<<month<<"/"<<day<<"/"<<year<<endl;
}
void Date2::format2()
{
    if(month==1){cout<<"January ";}
    else if(month==2){cout<<"February ";}
    else if(month==3){cout<<"March ";}
    else if(month==4){cout<<"April ";}
    else if(month==5){cout<<"May ";}
    else if(month==6){cout<<"June ";}
    else if(month==7){cout<<"July ";}
    else if(month==8){cout<<"August ";}
    else if(month==9){cout<<"September ";}
    else if(month==10){cout<<"October ";}
    else if(month==11){cout<<"November ";}
    else if(month==12){cout<<"December ";}
    
    cout<<day<<", "<<year<<endl;
}
void Date2::format3()
{
    cout<<day;
    if(month==1){cout<<" January ";}
    else if(month==2){cout<<" February ";}
    else if(month==3){cout<<" March ";}
    else if(month==4){cout<<" April ";}
    else if(month==5){cout<<" May ";}
    else if(month==6){cout<<" June ";}
    else if(month==7){cout<<" July ";}
    else if(month==8){cout<<" August ";}
    else if(month==9){cout<<" September ";}
    else if(month==10){cout<<" October ";}
    else if(month==11){cout<<" November ";}
    else if(month==12){cout<<" December ";}
    cout<<year<<endl;
}