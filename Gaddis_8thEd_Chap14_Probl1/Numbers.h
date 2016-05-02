/* 
 * File:   Numbers.h
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 2:35 PM
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef NUMBERS_H
#define	NUMBERS_H

class Numbers {
public:
    string lessThan20[20]={"zero","one","two","three","four","five","six","seven"
                           ,"eight","nine","ten","eleven","twelve","thirteen"
                           ,"fourteen","fifteen","sixteen","seventeen","eighteen"
                           ,"nineteen"};
    string hundred="hundred";
    string thousand="thousand";
    void print(int);
    
private:
    int number;
};

#endif	/* NUMBERS_H */

