/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: Sorts the names and looks for the name the user has inputted.
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void sortArr(float *,int);
void aveArr(float *,int);

//Execution Begins Here
int main(int argc, char** argv) {

    float *scores;
    float avescor;
    int testSco;

    cout<<"Please enter the number of how many scores you would like to have saved."<<endl;
    cin>>testSco;
    scores=new float [testSco];
    cout<<"Enter your test scores"<<endl;
    for(int count=0;count<testSco;count++)
    {
        cout<<"Score "<<count+1<<endl;
        cin>>*(scores+count);
    }
    sortArr(scores,testSco);
    aveArr(scores,testSco);
    return 0;
}
void sortArr(float *scores, int testSco)
{
    for(int pos=0;pos<testSco-1;pos++)
    {
        float minVal=[pos];
        for(int i=pos+1;i<testSco;i++)
        {
            if([i]<[pos])
            {
                minVal=[i];
            }
        }

    }
}
void aveArr(float *scores, int testSco)
{
    for(int count=0;count<testSco;count++)
    {
        cout<<[count]<<"  ";
        cout<<endl;
    }
}
