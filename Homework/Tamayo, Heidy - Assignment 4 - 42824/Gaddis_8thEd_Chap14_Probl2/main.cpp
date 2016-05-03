/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 7:54 PM
 */

//System Libraries
#include <iostream>
#include <string>

//User Libraries
#include "DayOfYear.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize the variables
    int month;
    DayOfYear con;
    
    cout<<"Please enter the integer number you would like to have converted to month and day."<<endl;
    cout<<"Day ";
    cin>>month;
    
    con.print(month);
    
    //Exit stage right
    return 0;
}

