/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: Converts the degrees Celsius to Fahrenheit. 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float cel,far;//Celsius,Fahrenheit
    
    //Output of program description and the input of the Celsius temperature. 
    cout<<"This program will convert the Celsius temperature inputted to Fahrenheit."<<endl;
    cout<<"Please enter the Celsius that you would like converted."<<endl;
    cin>>cel;
    
    //Conversion of Celsius to Fahrenheit
    far=(9*cel/5)+32;
    
    //Output of results
    cout<<"The degrees of Celsius inputted was "<<cel<<" degrees."<<endl;
    cout<<"This converted to Fahrenheit is "<<far<<" degrees."<<endl;
    
    //Exit stage right
    return 0;
}
