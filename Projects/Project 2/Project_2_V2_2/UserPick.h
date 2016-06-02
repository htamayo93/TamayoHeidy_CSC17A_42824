/* 
 * File:   UserPick.h
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 1:27 PM
 */

#include <iostream>
using namespace std;

#ifndef USERPICK_H
#define USERPICK_H

class UserPick {
public:
    void setanswer(char);
    char getanswer();
    void setchange(char);
    char getchange();
private:
    char answer,change;//The response of whether the user would like to 
                       //play again,take a hint, or change their number of 
                       //tries 

};

#endif /* USERPICK_H */

