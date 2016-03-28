/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 28, 2016, 1:50 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants

//Function Prototypes
Array *fillAry(int);
void prntAry(Array *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Seed the random number generator
    srand(static_cast<unsigned int>(time (0)));
    
    //Declare and allocate the array
    int size=100;
    Array *array=fillAry(size);
    
    //Display the random array
    prntAry(array,10);
    
    //Sort the array
    //Deallocate Memory
    delete []array->data;
    delete array;
    
    //Exit stage right
    return 0;
}
void prntAry(Array *a, int perLine)
{
    //Output the Array 
    cout<<endl;
    for (int i=0;i<n;i++)
    {
        
    }
}
////////////////////////////////////////////////////////////////////////////////
Array *fillAry(int n){
    //Declare and allocate the structure
    Array *a=new Array;
    
    //Declare and allocate the memory 
    a->size=n;
    a->data=new int [n];
    
    //Loop and fill with 2 digits numbers
    for (int i=0,i<n;i++)
    {
        a->data[i]=rand()%90+10;
    }
    //return the pointer
    return a;
}

