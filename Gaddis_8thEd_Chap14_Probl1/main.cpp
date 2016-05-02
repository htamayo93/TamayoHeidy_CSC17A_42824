/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 2:35 PM
 */

//System Libraries
#include <iostream>

//User Libraries
#include "Numbers.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize the variables
    int number;
    Numbers convert;
    
    cout<<"Please enter the number you would like converted."<<endl;
    cin>>number;
    
    if(number<9999||number>0)
    {
        cout<<"Error:Please enter a valid number."<<endl;
    }
    else
    {
        convert.print();
    }
    //Exit stage right
    return 0;
}

