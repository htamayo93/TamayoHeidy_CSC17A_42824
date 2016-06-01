/* 
 * File:   TeamLeader.cpp
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 4:13 AM
 */

#include "TeamLeader.h"

TeamLeader::TeamLeader()
{
    bonus=0;
    reqTr=0;
    actTr=0;
}

TeamLeader::TeamLeader(string names,int numbers,int hires,int shifts, float pay,int bonuses,int train,int trained):ProductionWorker(names,numbers,hires,shifts,pay)
{
    setbonus(bonuses);
    sethrR(train);
    sethrT(trained);
}

void TeamLeader::setbonus(int x)
{
    bonus=x;
}

int TeamLeader::getbonus()
{
    return bonus;
}

void TeamLeader::sethrR(int x)
{
    reqTr=x;
}

int TeamLeader::gethrR()
{
    return reqTr;
}

void TeamLeader::sethrT(int x)
{
    actTr=x;
}

int TeamLeader::gethrT()
{
    return actTr;
}