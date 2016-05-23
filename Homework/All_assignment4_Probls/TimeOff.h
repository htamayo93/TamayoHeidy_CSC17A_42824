/* 
 * File:   TimeOff.h
 * Author: Heidy Tamayo
 * Created on May 10, 2016, 12:30 PM
 */
#include<iostream>
#include<string>
#include "NumDays2.h"
using namespace std;

#ifndef TIMEOFF_H
#define	TIMEOFF_H

class TimeOff {
public:
    TimeOff();
    void setname(string);
    string getname();
    void setid(int);
    int getid();
    void setmaxsick(NumDays2);
    NumDays2 getmaxsick();
    void setsick(NumDays2);
    NumDays2 getsick();
    void setmaxvac(NumDays2);
    NumDays2 getmaxvac();
    void setvac(NumDays2);
    NumDays2 getvac();
    void setmaxuvac(NumDays2);
    NumDays2 getmaxuvac();
    void setuvac(NumDays2);
    NumDays2 getuvac();
private:
    NumDays2 maxsick;
    NumDays2 sick;
    NumDays2 maxvac;
    NumDays2 vac;
    NumDays2 maxuvac;
    NumDays2 uvac;
    string name;
    int id;
    int hours;
};
#endif	/* TIMEOFF_H */
