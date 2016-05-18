/* 
 * File:   Month.h
 * Author: Heidy Tamayo
 * Created on May 11, 2016, 2:31 PM
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef MONTH_H
#define	MONTH_H

class Month {
public:
    Month();
    void setname(string);
    string getname();
    void setmonth(int);
    int getmonth();
    void printn();
    Month operator ++(int);
    Month operator ++();
    Month operator --(int);
    Month operator --();
private:
    string name;
    int month;
    
};

#endif	/* MONTH_H */

