/* 
 * File:   Date.h
 * Author: Heidy Tamayo
 * Created on April 26, 2016, 12:22 PM
 */

#include <iostream>
using namespace std;

#ifndef DATE2_H
#define	DATE2_H

class Date2 {
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
    class except{};
    
private:
    int month;
    int day;
    int year;
    
};

#endif	/* DATE2_H */