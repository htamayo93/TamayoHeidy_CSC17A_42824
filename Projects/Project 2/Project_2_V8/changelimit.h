/* 
 * File:   changelimit.h
 * Author: Heidy Tamayo
 * Created on June 3, 2016, 1:05 PM
 */

#include <iostream>
using namespace std;

#ifndef CHANGELIMIT_H
#define CHANGELIMIT_H

class changelimit {
private:
    int limit2;//limit that would change for incrementing
public:
    changelimit();//sets the value for the limit
    void setlimit2(int);//sets the limit from main into the variable
    int getlimit2();//brings back the new value to main
    changelimit operator++();//operator that increments the limit by one
};

#endif /* CHANGELIMIT_H */