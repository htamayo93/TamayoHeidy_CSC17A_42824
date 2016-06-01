/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:33 PM
 */

//System Libraries
#include <iostream>

//User Libraries
#include "Employee.h"
#include "ShiftSupervisor.h"
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

    cout<<"What is the name of the shift supervisor?"<<endl;
    cin>>name;
    
    cout<<"What is number of the shift supervisor?"<<endl;
    cin>>number;
    
    cout<<"What is the day the supervisor was hired?Please enter the day out of 365."<<endl;
    cin>>hire;
    
    cout<<"What is the salary of the shift supervisor?"<<endl;
    cin>>salary;
    
    cout<<"What is the yearly bonus that the shift supervisor earns?"<<endl;
    cin>>bonus;

    ShiftSupervisor info(name,number,hire,bonus,salary);
    
    cout<<"Shift Supervisor's name: "<<info.getname()<<endl;
    cout<<"Shift Supervisor's number: #"<<info.getnumber()<<endl;
    cout<<"Day that the Shift Supervisor was hired: "<<info.gethired()<<endl;
    cout<<"Shift Supervisor's Salary: $"<<info.getsalary()<<endl;
    cout<<"Shift Supervisor's Yearly Bonus: $"<<info.getbonus()<<endl;
    
    //Exit Stage Right
    return 0;
}

