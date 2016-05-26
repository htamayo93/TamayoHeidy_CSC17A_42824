/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:33 PM
 */

//System Libraries
#include <iostream>

#include "Employee.h"
#include "ShiftSupervisor.h"

//User Libraries

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    string name;
    int number;
    int hire;
    int salary;
    int bonus;

    cin>>name;
    
    cin>>number;
    
    cin>>hire;

    cin>>salary;
    
    cin>>bonus;

    ShiftSupervisor info(name,number,hire,bonus,salary);
    
    cout<<info.getname();
    cout<<info.getbonus();
    //Exit Stage Right
    return 0;
}

