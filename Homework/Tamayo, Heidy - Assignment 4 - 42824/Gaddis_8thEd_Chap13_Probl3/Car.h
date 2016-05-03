/* 
 * File:   Car.h
 * Author: rcc
 *
 * Created on April 27, 2016, 12:16 PM
 */

#include <string>
#include <iostream>
using namespace std;
#ifndef CAR_H
#define	CAR_H

class Car {
private:
    int year;
    string make;
    int speed;
public:
    Car();
    void setmodel(int);
    int getmodel();
    void setmake(string);
    string getmake();
    int accel();
    int brake();
};

#endif	/* CAR_H */

