/* 
 * File:   Validation.cpp
 * Author: Heidy Tamayo
 * Created on June 7, 2016, 3:42 PM
 */

#include "Validation.h"

void Validation::setval(char x)
{
    if (x=='Y'||x=='C'||x=='N')
    {
        val=x;
    }
    else
    {
        throw Except();
    }       

}

char Validation::getval()
{
    return val;
}