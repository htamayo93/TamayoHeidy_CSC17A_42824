/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on April 27, 2016, 12:08 PM
 */

//System Libraries
#include <iostream>
#include <string>

//User Libraries
#include "Personal.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins Here
int main(int argc, char** argv) {
    //Declare and initialize the variables
    string name;
    string add;
    int age;
    int phone;
    char choice;
    Personal infomin;
    Personal infofam;
    Personal infofri;
    
    cout<<"Whose personal information will you be writing?"<<endl;
    cout<<"Enter f for family,m for mine, or r for friend."<<endl;
    cin>>choice;
    choice=toupper(choice);
    if(choice=='F')
    {
        cout<<"What is your family member's name?"<<endl;
        cin>>name;
        infofam.setname(name);
        cout<<"What is your family member's address?"<<endl;
        cin>>add;
        infofam.setadd(add);
        cout<<"What is your family member's age?"<<endl;
        cin>>age;
        infofam.setage(age);
        cout<<"What is your family member's Phone number?"<<endl;
        cin>>phone;
        infofam.setphone(phone);
    }
    else if(choice='M')
    {
        cout<<"What is your name?"<<endl;
        cin>>name;
        infomin.setname(name);
        cout<<"What is your address?"<<endl;
        cin>>add;
        infomin.setadd(add);
        cout<<"What is your age?"<<endl;
        cin>>age;
        infomin.setage(age);
        cout<<"What is your Phone number?"<<endl;
        cin>>phone;
        infomin.setphone(phone);
    }
    else if(choice='R')
    {
        cout<<"What is your friend's name?"<<endl;
        cin>>name;
        infofri.setname(name);
        cout<<"What is your friend's address?"<<endl;
        cin>>add;
        infofri.setadd(add);
        cout<<"What is your friend's age?"<<endl;
        cin>>age;
        infofri.setage(age);
        cout<<"What is your Phone friend's number?"<<endl;
        cin>>phone;
        infofri.setphone(phone);
    }
    
    //Exit stage right
    return 0;
}

