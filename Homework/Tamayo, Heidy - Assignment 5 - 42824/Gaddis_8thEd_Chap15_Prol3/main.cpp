/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:33 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

//User Libraries
#include "TeamLeader.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    cout<<fixed<<setprecision(2);
    //Declare and initialize variables
    string name;
    int number;
    int hire;
    int shift;
    float pay;
    int bonus;
    int hoursR;
    int hoursT;

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
    
    cout<<"What is the monthly bonus the Team Leader receives?"<<endl;
    cin>>bonus;
    
    cout<<"What is the required hours for the Team Leader?"<<endl;
    cin>>hoursR;
    
    cout<<"What is the hours the Team Leader Trained?"<<endl;
    cin>>hoursT;
            
    
    TeamLeader info(name,number,hire,shift,pay,bonus,hoursR,hoursT);
    
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
    cout<<"Monthly bonus: $"<<info.getbonus()<<endl;
    cout<<"Hours required for training: "<<info.gethrR()<<endl;
    cout<<"Hours trained: "<<info.gethrT()<<endl;
    
    //Exit Stage Right
    return 0;
}

