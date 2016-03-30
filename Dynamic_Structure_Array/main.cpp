/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 28, 2016, 1:50 PM
 * Purpose: Learning Structures 
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
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Print Array
//Inputs
//     a->Array structure
//     perLine->Number of integers to display per row
////////////////////////////////////////////////////////////////////////////////
void prntAry(Array *a,int perLine)
{
    //Output the Array 
    cout<<endl;
    for (int i=0;i<a->size;i++)
    {
        cout<<a->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                Fill Array
//Inputs
//     n->Size of the array
//Outputs
//     a->Array structure filled with 2 digit integers
////////////////////////////////////////////////////////////////////////////////
Array *fillAry(int n)
{
    //Declare and allocate the structure
    Array *a=new Array;
    
    //Declare and allocate the memory 
    a->size=n;
    a->data=new int [n];
    
    //Loop and fill with 2 digits numbers
    for (int i=0;i<n;i++)
    {
        a->data[i]=rand()%90+10;
    }
    //return the pointer
    return a;
}

