/* 
 * File:   Date.cpp
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 12:22 PM
 */

#include "Date.h"

void Date::setday(int y) {
    day=y;
}
int Date::getday()
{
    return day;
}
void Date::setmonth(int x) {
    month=x;
}
int Date::getmonth()
{
    return month;
}
void Date::setyear(int z) {
    year=z;
}
int Date::getyear()
{
    return year;
}
void Date::format1()
{
    cout<<endl<<month<<"/"<<day<<"/"<<year<<endl;
}
void Date::format2()
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
void Date::format3()
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