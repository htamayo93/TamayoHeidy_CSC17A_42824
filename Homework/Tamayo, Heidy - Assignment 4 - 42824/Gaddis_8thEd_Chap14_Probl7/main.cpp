/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 11, 2016, 2:28 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>

//User Libraries
#include "Month.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize the variables
    string name;
    int month;
    Month info;
    char choice;
    
    cout<<"Would you like to write the month in number or word format?"<<endl;
    cout<<"For number enter N, for word enter W. Anything else entered will exit the program."<<endl;
    cin>>choice;
    choice=toupper(choice);
    
    if(choice=='N')
    {
        cout<<"Please enter the number of the month."<<endl;
        cin>>month;
        info.setmonth(month);
        cout<<"The month is: ";
        info.printn();
        
        cout<<"If the month is decremented it is: ";
        --info;
        info.printn2();
        
        cout<<"If the month is incremented it is: ";
        ++info;
        info.printn2();        
    }
    else if (choice=='W')
    {
        cout<<"Please enter the month."<<endl;
        cin>>name;
        info.setname(name);
        
        cout<<"The month in numerical form: "<<endl;
        info.printw();
        
        cout<<"If the month is decremented it is: "<<endl;
        --info;
        info.printn();
        
        cout<<"If the month is incremented it is: "<<endl;
        ++info;
        info.printn();
    }
    else 
    {
        cout<<"The program will now exit."<<endl;
    }
    
    //Exit Stage Right
    return 0;
}

