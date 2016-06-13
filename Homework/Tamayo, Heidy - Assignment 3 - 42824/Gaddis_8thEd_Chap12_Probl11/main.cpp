/* 
 * File:   main.cpp
 * Author: heidy
 * Created on March 8, 2016, 7:19 PM
 */


//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries
 struct Company
 {
        string namDiv; //name of division
        int quarter; //the number of quarter
        int qrtrSale; //quarter sales      
    };
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){   
    //Declare Variables
    const int SIZE=2;
    Company info[SIZE][SIZE];
    string in;//file name
    ofstream out; //output file name
            
    //input data for file
    cout<<"Please enter a file name to store the quarter sales."<<endl;
    getline(cin,in);
    
    out.open(in.c_str());
    
    //get user input for a file name
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Please enter the division name."<<endl;
        cin>>info[i][i].namDiv;
        for(int j=0;j<SIZE;j++)
        {
            cout<<"Please enter the quarter number "<<endl;
            cin>>info[i][j].quarter;
            do
            {
                cout<<"Input quarter sales"<<endl;
                cin>>info[i][j].qrtrSale;
            }while(info[i][j].qrtrSale<0);  
        }
    }
    cout<<endl;
    
    //output information to a file
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Division Name: "<<info[i][i].namDiv<<endl;
        
        for(int j=0;j<SIZE;j++)
        {
            cout<<"Quarter: "<<info[i][j].quarter<<endl;
            cout<<"Quarterly Sales "<<info[i][j].qrtrSale<<endl;           
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}