/* 
 * File:   Validation.cpp
 * Author: Heidy Tamayo
 * Created on June 7, 2016, 3:42 PM
 */

#include "Validation.h"

void Validation::setval(char x)//Function to test the input of the user and validate it
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

char Validation::getval()//Returns the value to main once validated
{
    return val;
}