/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 12:15 PM
 */

//System Libraries
#include <iostream>
#include "Date.h"
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins Here
int main(int argc, char** argv) {

    //Declare and initialize the variables
    int day;
    int month;
    int year;
    Date info;
    cout<<"Please enter the month."<<endl;
    cin>>month;   
    while(month>12||month<1)
    {
        if(month>12||month<1)
        {
            cout<<"Error:Please enter a correct month."<<endl;
        }
        cin>>month;
    }
    info.setmonth(month);
    cout<<"Please enter the day."<<endl;
    cin>>day;
    
    while(day>31||day<1)
    {
        if(day>31||day<1)
        {
            cout<<"Error:Please enter a correct day."<<endl;
        }
        cin>>day;
    }
    info.setday(day);
    cout<<"Please enter the year."<<endl;
    cin>>year;
    info.setyear(year);
    
    info.format1();
    info.format2();
    info.format3();
    
    
    //Exit stage right
    return 0;
}

