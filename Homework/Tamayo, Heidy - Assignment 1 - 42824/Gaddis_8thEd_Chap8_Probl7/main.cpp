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
void sortT(string[],int);
int binaser(string[],int,string);
string strVal();

//Execution Begins Here
int main(int argc, char** argv) {

    //Determine and initialize the variables
    const int numName=20;//Number allowed for array
    string names[numName]=
    {"Collins,Bill", "Smith,Bart", "Allen,Jim", "Griffin,Jim", "Stamey,Marty",
     "Rose,Geri", "Taylor,Terri", "Johnson,Jill", "Allison,Jeff", "Looney,Joe",
     "Wolfe,Bill", "James,Jean", "Weaver,Jim", "Pore,Bob", "Rutherford,Greg", 
     "Javens,Renee", "Harrison,Rose", "Setzer,Cathy", "Pike,Gordon", "Holland,Beth"
    };//Inputs in the array
    string vaLue;//The name the user inputs
    int answer; //To determine if the name is on the list
    
    //Functions to sort,receive the input string and determine if they are real
    sortT(names,numName);
    vaLue=strVal();
    answer=binaser(names,numName,vaLue);
    
    //Output of results
    if(answer==-1)
    {
        cout<<"The name entered is not on the list."<<endl;
    }
    else   
    {
        cout<<names[answer]<<" was found in the #"<<answer<<" place."<<endl;
    }
    cout<<endl<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Sorting the file
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sortT(string names[], int numName)
{
    //Determine and initialize the variables
    int i,scan;
    string minVal;

    for(int scan=0;scan<(numName-1);scan++)
    {
        i=scan;
        minVal=names[i];
        for(int in=scan+1;in<numName;in++)
        {
            if (names[in]<minVal)
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
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Getting the value
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
string strVal()
{
    //Input request of the name user would like to search for.
    string input;
    cout << "Please enter the name you would like to search for."<<endl;
    getline(cin, input);
    return input;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int binaser(string names[], int numName, string vaLue)
{
    //Declare and initialize variables
    int begin=0, end=numName-1, center, pos=-1;			
    bool look=false;					
    while (!look && begin<=end)
    {
        center=(begin+end)/2;		
        if (names[center]==vaLue)			
        {
            look=true;
            pos=center;
        }
        else if (names[center]>vaLue)
        {
            end=center-1;
        }
        else
        {
            begin=center+1;
        }		
    }
    return pos;
}