/* 
 * File:   TimeOff.h
 * Author: Heidy Tamayo
 * Created on May 10, 2016, 12:30 PM
 */
#include<iostream>
#include<string>
#include "NumDays.h"
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
    void setmaxsick(NumDays);
    NumDays getmaxsick();
    void setsick(NumDays);
    NumDays getsick();
    void setmaxvac(NumDays);
    NumDays getmaxvac();
    void setvac(NumDays);
    NumDays getvac();
    void setmaxuvac(NumDays);
    NumDays getmaxuvac();
    void setuvac(NumDays);
    NumDays getuvac();
private:
    NumDays maxsick;
    NumDays sick;
    NumDays maxvac;
    NumDays vac;
    NumDays maxuvac;
    NumDays uvac;
    string name;
    int id;
    int hours;
};
#endif	/* TIMEOFF_H */
