/* 
 * File:   main.cpp
 * Author: heidy
 * Created on March 8, 2016, 7:19 PM
 */


//system libraries
#include<iostream>
#include <fstream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;

 // global constants

// function prototype

int main()
{
    
    string fileName;
    string outputName;
    char word[50];
    ifstream inputFile; 
    ofstream outFile;
   
    //Name for the regular file
    cout<<"Please enter a file name you would like to read from" << endl;
    getline(cin,fileName);
    inputFile.open(fileName.c_str());
    
    //Name for revised file
    cout<<"Please enter a file name you would like to save in"<<endl;
    cin >> outputName;
    outFile.open(outputName.c_str());
    
    //make sure file opens
    if(inputFile)
    {    
        inputFile.getline(word,100);
  
        //continue obtaining input
        while(inputFile){
            word[0]=toupper(word[0]);
            
            for(int i=1; i <strlen(word); i++)
            {
                if(word[i-1]=='.')
                {
                    word[i]=toupper(word[i]); 
                }
                else
                {
                    word[i]=tolower(word[i]);
                }
            }
            
            outFile<<word;
            outFile<<endl;
 
            //continue obtaining input
            inputFile.getline(word,100);     
        }
       //close files
        inputFile.close();
        outFile.close();
    }
    else {
        cout<<"File did not open"<<endl;
        cout<<fileName<<endl<<outputName<<endl;
    }
   
    return 0;
}