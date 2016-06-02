/*
 * File:   UserPick.h
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 3:42 PM
 */

#include <iostream>
#include <string>
#include "ComputerPick.h"
using namespace std;

#ifndef USERPICK_H
#define USERPICK_H

class UserPick:public ComputerPick {
private:
    string pp[4];//The 4 colors the user chooses
public:
    UserPick();
    void setpick1(string);//Function to allow the user to enter their four colors
    void setpick2(string);//Function to allow the user to enter their four colors
    void setpick3(string);//Function to allow the user to enter their four colors
    void setpick4(string);//Function to allow the user to enter their four colors
    
};

#endif /* USERPICK_H */

