/* 
 * File:   ProductionWorker.cpp
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:40 PM
 */

#include "ProductionWorker.h"

ProductionWorker::ProductionWorker()
{
    shift=0;
    hourpr=0.0;
}

ProductionWorker::ProductionWorker(string names,int numbers,int hires,int shifts, float pay):Employee(names,numbers,hires)
{
    setshift(shifts);
    sethourpr(pay);
}

void ProductionWorker::setshift(int x)
{
    shift=x;
}

int ProductionWorker::getshift()
{
    return shift;
}

void ProductionWorker::sethourpr(float x)
{
    hourpr=x;
}

float ProductionWorker::gethourpr()
{
    return hourpr;
}
