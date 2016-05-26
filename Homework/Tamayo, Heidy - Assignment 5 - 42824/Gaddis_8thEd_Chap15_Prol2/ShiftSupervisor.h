/* 
 * File:   ShiftSupervisor.h
 * Author: Heidy Tamayo
 * Created on May 26, 2016, 3:24 PM
 */

//#include <string>
//#include <iostream>
#include "Employee.h"
//using namespace std;

#ifndef SHIFTSUPERVISOR_H
#define	SHIFTSUPERVISOR_H

class ShiftSupervisor:public Employee 
{
public:
    ShiftSupervisor();
    ShiftSupervisor(string,int,int,int,int);
    void setbonus(int);
    int getbonus();
    void setsalary(int);
    int getsalary();
private:
    int salary;
    int bonus;
};

#endif	/* SHIFTSUPERVISOR_H */

