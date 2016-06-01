/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:33 PM
 */

//System Libraries
#include <iostream>

//User Libraries
#include "ProductionWorker.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    string name;
    int number;
    int hire;
    int shift;
    float pay;

    cout<<"What is the name of the employee?"<<endl;
    cin>>name;
    
    cout<<"What is the employee's number?"<<endl;
    cin>>number;

    cout<<"On what day was the employee hired?Enter day out of 365."<<endl;
    cin>>hire;
 
    cout<<"What shift does the employee work. 1 For day and 2 for Night."<<endl;
    cin>>shift;

    cout<<"What is the hourly pay rate for the employee?"<<endl;
    cin>>pay;
    
    ProductionWorker info(name,number,hire,shift,pay);
    
    cout<<"Employee's name: "<<info.getname()<<endl;
    cout<<"Employee's number: #"<<info.getnumber()<<endl;
    cout<<"Employee's Hired date: "<<info.gethired()<<endl;
    cout<<"Employee's Shift: ";
    if(info.getshift()==1)
    {
        cout<<"Day"<<endl;
    }
    else
    {
        cout<<"Night"<<endl;
    }
    cout<<"Hourly pay rate: $"<<info.gethourpr()<<endl;
    
    //Exit Stage Right
    return 0;
}

