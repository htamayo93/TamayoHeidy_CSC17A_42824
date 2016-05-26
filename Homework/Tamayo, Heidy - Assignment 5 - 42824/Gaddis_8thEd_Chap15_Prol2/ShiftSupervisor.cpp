/* 
 * File:   ShiftSupervisor.cpp
 * Author: 
 * Created on May 26, 2016, 3:24 PM
 */

#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor() 
{
    salary=0;
    bonus=0;
}

ShiftSupervisor::ShiftSupervisor(string names,int numbers,int hires, int bonuses, int sal):Employee(names,numbers,hires)
{
    setbonus(bonuses);
    setsalary(sal);
}

void ShiftSupervisor::setsalary(int x)
{
    salary=x;
}

int ShiftSupervisor::getsalary()
{
    return salary;
}

void ShiftSupervisor::setbonus(int x)
{
    bonus=x;
}

int ShiftSupervisor::getbonus()
{
    return bonus;
}
