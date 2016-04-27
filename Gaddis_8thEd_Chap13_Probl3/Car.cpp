/* 
 * File:   Car.cpp
 * Author: Heidy Tamayo
 * Created on April 27, 2016, 12:16 PM
 */

#include "Car.h"
Car::Car()
{
    speed=0;
}
void Car::setmodel(int x)
{
    year=x;
}
int Car::getmodel()
{
    return year;
}
void Car::setmake(string x)
{
    make=x;
}

string Car::getmake()
{
    return make;
}
int Car::accel()
{
    speed+=5;
}
int Car::deccel()
{
    speed-=5;
}
