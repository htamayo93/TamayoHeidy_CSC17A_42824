/* 
 * File:   ComputerPick.h
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 11:46 AM
 * Generates the computer's random values
 */

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#ifndef COMPUTERPICK_H
#define COMPUTERPICK_H

class ComputerPick {
private:
    static string com[2][4];
    string cp[4];
public:
    ComputerPick();
    void comGen();//Function to generate the 4 random colors from the computer
    void choice();
    string getcomp1();
    string getcomp2();
    string getcomp3();
    string getcomp4();
};

#endif /* COMPUTERPICK_H */