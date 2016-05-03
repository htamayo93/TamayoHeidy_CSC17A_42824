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
    
    void print(int);
    
private:
    int number;
    static string lessThan20[20];
};

#endif	/* NUMBERS_H */

