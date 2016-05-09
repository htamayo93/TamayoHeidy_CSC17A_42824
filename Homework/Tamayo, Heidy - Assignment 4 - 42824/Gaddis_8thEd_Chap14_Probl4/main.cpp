/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 7:54 PM
 */

//System Libraries
#include <iostream>
#include <string>

//User Libraries
#include "NumDays.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize the variables
    int hourWd;
    float day;
    NumDays nd1(12),nd2(18);
    
    cout<<"How many hours did you work?"<<endl;
    cout<<"This will be converted to days so if you enter"<<endl;
    cout<<"8 hours that would equate to 1 day."<<endl;
    
    cin>>hourWd;
    NumDays nd3;
    nd3.sethour(hourWd);
    
    cout<<"The number of days worked was "<<nd3.getday()<<endl;
    
    cout<<"Total hours worked "<<nd1+nd2<<endl;
    cout<<"Hours difference "<<nd2-nd1<<endl;
    nd3++;
    
    cout<<"The number of days worked was "<<nd3.getday()<<endl;
    
    nd3--;
    cout<<"The number of days worked was "<<nd3.getday()<<endl;
    
    //Exit stage right
    return 0;
}

