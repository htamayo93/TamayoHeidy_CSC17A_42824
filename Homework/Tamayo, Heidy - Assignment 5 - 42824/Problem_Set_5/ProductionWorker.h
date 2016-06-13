/* 
 * File:   ProductionWorker.h
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:40 PM
 */

#include <iostream>
#include "Employee.h"
using namespace std;

#ifndef PRODUCTIONWORKER_H
#define	PRODUCTIONWORKER_H

class ProductionWorker:public Employee
{
public:
    ProductionWorker();
    ProductionWorker(string,int,int,int,float);
    void setshift(int);
    int getshift();
    void sethourpr(float);
    float gethourpr(); 
private:
    int shift;
    float hourpr;
};

#endif	/* PRODUCTIONWORKER_H */

