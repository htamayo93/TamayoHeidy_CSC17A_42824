/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 7:54 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>

//User Libraries
#include "NumDays.h"
#include "TimeOff.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    cout<<fixed<<setprecision(2);
    
    //Declare and initialize the variables
    TimeOff info;
    string name;
    int id;
    int days;
    int check;
    NumDays msick,sick;
    NumDays mvac,vac;
    NumDays muvac,uvac;
    
    
    cout<<"What is the employee's name?"<<endl;
    getline(cin,name);
    info.setname(name);
    
    cout<<"What is the employee's id number?"<<endl;
    cin>>id;
    info.setid(id);
    
    cout<<"What is the maximum amount of days the employee can take off if they are sick?"<<endl;
    cin>>days;
    msick.setday(days);
    info.setmaxsick(msick);
    
    cout<<"What is the amount of sick days the employee took off?"<<endl;
    cin>>days;
    sick.setday(days);
    info.setsick(sick);
    
    cout<<"What is the maximum amount of days the employee can take off for vacation?"<<endl;
    cin>>days;
    while(days>30)
    {
        cout<<"ERROR:You cannot have taken more than 240 hours of paid vacation."<<endl;
        cout<<"Please enter the correct number of days."<<endl;
        cin>>days;
    }
    mvac.setday(days);
    info.setmaxvac(mvac);
    
    cout<<"What is the amount of days the employee took off for vacation?"<<endl;
    cin>>days;
    vac.setday(days);
    info.setvac(vac);
    
    cout<<"What is the maximum amount of days the employee can take off for unpaid vacation?"<<endl;
    cin>>days;
    muvac.setday(days);
    info.setmaxuvac(muvac);
    
    cout<<"What is the amount of unpaid vacation days that the employee took off?"<<endl;
    cin>>days;
    uvac.setday(days);
    info.setuvac(uvac);
    
    cout<<"Employee's name: "<<info.getname()<<endl;
    cout<<"Employee's ID #:"<<info.getid()<<endl;
    cout<<"The maximum number of days allowed for sick days off: "<<info.getmaxsick().getday()<<endl;
    cout<<"The number of days "<<info.getname()<<" took off for sick days:"<<info.getsick().getday()<<endl;
    cout<<"The maximum number of days allowed for vacation days:"<<info.getmaxvac().getday()<<endl;
    cout<<"The number of days "<<info.getname()<<" took off for vacation days:"<<info.getvac().getday()<<endl;
    cout<<"The maximum number of days allowed for unpaid vacation days:"<<info.getmaxuvac().getday()<<endl;
    cout<<"The number of days "<<info.getname()<<" took off for unpaid vacation days:"<<info.getuvac().getday()<<endl;
    
    
    //Exit stage right
    return 0;
}

