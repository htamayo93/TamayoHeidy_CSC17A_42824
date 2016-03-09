/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 9, 2016, 1:13 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int *fillAry(int);
int *fillMod(int,int);
void prntAry(int *,int,int);
void markSrt(int *,int);
int *mode(int *,int);
void prntMod(int *,int);

//Execution begins here
int main(int argc, char** argv) {
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare and allocate the array
    int size=10;
    int *array=fillMod(size,10);
    //Display the random array
    prntAry(array,size,10);
    //Sort the array
    markSrt(array,size);
    //Display the array
    prntAry(array,size,10);
    //Deallocate Memory
    delete []array;
    //Exit stage right
    return 0;
}
//000000001111111111122222222222222222333333333333333333444444444444444455555555
//34567890123456789012345678901234567890231466+789+02314567871615248415212121212
//                             Mark Sort
//Inputs
//      n->size of the array
//      a->Array
//Outputs
//      a->The sorted array
////////////////////////////////////////////////////////////////////////////////
void markSrt(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++)
    {
        for(int row=pos+1;row<n;row++)
        {
            if(*(a+pos)>*(a+row))
            {
               *(a+pos)=*(a+pos)^*(a+row);
               *(a+row)=*(a+pos)^*(a+row);
               //a[row]=a[pos]^a[row];Another way to do the second row
               *(a+pos)=*(a+pos)^*(a+row);
            }
        }
    }
}
//000000001111111111122222222222222222333333333333333333444444444444444455555555
//34567890123456789012345678901234567890231466+789+02314567871615248415212121212
//                             Print Array
//Inputs
//      n->size of the array
//      a->Array
//      PerLine->Number of integers to display per row
////////////////////////////////////////////////////////////////////////////////
void prntAry(int *a,int n,int perLine)
{
    //Output the Array
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<" ";
        if (i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
//000000001111111111122222222222222222333333333333333333444444444444444455555555
//34567890123456789012345678901234567890231466+789+02314567871615248415212121212
//
//Inputs
//      n->size of the array
//Outputs
//      a->Array filled with 2 digit integers
////////////////////////////////////////////////////////////////////////////////
int *fillAry(int n)
{
    //Declare and allocate memory
    int *a=new int[n];
    //Loop and fill with 2 digits
    for(int i=0;i<n;i++)
    {
        *(a+i)=rand()%90+10;
    }
    //return the pointer 
    return a;
}
//000000001111111111122222222222222222333333333333333333444444444444444455555555
//34567890123456789012345678901234567890231466+789+02314567871615248415212121212
//
//Inputs
//      n->size of the array
//Outputs
//      a->Array filled with 2 digit integers
////////////////////////////////////////////////////////////////////////////////
int *fillMod(int n,int mod)
{
    //Declare and allocate memory
    int *a=new int[n];
    //Loop and fill the repetitive numbers 
    for(int i=0;i<n;i++)
    {
        *(a+i)=i%mod;
    }
    //return the pointer
    return a;
}