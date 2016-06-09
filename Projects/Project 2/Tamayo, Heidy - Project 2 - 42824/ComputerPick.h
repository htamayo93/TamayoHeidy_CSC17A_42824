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
    static string com[2][4];//string of the colors the computer can pick from
    string cp[4];//The choices the computer has
public:
    ComputerPick();//Sets the color to blanks
    void comGen();//Function to generate the 4 random colors from the computer
    void choice();//Function to show the user the colors avaliable
    string getcomp1();//Gets the first color pick to the main
    string getcomp2();//Gets the second color pick to the main
    string getcomp3();//Gets the third color pick to the main
    string getcomp4();//Gets the fourth color pick to the main
};

#endif /* COMPUTERPICK_H */