/* 
 * File:   Employee.h
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:34 PM
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

class Employee {
public:
    Employee();
    Employee(string,int,int);
    void setname(string);
    string getname();
    void setnumber(int);
    int getnumber();
    void sethired(int);
    int gethired();
private:
    string name;
    int number;
    int hired;
};

#endif	/* EMPLOYEE_H */

