/* 
 * File:   UserPick.cpp
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 3:42 PM
 */

#include "UserPick.h"

UserPick::UserPick() //Sets the value to blank
{
    pp[3]="";
}

void UserPick::setpick1(string x)//Brings the value from main to set the first value
{
    pp[0]=x;
}
void UserPick::setpick2(string x)//Brings the value from main to set the second value
{
    pp[1]=x;
}
void UserPick::setpick3(string x)//Brings the value from main to set the third value
{
    pp[2]=x;
}
void UserPick::setpick4(string x)//Bring the value from main to set the fourth value
{
    pp[3]=x;
}