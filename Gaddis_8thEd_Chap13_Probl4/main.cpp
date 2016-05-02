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
    string phone;
    char choice;
    Personal mine;
    Personal family;
    Personal friends;
    
    cout<<"Whose personal information will you be writing?"<<endl;
    cout<<"Enter f for family,m for mine, or r for friend."<<endl;
    cin>>choice;
    choice=toupper(choice);
    cin.ignore();
    if(choice=='F')
    {
        cout<<"What is your family member's name?"<<endl;
        getline(cin,name);
        family.setname(name);
        cout<<"What is your family member's address?"<<endl;
        getline(cin,add);
        family.setadd(add);
        cout<<"What is your family member's age?"<<endl;
        cin>>age;
        family.setage(age);
        cout<<"What is your family member's Phone number?"<<endl;
        cin.ignore();
        getline(cin,phone);
        family.setphone(phone);
        
        cout<<endl<<endl<<endl;
        cout<<"Information entered:"<<endl;
        cout<<"Name: "<<family.getname()<<endl;
        cout<<"Address: "<<family.getadd()<<endl;
        cout<<"Age: "<<family.getage()<<endl;
        cout<<"Phone Number: "<<family.getphone()<<endl;
    }
    else if(choice=='M')
    {
        cout<<"What is your name?"<<endl;
        getline(cin,name);
        mine.setname(name);
        cout<<"What is your address?"<<endl;
        getline(cin,add);
        mine.setadd(add);
        cout<<"What is your age?"<<endl;
        cin>>age;
        mine.setage(age);
        cout<<"What is your Phone number?"<<endl;
        cin.ignore();
        getline(cin,phone);
        mine.setphone(phone);
        
        cout<<endl<<endl<<endl;
        cout<<"Information entered:"<<endl;
        cout<<"Name: "<<mine.getname()<<endl;
        cout<<"Address: "<<mine.getadd()<<endl;
        cout<<"Age: "<<mine.getage()<<endl;
        cout<<"Phone Number: "<<mine.getphone()<<endl;
    }
    else if(choice=='R')
    {
        cout<<"What is your friend's name?"<<endl;
        getline(cin,name);
        friends.setname(name);
        cout<<"What is your friend's address?"<<endl;
        getline(cin,add);
        friends.setadd(add);
        cout<<"What is your friend's age?"<<endl;
        cin>>age;
        friends.setage(age);
        cout<<"What is your Phone friend's number?"<<endl;
        cin.ignore();
        getline(cin,phone);
        friends.setphone(phone);
        
        cout<<endl<<endl<<endl;
        cout<<"Information entered:"<<endl;
        cout<<"Name: "<<friends.getname()<<endl;
        cout<<"Address: "<<friends.getadd()<<endl;
        cout<<"Age: "<<friends.getage()<<endl;
        cout<<"Phone Number: "<<friends.getphone()<<endl;
    }
    else
    {
        cout<<"Please restart and enter a correct letter choice."<<endl;
    }
    //Exit stage right
    return 0;
}

