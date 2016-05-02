/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 12:12 PM
 */

//System Libraries
#include <iostream>
#include <string>

//User Libraries
#include "RetailItem.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize the variables
    string descrpt;
    int unit;
    float price;
    RetailItem item1;
    RetailItem item2;
    RetailItem item3;
    
    item1.setdescrip("Jacket");
    item1.setunit(12);
    item1.setprice(59.95);
  
    item2.setdescrip("Designer Jeans");
    item2.setunit(40);
    item2.setprice(34.95);
    
    item3.setdescrip("Shirt");
    item3.setunit(20);
    item3.setprice(24.95);
    
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"                 Description           Units on Hand       Price           "<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"Item #1          "<<item1.getdescrip()<<"                     "<<item1.getunit()<<"            $"<<item1.getprice()<<endl;
    cout<<"Item #2          "<<item2.getdescrip()<<"             "<<item2.getunit()<<"            $"<<item2.getprice()<<endl;
    cout<<"Item #3          "<<item3.getdescrip()<<"                      "<<item3.getunit()<<"            $"<<item3.getprice()<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    
    //Exit stage right
    return 0;
}

