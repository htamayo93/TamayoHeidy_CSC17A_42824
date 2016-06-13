/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on March 8, 2016, 7:19 PM
 * Purpose: To find the number of vowels and consonants in the sentence that is 
 * entered. Then the total will be outputted.
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int countVl(char *, int);
int countCn(char *, int);

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize the variables
    int size=100;        //Size of the array
    char letter[size];   //Holds the string of characters
    char answer;         //To allow the user if they want to sentence another string
    
    do
    {
        cout<<"Please enter the sentence you would like."<<endl;
        cin.ignore();
        cin.getline(letter,size);

        //Function that counts the number of vowels in the sentence entered
        int vowels=countVl(letter,size);
        cout<<"The number of vowels in the sentence is "<<vowels<<"."<<endl;

        //Function that counts the number of consonants in the sentence
        int conson=countCn(letter,size);
        cout<<"The number of consonants in the sentence is "<<conson<<"."<<endl;

        cout<<"The total number of vowels and consonants in the sentence is ";
        cout<<vowels+conson<<"."<<endl;
        
        cout<<"Would you like to enter another sentence?Please enter 'y' for yes."<<endl;
        cin>>answer;
        answer=toupper(answer);
    }while(answer=='Y');

    //Exit Stage Right
    return 0;
}
//******************************************************************************
//Function that will count the letters that are vowels
//******************************************************************************
int countVl(char *letter, int size)
{
    int count=0; //To count the number of words in the sentence that are vowels
    for(int i=0;i<strlen(letter);i++)
    {
        if(letter[i]=='a'||letter[i]=='e'||letter[i]=='i'||letter[i]=='o'||letter[i]=='u')
        {
            count++;
        }
    }
    return count;
}
//******************************************************************************
//Function that will count the letters that are consonants
//******************************************************************************
int countCn(char *letter, int size)
{
    int count=0; //To count the number of letters in the sentence that are consonants.
    for(int i=0;i<strlen(letter);i++)
    {
        if(letter[i]=='a'||letter[i]=='e'||letter[i]=='i'||letter[i]=='o'||letter[i]=='u'||letter[i]==' ')
        {
            count=count+0;
        }
        else
        {
            count++;
        }
    }
    return count;
}