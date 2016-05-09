/* 
 * File:   NumDays.h
 * Author: Heidy Tamayo
 * Created on May 9, 2016, 2:44 PM
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef NUMDAYS_H
#define	NUMDAYS_H

class NumDays {
public:
    void sethour(int);
    int gethour();
    float getday();
    NumDays(int);
    NumDays(){hourWd=0;}
    int operator+(NumDays);
    int operator-(NumDays);
    int operator--(int);
    int operator--();
    int operator++(int);
    int operator++();
private:
    int hourWd;
};

#endif	/* NUMDAYS_H */

