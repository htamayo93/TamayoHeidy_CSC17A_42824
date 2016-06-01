/* 
 * File:   ComputerPick.cpp
 * Author: Heidy Tamayo 
 * Created on June 1, 2016, 11:46 AM
 */

#include "ComputerPick.h"

ComputerPick::ComputerPick() 
{
    com[2][4]={{"RED","BLUE","GREEN","BROWN"},
                     {"WHITE","BLACK","ORANGE","YELLOW"}};//Array that the 
                                                          //computer picks from
    cp[4]=""; //The 4 colors the computer generates
}

void ComputerPick::comGen ()
{   
    cout<<endl; 
    for (int i=0;i<4;i++)
    {
        int index=rand()%4;//Generates a number 1-4 for the computer pick
        int row=rand()%2;//Generate a number 1-2 for the computer pick
        cp[i]=com[row][index];//Generates the computer pick
        cout<<cp[i]<<" ";//DELETENOW
    }
}

void ComputerPick::choice()
{
    //Color choices avaliable in for loop
    cout<<"The colors you can pick from are"<<endl;
    for(int r=0;r<2;r++)
    {   
        for(int c=0;c<4;c++)
        {
            cout<<com[r][c]<<" ";
        }
    }
}

