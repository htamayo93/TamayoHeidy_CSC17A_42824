/* 
 * File:   Car.cpp
 * Author: Heidy Tamayo
 * Created on April 27, 2016, 12:16 PM
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef PERSONAL_H
#define	PERSONAL_H

class Personal {
public:
    void setname(string);
    string getname();
    void setadd(string);
    string getadd();
    void getage(int);
    int setage();
    void getphone(int);
    int setphone();
   
private:
    string name;
    string add;
    int age;
    int phone;
};

#endif	/* PERSONAL_H */

