/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 23, 2016, 2:30 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <memory>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    int score;
    int *ptr=&score;
    cout<<"Please enter the number of scores you will enter."<<endl;
    cin>>score;
    
    int array=new int[*ptr];
    for (int i=0;i<score;i++)
    {
        cout<<array[i]<<endl;
    }
    
    
    return 0;
}

