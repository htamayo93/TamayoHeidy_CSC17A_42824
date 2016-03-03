/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables

    
    const int month=3;
    const int day=30;
    const int condit=3;
    char weather[month][day];
    int countn[month][condit];
    
    
    
 return 0;
}
//    const int months=3,days=30,conditn=3;
//    char weather[months][days];
//    int count[months][conditn];
//    int rain=0;
//    ifstream data;
//    data.open("RainOrShine.txt");
//    
//    for (int i=0;i<months;i++)
//    {
//        for(int j=0;j<days;j++)
//        {
//            data>>weather[i][j];
//        }
//        data.ignore();
//    }
//    
//    for (int i=0;i<months;i++)
//    {
//        for(int j=0;j<days;j++)
//        {
//            cout<<weather[i][j]<<"  ";
//        }
//        cout<<endl;
//    }
//    
//    for (int i=0;i<months;i++)
//    {
//        for(int j=0;j<conditn;j++)
//        {
//            count[i][j]=0;
//        }  
//    }
//    
//    for (int i=0;i<months;i++)
//    {
//        for(int j=0;j<days;j++)
//        {
//            if(weather [i][j]=='R')
//            {
//                count[i][0]++;
//            }
//            if(weather [i][j]=='S')
//            {
//                count[i][1]++;
//            }
//            if(weather [i][j]=='C')
//            {
//                count[i][2]++;
//            }
//        }
//    }
//    
//    for(int i=0;i<months;i++)
//    {
//        for(int j=0;j<conditn;j++)
//        {
//            cout<<count[i][j]<<"  ";
//        }
//        cout<<endl;
//    }
//    
//    cout<<"Three-Month Analysis"<<endl<<endl;