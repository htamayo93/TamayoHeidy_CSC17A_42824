/* 
 * File:   NumDays.h
 * Author: Heidy Tamayo
 * Created on May 9, 2016, 2:44 PM
 */

#include <iostream>
using namespace std;

#ifndef NUMDAYS_H
#define	NUMDAYS_H

class NumDays {
public:
    NumDays();
    void setday(int);
    int getday();
private:
    int days;
};

#endif	/* NUMDAYS_H */