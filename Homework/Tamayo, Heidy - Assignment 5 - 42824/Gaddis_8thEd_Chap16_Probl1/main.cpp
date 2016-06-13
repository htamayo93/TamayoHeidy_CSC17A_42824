/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 12:15 PM
 */

//System Libraries
#include <iostream>
#include "Date2.h"
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
    Date2 info;
    bool correct=true;
    cout<<"Please enter the month."<<endl;
    cin>>month;
    
    while(correct)
    {
        try
        {
            info.setmonth(month);
            correct=false;
        }
        catch(Date2::except)
        {
            cout<<"You have entered an invalid number. Please try again."<<endl;
            cin>>month;
        }
    }
    correct=true;
    cout<<"Please enter the day."<<endl;
    cin>>day;
    while(correct)
    {
        try
        {
            info.setday(day);
            correct=false;
        }
        catch(Date2::except)
        {
            cout<<"You have entered an invalid number. Please try again."<<endl;
            cin>>day;
        }
    }
    cout<<"Please enter the year."<<endl;
    cin>>year;
    info.setyear(year);
    
    info.format1();
    info.format2();
    info.format3();
    
    
    //Exit stage right
    return 0;
}

