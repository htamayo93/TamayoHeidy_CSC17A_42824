/* 
 * File:   Numbers.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 2:35 PM
 */

#include "Numbers.h"

string Numbers::lessThan20[20];
string Numbers::thousand;
string Numbers::hundred;
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
        case 9:  word+="Nine ";break;
        case 8:  word+="Eight ";break;
        case 7:  word+="Seven ";break;
        case 6:  word+="Six ";break;
        case 5:  word+="Five ";break;
        case 4:  word+="Four ";break;
        case 3:  word+="Three ";break;
        case 2:  word+="Two ";break;
        case 1:  word+="One ";break;
    }
    
    //Output the 100's
    switch(n100s)
    {
        case 9:  word+=" Nine ";break;
        case 8:  word+=" Eight ";break;
        case 7:  word+=" Seven ";break;
        case 6:  word+=" Six ";break;
        case 5:  word+=" Five ";break;
        case 4:  word+=" Four ";break;
        case 3:  word+=" Three ";break;
        case 2:  word+=" Two ";break;
        case 1:  word+=" One ";break;
    }

    //Output the 10's
    switch(n10s)
    {
        case 9:  word+=" Ninety";break;
        case 8:  word+=" Eighty";break;
        case 7:  word+=" Seventy";break;
        case 6:  word+=" Sixty";break;
        case 5:  word+=" Fifty";break;
        case 4:  word+=" Forty";break;
        case 3:  word+=" Thirty";break;
        case 2:  word+=" Twenty";break;          
        case 1:  word+="";break;
        case 0:  word+="";break;
    }
    if(n10s==1)
    {    
        switch(n1s)
        {
            //Output the 1's
            case 9:  word+=" Nineteen";break;
            case 8:  word+=" Eighteen";break;
            case 7:  word+=" Seventeen";break;
            case 6:  word+=" Sixteen";break;
            case 5:  word+=" Fifteen";break;
            case 4:  word+=" Fourteen";break;
            case 3:  word+=" Thirteen";break;
            case 2:  word+=" Twelve";break;
            case 1:  word+=" Eleven";break;
            case 0:  word+=" Ten";break;
        }
    }
    else
    {
        //Output the 1's            
        switch(n1s)
        {
            case 9:  word+=" Nine";break;
            case 8:  word+=" Eight";break;
            case 7:  word+=" Seven";break;
            case 6:  word+=" Six";break;
            case 5:  word+=" Five";break;
            case 4:  word+=" Four";break;
            case 3:  word+=" Three";break;
            case 2:  word+=" Two";break;
            case 1:  word+=" One";break;
        }    
    }
    
}


