/* 
 * File:   ComputerPick.cpp
 * Author: Heidy Tamayo 
 * Created on June 1, 2016, 11:46 AM
 */

#include "ComputerPick.h"

//initialize the static variables of the colors
string ComputerPick::com[2][4]={
            {"RED","BLUE","GREEN","BROWN"},
            {"WHITE","BLACK","ORANGE","YELLOW"}};

ComputerPick::ComputerPick() //constructor setting the computer pick to blanks
{
    cp[3]=""; //The 4 colors the computer generates
}

void ComputerPick::comGen ()//determines the random colors of the computer
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

void ComputerPick::choice()//Shows the colors the user can pick
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

string ComputerPick::getcomp1()//Return values to first color pick
{
    return cp[0];
}

string ComputerPick::getcomp2()//Return value to second color pick
{
    return cp[1];
}

string ComputerPick::getcomp3()//Return value to third color pick
{
    return cp[2];
}

string ComputerPick::getcomp4()//Return value to fourth color pick
{
    return cp[3];
}