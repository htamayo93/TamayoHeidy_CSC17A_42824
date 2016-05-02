/* 
 * File:   Date.h
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 12:22 PM
 */

#include <iostream>
using namespace std;

#ifndef DATE_H
#define	DATE_H

class Date {
public:
    void setday(int x);
    int getday();
    void setmonth(int x);
    int getmonth();
    void setyear(int x);
    int getyear();
    void format1();
    void format2();
    void format3();
    
private:
    int month;
    int day;
    int year;
    
};

#endif	/* DATE_H */

