/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 9, 2016, 2:30 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void disArr(float *,string *,int);
void sortArr(float *,string *,int);
void aveScor(float *,string *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    
    
    int score;
    cout<<"Please enter the number of scores you will enter."<<endl;
    cin>>score;
    cout<<fixed<<setprecision(2)<<endl;
    
    float *array=new float[score];//Sets memory aside in order to write the test scores
    string *name=new string[score];
    for (int i=0;i<score;i++)
    {
        cout<<"Please enter the name of the score "<<i+1<<endl;
        cin>>*(name+i);
        
        cout<<"Now enter the score."<<endl;
        cin>>*(array+i);
        if(*(array+i)<0)
        {
            cout<<"ERROR:Please enter a positive value or value outputted is";
            cout<<" incorrect."<<endl;
        }
    }
    disArr(array,name,score);
    sortArr(array,name,score);
    aveScor(array,name,score);
    
    delete []array;
    delete []name;
    
    //Exit stage right
    return 0;
}
//******************************************************************************
//*                        Display Scores                                      *
//******************************************************************************
void disArr(float *array,string *name, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"The value you entered for:"<<*(name+i)<<" was "<<*(array+i)<<"."<<endl;
    }
    cout<<endl;
}
//******************************************************************************
//*                               Sorts the scores                             *
//******************************************************************************
void sortArr(float *array,string *name,int size)
{
    int minI,minVal;
     for (int i=0;i<size;i++){
        minI=i;
        minVal = *(array+i);
        for (int j=i+1;j<size;j++){
            if (*(array+j)>minVal){
                minVal=*(array+j);
                minI=j;
            }
        }
        array[minI]=array[i];
        array[i]=minVal;
    }
}

//******************************************************************************
//*                         Finds the average of the scores                    *
//******************************************************************************
void aveScor(float *array,string *name,int size)
{
    float sum=0;
    cout<<"The scores in ascending order:"<<endl;
    for(int count=0;count<size;count++)
    {
        sum+=*(array+count);
        cout<<*(array+count)<<" ";
    }
    cout<<endl;
    float ave=sum/size;
    cout<<"The average of the tests scores is "<<ave<<"."<<endl;
}
