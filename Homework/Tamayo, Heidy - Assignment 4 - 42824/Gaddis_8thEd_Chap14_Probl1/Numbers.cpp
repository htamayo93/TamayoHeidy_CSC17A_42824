/* 
 * File:   Numbers.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 2:35 PM
 */

#include "Numbers.h"

string Numbers::lessThan20[20]={"Zero ", "One ","Two ","Three ","Four ","Five ",
    "Six ","Seven ","Eight ","Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ",
    "Fifteen ","Sixteen ","Seventeen ","Eighteen ","Nineteen "};

void Numbers::print(int x)
{
    int n1000s,n100s,n10s,n1s;//Number of 10^x's
    
    //Calculate the number of 1000's,100's,10's,1's
    n1000s=(x-x%1000)/1000;//Number of 1000's
    x=(x-n1000s*1000);     //Subtract off 1000's
    n100s=(x-x%100)/100;  //Number of 100's
    x=(x-n100s*100);       //Subtract off 100's
    n10s=(x-x%10)/10;    //Number of 10's
    n1s=(x-n10s*10);//Subtract off 10's to get 1's
    string word="";//String to start off the paycheck
    
    //Output the 1000's
    switch(n1000s)
    {
        case 9:  word+="Nine Thousand ";break;
        case 8:  word+="Eight Thousand ";break;
        case 7:  word+="Seven Thousand ";break;
        case 6:  word+="Six Thousand ";break;
        case 5:  word+="Five Thousand ";break;
        case 4:  word+="Four Thousand ";break;
        case 3:  word+="Three Thousand ";break;
        case 2:  word+="Two Thousand ";break;
        case 1:  word+="One Thousand ";break;
    }
    
    //Output the 100's
    switch(n100s)
    {
        case 9:  word+="Nine Hundred ";break;
        case 8:  word+="Eight Hundred ";break;
        case 7:  word+="Seven Hundred ";break;
        case 6:  word+="Six Hundred ";break;
        case 5:  word+="Five Hundred ";break;
        case 4:  word+="Four Hundred ";break;
        case 3:  word+="Three Hundred ";break;
        case 2:  word+="Two Hundred ";break;
        case 1:  word+="One Hundred ";break;
    }

    //Output the 10's
    switch(n10s)
    {
        case 9:  word+="Ninety ";break;
        case 8:  word+="Eighty ";break;
        case 7:  word+="Seventy ";break;
        case 6:  word+="Sixty ";break;
        case 5:  word+="Fifty ";break;
        case 4:  word+="Forty ";break;
        case 3:  word+="Thirty ";break;
        case 2:  word+="Twenty ";break;          
        case 1:  word+="";break;
        case 0:  word+="";break;
    }
    if(n10s==1)
    {
        for(int j=1;j<9;j++)
        {
            if(n1s==j)
            {
                word+=lessThan20[j+10];
            }
        }
    }
    cout<<word;
    if(n10s!=1)
    {
        for(int i=0;i<10;i++)
        {
            if(n1s==i)
            {   
                cout << lessThan20[i];
            }
        }   
    }
    
}