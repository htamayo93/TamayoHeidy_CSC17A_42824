/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: Predicts the number of organisms based on the days, percent, and starting amount.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int numora,percent,day;
    
    //Output of program description 
    cout<<"This program will predict the size of the population based on the number"<<endl;
    cout<<"of organisms enter and their daily population increase."<<endl<<endl;
    
    //Request of user input
    cout<<"Please enter the starting number of organisms."<<endl;
    cin>>numora;
    
    //If statement restricting the user to enter more than 2 for the starting organisms
    if (numora<2)
    {
        cout<<"Error:Please enter a valid starting amount of organisms."<<endl;
    }
    else
    {
        cout<<"Please enter the average daily population increase (as a percentage)."<<endl;
        cin>>percent;
        
        //If statement restricting the user to not enter a negative number for the percentage
        if (percent<0)
        {
            cout<<"Error:Please enter a positive integer to indicate the percent increase"<<endl;   
        }
        else
        {
            percent=percent/100;//Converts the percent to a decimal
            cout<<"Please enter the number of days you would like to have calculated."<<endl;
            cin>>day;
            
            //If statement restricting the user to enter more than one day 
            if (day<1)
            {
                cout<<"Error:Please enter a valid number of days."<<endl;
            }
            else
            {
                //For loop that shows the growth of the organisms per day 
                for(int i=1;i<=day;i++)
                {
                    numora=percent*numora+numora;//Calculation showing the increase of the organisms
                    
                    //Output of results
                    cout<<"The number of organisms for the "<<i<<" day will be "<<numora<<"."<<endl;
                }
            }
        }
    }

    return 0;
}

