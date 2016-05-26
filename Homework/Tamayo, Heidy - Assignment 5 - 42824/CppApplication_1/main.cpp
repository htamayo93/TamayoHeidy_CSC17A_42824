/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 26, 2016, 3:42 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
void function();

void function(){
    cout << "hello" << endl;
}
int main(int argc, char** argv) {
    
    int a,b;
    cin>>a>>b;
    
    try {
        if(b==0){
            string temp="ERROR: b=0\n";
            throw temp;
        }
        if(a==0){
            float f=1;
            throw f;
        }
        cout << "The total is : " << a/b << endl;
    }
    catch (string str) {
        cout << str;
    }
    catch(int er){
        cout<<er<<endl;
    }
    //Function prototype is the ()
    //Function decoration is the {} what goes inside the function itself
    //Template you can use many times whichever type of data (class is the same typename)
    //try,throw, catch need to be the same data type 
    
    return 0;
}

