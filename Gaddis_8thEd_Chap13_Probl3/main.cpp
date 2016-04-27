/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on April 27, 2016, 12:08 PM
 */

//System Libraries
#include <iostream>
#include <string>
//User Libraries
#include "Car.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins Here
int main(int argc, char** argv) {
    //Declare and initialize the variables
    int year;
    string make;
    Car info;
    
    cout<<"Please enter the model year of the car."<<endl;
    cin>>year;
    info.setmodel(year);
    cout<<"Please enter the make of the car."<<endl;
    cin>>make;
    info.setmake(make);
    
    //Exit stage right
    return 0;
}

