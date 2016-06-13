/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on April 1, 2016, 7:19 PM
 * Purpose: Assignment 3 Problems
 */

//Library includes Here
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries
struct Company
{
    string namDiv; //name of division
    int quarter; //the number of quarter
    int qrtrSale; //quarter sales      
};
struct MovieData{
    string title;
    string director;
    int year;
    int time;
};

//Global Constants 

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
int countWd(char *, int);
int countLt(char *, int);
int aveLtWd(int, int);
int countVl(char *, int);
int countCn(char *, int);
//Execution Begins Here
int main(int argc, char** argv) {
    int inN;
    bool reDsply=true;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break; 
        default:   {def(inN);
                    reDsply=false;}
        }
    }while(reDsply);
    return 0;
}

void Menu(){
    cout<<"Menu for Assignment 3"<<endl;
    cout<<"Type 1 for Gaddis_8thEd_Chap10_Prob4"<<endl;
    cout<<"Type 2 for Gaddis_8thEd_Chap10_Prob6"<<endl;
    cout<<"Type 3 for Gaddis_8thEd_Chap11_Prob1"<<endl;
    cout<<"Type 4 for Gaddis_8thEd_Chap12_Prob7"<<endl;
    cout<<"Type 5 for Gaddis_8thEd_Chap12_Prob11"<<endl;
    cout<<"Type anything else to exit"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1()
{
    //Declare and initialize the variables
    const int size=100;  //Size of the array
    char word[size];     //Holds the string of characters
    
    cout<<"Please enter your sentence."<<endl;
    cin.ignore();
    cin.getline(word,size);
    
    int words=countWd(word,size);
    cout<<"The amount of words in your sentence is "<<words<<"."<<endl;
    
    int letters=countLt(word,size);
    cout<<"The amount of letters in your sentence is "<<letters<<"."<<endl;
    
    int average=aveLtWd(words,letters);
    cout<<"The average letter per word is "<<average<<"."<<endl;
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

void problem2()
{
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

void problem3()
{
    MovieData movie1;
    MovieData movie2;
    
    cout<<"What is the name of the first movie?"<<endl;
    cin>>movie1.title;
    
    cout<<"who is the director?"<<endl;
    cin>>movie1.director;
    
    cout<<"What year was the movie released?"<<endl;
    cin>>movie1.year;
    
    cout<<"How long does the movie run for in minutes?"<<endl;
    cin>>movie1.time;
    
    cout<<"What is the name of the second movie?"<<endl;
    cin>>movie2.title;
    
    cout<<"who is the director?"<<endl;
    cin>>movie2.director;
    
    cout<<"What year was the movie released?"<<endl;
    cin>>movie2.year;
    
    cout<<"How long does the movie run for in minutes?"<<endl;
    cin>>movie2.time;

    cout<<"Movie 1"<<endl;
    cout<<"**************************************************************"<<endl;
    cout<<"Title: "<<movie1.title<<endl;
    cout<<"Director: "<<movie1.director<<endl;
    cout<<"Year: "<<movie1.year<<endl;
    cout<<"Length of movie: "<<movie1.time<<endl<<endl<<endl;
   
    cout<<"Movie 2"<<endl;
    cout<<"**************************************************************"<<endl;
    cout<<"Title: "<<movie2.title<<endl;
    cout<<"Director: "<<movie2.director<<endl;
    cout<<"Year: "<<movie2.year<<endl;
    cout<<"Length of movie: "<<movie2.time<<endl; 
}

void problem4()
{
    string fileName;
    string outputName;
    char word[50];
    ifstream inputFile; 
    ofstream outFile;
   
    //Name for the regular file
    cout<<"Please enter a file name you would like to read from" << endl;
    cin.ignore();
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
        cout<<fileName<<"and"<<outputName<<endl;
    }
}

void problem5()
{
    const int SIZE=2;
    Company info[SIZE][SIZE];
    string in;//file name
    ofstream out; //output file name
            
    //input data for file
    cout<<"Please enter a file name to store the quarter sales."<<endl;
    cin.ignore();
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
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
