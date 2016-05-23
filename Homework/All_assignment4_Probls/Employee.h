/* 
 * File:   Employee.h
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 2:43 PM
 */
#include <string>
#include <iostream>
using namespace std;

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

class Employee {
public:
    Employee();
    void setname(string);
    string getname();
    void setid(int);
    int getid();
    void setdepart(string);
    string getdepart();
    void setposit(string);
    string getposit();
private:
    string name;
    int idNum;
    string depart;
    string posit;
};

#endif	/* EMPLOYEE_H */