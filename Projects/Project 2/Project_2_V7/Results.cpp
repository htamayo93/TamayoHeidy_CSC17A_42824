/* 
 * File:   Results.cpp
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 2:40 PM
 */

#include "Results.h"

Results::Results()
{
    limit=0;
    n=0;
}

void Results::setlimit(int x)
{
    limit=x;
}

void Results::setn(int x)
{
    n=x;
}

int Results::wonLost(string perp[], string comp[],int limit,int &n, float percent)
{ 
    //if else statement to determine if the user has won or not
    if(comp[0]==perp[0]&&comp[1]==perp[1]&&comp[2]==perp[2]&&comp[3]==perp[3])
    {
        //Gives the comparison of the user to the computer choice
        limit=compare(percent,n,limit);
        return n;
    }
    else
    {
        //Gives hints if the user decides to have
        hints(comp,perp);
        cout<<endl<<"You have used up "<<n+1<<" tries, you have "<<10-(n+1)<<" ";
        cout<<"tries left before it is considered you have lost the game."<<endl;
        cout<<"You do however have "<<limit-(n+1)<<" tries left."<<endl;
        return n;
    }
   
}

int Results::compare(float percent, int &n, int limit)
{
    //Output of results
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<endl<<"You have won the game!"<<endl;
    percent=((10-n)*10);
    cout<<"It took you "<<n+1<<" tries to solve the game! Based on your number ";
    cout<<"of tries, your";
    cout<<" percentage is "<<percent<<"% accuracy!"<<endl;
    n=limit;
    return n;
}

void Results::hints(string comp[], string perp[])
{
    bool match[4];
    int x=0;                        
    int o=0;
    cout<<endl<<"HINT: ";
    
    for(int i=0;i<4;i++)
    {
        if (perp[i]==comp[i])
        {
            x++;
            match[i]=true;
        }
    }
    
    if(x==1)
    {
        cout<<"X";
    }
    else if(x==2)
    {
        cout<<"XX";
    }
    else if(x==3)
    {
        cout<<"XXX";
    }
    else if(x==4)
    {
        cout<<"XXXX"<<endl;
    }

    for(int k=0;k<4;k++)
    {
        if(match[k]==false)
        {
            for(int j=0;j<4;j++)
            {
                if(j!=k && match[j]==false)
                {
                    if(perp[k]==comp[j])
                    {
//                        match[k]=true;
                        o++;
                        break;
                    }
                }
            }
        }
    }
    
    if(o==1)
    {
        cout<<"O";
    }
    else if(o==2)
    {
        cout<<"OO";
    }
    else if(o==3)
    {
        cout<<"OOO";
    }
    else if(o==4)
    {
        cout<<"OOOO"<<endl;
    }
}

void Results::results(string comp[], string perp[])
{
    //Output of results
    cout<<"The computer choices were            "<<comp[0]<<" "<<comp[1]<<" ";
    cout<<comp[2]<<" "<<comp[3]<<endl;
    cout<<"Your final results were              "<<perp[0]<<" "<<perp[1]<<" ";
    cout<<perp[2]<<" "<<perp[3]<<endl;
}