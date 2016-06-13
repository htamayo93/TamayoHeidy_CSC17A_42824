/* 
 * File:   main.cpp
 * Author: heidy
 *
 * Created on June 9, 2016, 12:56 PM
 */

#include <iostream>
#include "Absolute.h"
using namespace std;


int main(int argc, char** argv) {
    float number;
    Absolute <float> change;
    
    cout<<"Enter a number that will have its absolute value found."<<endl;
    cin>>number;
    change.setAbs(number);
    
    cout<<change.findAbs();
    
    return 0;
}

