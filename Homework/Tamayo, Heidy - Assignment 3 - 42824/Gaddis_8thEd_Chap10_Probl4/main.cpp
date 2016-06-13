/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on April 1, 2016, 7:19 PM
 * Purpose: To allow the user to enter a sentence by characters then have the
 * functions have the number of words and letters counted and find the average
 * letter per word.
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int countWd(char *, int);
int countLt(char *, int);
int aveLtWd(int, int);

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize the variables
    const int size=100;  //Size of the array
    char word[size];     //Holds the string of characters
    
    cout<<"Please enter your sentence."<<endl;
    cin.getline(word,size);
    
    int words=countWd(word,size);
    cout<<"The amount of words in your sentence is "<<words<<"."<<endl;
    
    int letters=countLt(word,size);
    cout<<"The amount of letters in your sentence is "<<letters<<"."<<endl;
    
    int average=aveLtWd(words,letters);
    cout<<"The average letter per word is "<<average<<"."<<endl;
    return 0;
}
//******************************************************************************
//Function that will count the number of words in the string that is inputted.
//******************************************************************************
int countWd(char *word, int size)
{
    int count=1; //To count the number of words in the sentence inputted
    for(int i=0;i<strlen(word);i++)
    {
        if(word[i]==' ')
        {
            count++;
        }
    }
    return count;
}
//******************************************************************************
//Function that will count the number of letters entered within the sentence.
//******************************************************************************
int countLt(char *word, int size)
{
    int count=0; //To count the number of letters in the sentence inputted
    for(int i=0;i<strlen(word);i++)
    {
        if(word[i]!=' ')
        {
            count++;
        }
    }
    return count;
}
//******************************************************************************
//Function that will find the average letter per
//******************************************************************************
int aveLtWd(int words,int letters)
{
    int ave=letters/words;
    return ave;
}