/* 
 * File:   DayOfYear.h
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 11:01 PM
 */

#include <string>;
#include <iostream>;
using namespace std;

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class DayOfYear {
public:
    void print(int);
private:
    int day;
    static string month[12];
};

#endif /* DAYOFYEAR_H */

