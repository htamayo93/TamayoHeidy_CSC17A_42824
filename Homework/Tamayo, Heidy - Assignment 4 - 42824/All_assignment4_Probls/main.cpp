/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 7:54 PM
 */

//Library includes 
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

//user libraries
#include "Date.h"
#include "Employee.h"
#include "Car.h"
#include "Personal.h"
#include "RetailItem.h"
#include "Numbers.h"
#include "DayOfYear.h"
#include "NumDays.h"
#include "NumDays2.h"
#include "TimeOff.h"
#include "Month.h"
using namespace std;

//Global Constants 

//Function Prototypes 
void Menu();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();


//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    bool reDsply=true;
    do{
        Menu();
        cin>>inN;
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;
        case 8:    problem8();break;
        case 9:    problem9();break;
        case 10:   problem10();break;
        default:   {reDsply=false;}
        }
    }while(reDsply);
    return 0;
}

void Menu(){
    cout<<"Assignment 4"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 3 for problem 7"<<endl;
    cout<<"Type 4 for problem 8"<<endl;
    cout<<"Type 5 for problem 9"<<endl;
    cout<<"Type 6 for problem 10"<<endl;
    cout<<"Type another number to exit"<<endl;
}

/***********************Gaddis_8thEd_Chap13_Probl1*****************************/
void problem1()
{
    //Declare and initialize the variables
    int day;
    int month;
    int year;
    Date info;
    cout<<"Please enter the month."<<endl;
    cin>>month;   
    while(month>12||month<1)
    {
        if(month>12||month<1)
        {
            cout<<"Error:Please enter a correct month."<<endl;
        }
        cin>>month;
    }
    info.setmonth(month);
    cout<<"Please enter the day."<<endl;
    cin>>day;
    
    while(day>31||day<1)
    {
        if(day>31||day<1)
        {
            cout<<"Error:Please enter a correct day."<<endl;
        }
        cin>>day;
    }
    info.setday(day);
    cout<<"Please enter the year."<<endl;
    cin>>year;
    info.setyear(year);
    
    info.format1();
    info.format2();
    info.format3();
}

/***********************Gaddis_8thEd_Chap13_Probl2*****************************/
void problem2()
{
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
}

/***********************Gaddis_8thEd_Chap13_Probl3*****************************/
void problem3()
{
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
}

/***********************Gaddis_8thEd_Chap13_Probl4*****************************/
void problem4()
{
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
}

/***********************Gaddis_8thEd_Chap13_Probl5*****************************/
void problem5()
{
    //Declare and initialize the variables
    string descrpt;
    int unit;
    float price;
    RetailItem item1;
    RetailItem item2;
    RetailItem item3;
    
    item1.setdescrip("Jacket");
    item1.setunit(12);
    item1.setprice(59.95);
  
    item2.setdescrip("Designer Jeans");
    item2.setunit(40);
    item2.setprice(34.95);
    
    item3.setdescrip("Shirt");
    item3.setunit(20);
    item3.setprice(24.95);
    
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"                 Description           Units on Hand       Price           "<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"Item #1          "<<item1.getdescrip()<<"                     "<<item1.getunit()<<"            $"<<item1.getprice()<<endl;
    cout<<"Item #2          "<<item2.getdescrip()<<"             "<<item2.getunit()<<"            $"<<item2.getprice()<<endl;
    cout<<"Item #3          "<<item3.getdescrip()<<"                      "<<item3.getunit()<<"            $"<<item3.getprice()<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
}

/***********************Gaddis_8thEd_Chap14_Probl1*****************************/
void problem6()
{
    //Declare and initialize the variables
    int number;
    Numbers convert;
    
    cout<<"Please enter the number you would like converted."<<endl;
    cin>>number;
    
    if(number>9999||number<0)
    {
        cout<<"Error:Please enter a valid number."<<endl;
        cout<<"Exiting the Program."<<endl;
    }
    else
    {
        convert.print(number);
    }
}

/***********************Gaddis_8thEd_Chap14_Probl2*****************************/
void problem7()
{
    //Declare and initialize the variables
    int month;
    DayOfYear con;
    
    cout<<"Please enter the integer number you would like to have converted to month and day."<<endl;
    cout<<"Day ";
    cin>>month;
    
    con.print(month);
    cout<<endl;
}

/***********************Gaddis_8thEd_Chap14_Probl4*****************************/
void problem8()
{
    cout<<fixed<<setprecision(2);
    
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
    
    cout<<"The number of days worked was "<<nd3.getday()<<" for "<<nd3.gethour()<<" hours."<<endl;
    
    cout<<"Total hours worked after adding the value of one day to another was "<<nd1+nd2<<" hours."<<endl;
    cout<<"Between the two hour values there is a difference of "<<nd2-nd1<<"."<<endl;
    
    nd3++;
    cout<<"The number of days worked after incrementing it by 0.125 was "<<nd3.getday()<<"."<<endl;
    
    nd3--;
    cout<<"The number of days worked after decrementing it by 0.125 "<<nd3.getday()<<"."<<endl<<endl;
}

/***********************Gaddis_8thEd_Chap14_Probl5*****************************/
void problem9()
{
    cout<<fixed<<setprecision(2);
    
    //Declare and initialize the variables
    TimeOff info;
    string name;
    int id;
    int days;
    int check;
    NumDays2 msick,sick;
    NumDays2 mvac,vac;
    NumDays2 muvac,uvac;
    
    
    cout<<"What is the employee's name?"<<endl;
    cin.ignore();
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
    cout<<"The number of days "<<info.getname()<<" took off for unpaid vacation days:"<<info.getuvac().getday()<<endl<<endl;
}

/***********************Gaddis_8thEd_Chap14_Probl7*****************************/
void problem10()
{
    //Declare and initialize the variables
    string name;
    int month;
    Month info;
    char choice;
    
    cout<<"Would you like to write the month in number or word format?"<<endl;
    cout<<"For number enter N, for word enter W. Anything else entered will exit the program."<<endl;
    cin>>choice;
    choice=toupper(choice);
    
    if(choice=='N')
    {
        cout<<"Please enter the number of the month."<<endl;
        cin>>month;
        info.setmonth(month);
        cout<<"The month is: ";
        info.printn();
        
        cout<<"If the month is decremented it is: ";
        --info;
        info.printn2();
        
        cout<<"If the month is incremented it is: ";
        ++info;
        info.printn2();        
    }
    else if (choice=='W')
    {
        cout<<"Please enter the month."<<endl;
        cin>>name;
        info.setname(name);
        
        cout<<"The month in numerical form: "<<endl;
        info.printw();
        
        cout<<"If the month is decremented it is: "<<endl;
        --info;
        info.printn();
        
        cout<<"If the month is incremented it is: "<<endl;
        ++info;
        info.printn();
    }
    else 
    {
        cout<<"The program will now exit."<<endl;
    }
    cout<<endl;
}