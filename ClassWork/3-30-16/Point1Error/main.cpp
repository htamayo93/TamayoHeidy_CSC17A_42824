/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 30, 2016, 1:42 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float fracshn=0.2f;      //Fraction to sum
    int nLoops    =10000000;  //10 Million sum of fraction
    float sum     =0.0f;      //Initialize the sum to zero
    float answer;             //Exact answer
    
    //Loop and find the sum
    for(int i=1;i<=nLoops;i++)
    {
        sum+=fracshn;
    }
    
    //Exact answer
    answer=nLoops*fracshn;
    
    //Output the results
    cout<<"Sum "<<fracshn<<" -> "<<nLoops<<" times = "<<answer<<endl;
    cout<<"But we get = "<<sum<<endl;
    cout<<"Percent error = "<<(sum-answer)/answer*100<<"%"<<endl;
    
    //Exit Stage right
    return 0;
}

