//Library includes Here
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>

//User Libraries
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
#include "Absolute.h"
#include "Date2.h"
using namespace std;

//Global Constants 

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();

//Execution Begins Here
int main(int argc, char** argv) {
    int inN;
    bool reDsply=true;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break; 
        default:   {def(inN);
                    reDsply=false;}
        }
    }while(reDsply);
    return 0;
}

void Menu(){
    cout<<"\nMenu for Assignment 5"<<endl;
    cout<<"Type 1 for Gaddis_8thEd_Chap15_Prob1"<<endl;
    cout<<"Type 2 for Gaddis_8thEd_Chap15_Prob2"<<endl;
    cout<<"Type 3 for Gaddis_8thEd_Chap15_Prob3"<<endl;
    cout<<"Type 4 for Gaddis_8thEd_Chap16_Prob1"<<endl;
    cout<<"Type 5 for Gaddis_8thEd_Chap16_Prob4"<<endl;
    cout<<"Type anything else to exit"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
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
}

void problem2()
{
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
}

void problem3()
{
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
}

void problem4()
{
    //Declare and initialize the variables
    int day;
    int month;
    int year;
    Date2 info;
    bool correct=true;
    cout<<"Please enter the month."<<endl;
    cin>>month;
    
    while(correct)
    {
        try
        {
            info.setmonth(month);
            correct=false;
        }
        catch(Date2::except)
        {
            cout<<"You have entered an invalid number. Please try again."<<endl;
            cin>>month;
        }
    }
    correct=true;
    cout<<"Please enter the day."<<endl;
    cin>>day;
    while(correct)
    {
        try
        {
            info.setday(day);
            correct=false;
        }
        catch(Date2::except)
        {
            cout<<"You have entered an invalid number. Please try again."<<endl;
            cin>>day;
        }
    }
    cout<<"Please enter the year."<<endl;
    cin>>year;
    info.setyear(year);
    
    info.format1();
    info.format2();
    info.format3();
}

void problem5()
{
    float number;
    Absolute <float> change;
    
    cout<<"Enter a number that will have its absolute value found."<<endl;
    cin>>number;
    change.setAbs(number);
    
    cout<<change.findAbs();
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
