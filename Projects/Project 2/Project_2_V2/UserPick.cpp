/* 
 * File:   UserPick.cpp
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 3:42 PM
 */

#include "UserPick.h"

UserPick::UserPick() 
{
    pp[4]="";
}

void UserPick::setpick1(string x)
{
    pp[0]=x;
}
void UserPick::setpick2(string x)
{
    pp[1]=x;
}
void UserPick::setpick3(string x)
{
    pp[2]=x;
}
void UserPick::setpick4(string x)
{
    pp[3]=x;
}
