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
    cout<<"The year of the car is ";
    cout<<info.getmodel()<<endl;
    cout<<"The make of the car is ";
    cout<<info.getmake();
    cout<<endl<<endl<<"The car will accelerate five times."<<endl;
    cout<<"The speed of the car after the first time is:"<<endl;
    info.accel();
    cout<<"The speed of the car after the second time is:"<<endl;
    info.accel();
    cout<<"The speed of the car after the third time is:"<<endl;
    info.accel();
    cout<<"The speed of the car after the fourth time is:"<<endl;
    info.accel();
    cout<<"The speed of the car after the fifth time is:"<<endl;
    info.accel();
    
    
    cout<<endl<<endl<<"The car will brake five times."<<endl;
    cout<<"The speed of the car after the first time is:"<<endl;
    info.brake();
    cout<<"The speed of the car after the second time is:"<<endl;
    info.brake();
    cout<<"The speed of the car after the third time is:"<<endl;
    info.brake();
    cout<<"The speed of the car after the fourth time is:"<<endl;
    info.brake();
    cout<<"The speed of the car after the fifth time is:"<<endl;
    info.brake();
    
    //Exit stage right
    return 0;
}

