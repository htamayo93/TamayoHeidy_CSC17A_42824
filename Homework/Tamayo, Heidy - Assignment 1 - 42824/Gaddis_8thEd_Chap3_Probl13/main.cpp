/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: Converts the amount of dollars inputted to yen and euros.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const float YEN_PER_DOLLAR=98.93f;
    const float EUROS_PER_DOLLAR=0.74f;
    float dollars,yen,euro;
    
    //Output of program description and the input of the Celsius temperature. 
    cout<<"This program will convert the amount of dollars entered to the Japanese";
    cout<<" yen and to Euros."<<endl;
    cout<<"Please enter the amount of dollars you would like to have converted."<<endl;
    cin>>dollars;
    
    //Conversion of dollars to yen
    yen=YEN_PER_DOLLAR*dollars;
    
    //Conversion of dollars to euros
    euro=EUROS_PER_DOLLAR*dollars;
    
    //Output of results
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"The amount of dollars entered was $"<<dollars<<"."<<endl;
    cout<<"In yen this amount is "<<yen<<" yen."<<endl;
    cout<<"In Euros this amount is "<<euro<<" euros."<<endl;
    
    //Exit stage right
    return 0;
}
