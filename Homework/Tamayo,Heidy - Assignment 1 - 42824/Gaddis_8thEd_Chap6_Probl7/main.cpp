/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: Converts Fahrenheit to Celsius from 0 to 20 degrees 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void celsius(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float faren=20;
    
    //Output of program description 
    cout<<"This program will convert the Fahrenheit temperature entered by the user."<<endl;
    cout<<"This will then be converted to Celsius."<<endl;
   celsius(faren);//Function that converts the Fahrenheit to Celsius
    
 return 0;
}

void celsius(float faren)
{
    //Sets the decimal of the Celsius to two places
    cout<<fixed<<setprecision(2);
    float cel;
    
    //For loop that repeats the calculation of Celsius from Fahrenheit until the end
    for (int i=0;i<=faren;i++)
    { 
        cel=5*(i-32);
        cel=cel/9;
        
        //Output of results
        cout<<i<<" degrees Fahrenheit converted to Celsius is "<<cel<<" degrees Celsius."<<endl;
    }
}
