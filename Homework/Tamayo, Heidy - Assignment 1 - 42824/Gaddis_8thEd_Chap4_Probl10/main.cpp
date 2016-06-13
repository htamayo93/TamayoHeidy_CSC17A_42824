/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: Determines how many days are in the month based on the month and year inputted.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int month,year,days;//input of the month,years, calculates the days.
    
    //Output of program description
    cout<<"This program will determine the number of days there is in a month"<<endl;
    cout<<"based on the month and year inputted."<<endl;
    
    //Request of inputs of the month and year the user wants.
    cout<<"Please enter the month in a 1-12 format for the month wanted."<<endl;
    cin>>month;
    cout<<"Enter the year you want."<<endl;
    cin>>year;
    
    //If statement to only allow between the 0-12 months
    if (month<0||month>12)
    {
        //Output of results
        cout<<"Error:Please enter a valid month."<<endl;
    }
    else if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        //Output of results
        cout<<"There are 31 days."<<endl;
    }
    else if (month==2)
    {
        //If else statement to determine if the year is a leap year.
        if (year%100==0 && year%400==0)
        {
            //Output of results
            cout<<"There are 29 days."<<endl;
        }
        else if (year%100!=0 && year%4==0)
        {
            //Output of results
            cout<<"There are 29 days."<<endl;
        }
        else
        {
            //Output of results
            cout<<"There are 28 days."<<endl;
        }
    }
    else if (month==4||month==6||month==9||month==11)
    {
        
        //Output or results
        cout<<"There are 30 days."<<endl;
    }
    
    //Exit stage right
    return 0;
}
