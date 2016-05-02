/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 12:15 PM
 */

//System Libraries
#include <iostream>
#include <string>

//User Libraries
#include "Employee.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins Here
int main(int argc, char** argv) {

    //Declare and initialize the variables
    string name;
    int idNum;
    string depart;
    string posit;
    Employee info1;
    Employee info2;
    Employee info3;
    
    info1.setname("Susan Meyers");
    info1.setid(47899);
    info1.setdepart("Accounting");
    info1.setposit("Vice President");
    info2.setname("Mark Jones");
    info2.setid(391119);
    info2.setdepart("IT");
    info2.setposit("Programmer");
    info3.setname("Joy Rogers");
    info3.setid(81774);
    info3.setdepart("Manufacturing");
    info3.setposit("Engineer");
    
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"* Name           ID Number           Department           Position"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<info1.getname()<<"       "<<info1.getid()<<"             "<<info1.getdepart()<<"           "<<info1.getposit()<<endl;
    cout<<info2.getname()<<"         "<<info2.getid()<<"                 "<<info2.getdepart()<<"               "<<info2.getposit()<<endl;
    cout<<info3.getname()<<"         "<<info3.getid()<<"             "<<info3.getdepart()<<"           "<<info3.getposit()<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    //Exit stage right
    return 0;
}


