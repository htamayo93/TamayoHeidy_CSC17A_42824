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
    int limit2;
public:
    changelimit();
    void setlimit2(int);
    int getlimit2();
    changelimit operator++();
};

#endif /* CHANGELIMIT_H */