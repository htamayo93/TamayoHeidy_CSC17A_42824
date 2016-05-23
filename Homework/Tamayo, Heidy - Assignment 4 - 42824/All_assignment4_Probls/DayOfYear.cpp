/* 
 * File:   DayOfYear.cpp
 * Author: Heidy Tamayo 
 * Created on May 2, 2016, 11:01 PM
 */

#include "DayOfYear.h"

string DayOfYear::month[12]={"January ","February ","March ","April ","May ","June ",
"July ","August ","September ","October ","November ","December "};

void DayOfYear::print(int x)
{
    string convert="";
    if(x>=1 && x<=31){convert+=month[0];
        cout<<convert<<x;}
    else if(x>31 && x<=59){x-=31;
        convert+=month[1];
        cout<<convert<<x;}
    else if(x>59 && x<=90){x-=59;
        convert+=month[2];
        cout<<convert<<x;}
    else if(x>90 && x<=120){x-=90;
        convert+=month[3];
        cout<<convert<<x;}
    else if(x>120 && x<=151){x-=120;
        convert+=month[4];
        cout<<convert<<x;}
    else if(x>151 && x<=181){x=-151;
        convert+=month[5];
        cout<<convert<<x;}
    else if(x>181 && x<=212){x-=181;
        convert+=month[6];
        cout<<convert<<x;}
    else if(x>212 && x<=243){x-=212;
        convert+=month[7];
        cout<<convert<<x;}
    else if(x>243 && x<=273){x-=243;
        convert+=month[8];
        cout<<convert<<x;}
    else if(x>273 && x<=304){x-=273;
        convert+=month[9];
        cout<<convert<<x;}
    else if(x>304 && x<=334){x-=304;
        convert+=month[10];
        cout<<convert<<x;}
    else if(x>334 && x<=365){x-=334;
        convert+=month[11];
        cout<<convert<<x;}
    else if(x>365 || x<0){
        cout<<"You have entered an invalid day. The program will now exit."<<endl;}
}