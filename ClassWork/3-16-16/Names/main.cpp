/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 16, 2016, 1:40 PM
 * Purpose: To open a file and organize the names
 */

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void sort(string,int);
void dis(string,int);

int main(int argc, char** argv) {

    int number=9;
    string names[number];
    ifstream in;
    ofstream out;
    in.open("Names.txt");
    for (int i=0;i<number;i++)
    {
        in>>names[i];
    }
    out.close();
//     for(int scan=0;scan<(number-1);scan++)
//    {
//        int i=scan;
//        string minVal=names[i];
//        for(int in=scan+1;in<number;in++)
//        {
//            if(names[in]<minVal)
//            {
//                minVal=names[in];
//                i=in;
//            }
//        }
//        string tem=names[scan];
//        names[scan]=minVal;
//        names[i]=tem;
//    }
//    for(int i=0;i<number;i++)
//    {
//        cout<<names[i]<<endl;
//    }
    sort(names,number);
    dis(names,number);

    return 0;
}
void sort(string names[],int number)
{
    for(int scan=0;scan<(number-1);scan++)
    {
        int i=scan;
        string minVal=names[i];
        for(int in=scan+1;in<number;in++)
        {
            if(names[in]<minVal)
            {
                minVal=names[in];
                i=in;
            }
        }
        string tem=names[scan];
        names[scan]=minVal;
        names[i]=tem;
    }
}
void dis(string names[],int number)
{
    for(int i=0;i<number;i++)
    {
        cout<<names[i]<<endl;
    }
}
