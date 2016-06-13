/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 9, 2016, 2:30 PM
 * Purpose: To create dynamically allocated memory and it brought back to main
 * in a function
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int *memory(int);

//Execution Begins Here
int main(int argc, char** argv) {
    int size;
    int *array;
    
    cout<<"Please enter the size of the array you would like to have allocated."<<endl;
    cin>>size;
    
    array=memory(size);
    
    //Exit stage right
    return 0;
}

int *memory(int size)
{
    int *values=new int[size];
    return values;
}
