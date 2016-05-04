/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 3:17 PM
 */

/*
 *   Memory allocation

    ***Functions with structures, used as input and output

    Pointers with arrays and arrays of structures, internally as well as externally.

     Use of character arrays as well as string objects.

    ***Reading and writing to binary files.
 */

//System Libraries
#include <iostream> //I/O
#include <string>   //string 
#include <iomanip>  //Formatting 
#include <cstdlib>  //srand and rand function
#include <fstream>  //File I/O
using namespace std;

//User Libraries
struct Usepick
{
    string choice[4];//The 4 colors the user chooses
    int limit;//The limit the user inputs
    char answer, hint,change;//The response of whether the user would like to play again or take a hint
};

//Global Constants

//Functional Prototypes
void comGen(string [][4],string []);//Function to generate the 4 random colors from the computer
void useGen(string[]);//Function to allow the user to enter their four colors
void compare(string [],string [],float,int&,int);//Comparison of the computer generated and the users
char hints(string [],string [],bool,char);//hints the user may have if they choose to
int determ(string [],string []);//Determine the linear search 
int tries(int);//The number of tries the user would want

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Set the random number seed
    srand(time(NULL));

    //Declare and initialize variable  
    string com[2][4]={{"RED","BLUE","GREEN","BROWN"},
                     {"WHITE","BLACK","ORANGE","YELLOW"}};//Array that the computer picks from
    string compran[4]; //The 4 colors the computer generates
    int numTry=10;//The number of tries the user gets before it is considered they have lost.
    int n=0;//The increments to indicate the turns allowed before the user loses
    float percent;//The intervals of the turns, the percentage of the accuracy 
    bool hint2=true;//Statement to determine if the statement is true
    fstream in;//File output 
    Usepick info;//Brings the information to the structure
    string str;
    int *triesN;
    
    //Open the file
    in.open("Instructions.txt", ios::in|ios::binary);
    
    //reads the file
    while (getline(in,str))
    {
        cout<<str;
    }
    in.close();  

    //Do while loop to see if the user would like to play again
    do
    {
        //Output description
        info.limit=tries(info.limit);
        //Color choices avaliable
        cout<<"The colors you can pick from are"<<endl;
        for(int r=0;r<2;r++)
        {
            for(int c=0;c<4;c++)
            {
                cout<<com[r][c]<<" ";
            }
        }
        
        if(info.limit<10)
        {
            cout<<"WARNING:you have inputted a smaller number then the tries that"<<endl;
            cout<<" is allowed. If you would like to have to have 10 tries then"<<endl;
            cout<<" the number you inputted type 'c' otherwise type anything else."<<endl;
            cin>>info.change;
            info.change=toupper(info.change);
            if(info.change='C')
            {
                info.limit=info.limit>numTry?info.limit:numTry;
            }
        }
        else
        {
            triesN=new int[info.limit];
        }
        
        //Determining colors by the computer
        comGen(com,compran);
        
        //while loop to generate the number tries for the user
        while (n+1<=info.limit)
        {
            //The color the user wants to pick
            useGen(info.choice);
            //if else statement to determine if the user has won or not
            if(compran[0]==info.choice[0]&&compran[1]==info.choice[1]&&compran[2]==info.choice[2]&&compran[3]==info.choice[3]){
            {
                compare(compran,info.choice,percent,n,info.limit);
            }
            }
            else
            {
                hints(compran,info.choice,hint2,info.hint);
                cout<<endl<<"You have used up "<<n+1<<" tries, you have "<<10-(n+1)<<" tries left before it is considered you have lost the game."<<endl;
                cout<<"You do however have "<<info.limit-(n+1)<<" tries left."<<endl;
            }
            //if statement to indicate the user has used up the ten turns they had
            if (n==9)
            {
                //Output of results after all tries have been used up
                cout<<"You have used all your tries and have lost the game."<<endl<<endl;
            }
            n++;  
        }
        determ(info.choice,compran);
        //Output of results
        cout<<"The computer choices were            "<<compran[0]<<" "<<compran[1]<<" "<<compran[2]<<" "<<compran[3]<<endl;
        cout<<"Your final results were              "<<info.choice[0]<<" "<<info.choice[1]<<" "<<info.choice[2]<<" "<<info.choice[3]<<endl;
        cout<<"The linear search was "<<determ<<"."<<endl;
        cout<<endl<<"Would you like to play again?"<<endl;
        cin>>info.answer;
        cout<<endl;
        info.answer=toupper(info.answer);
        n=1;
    }while(info.answer=='Y');
    
    //Exit stage right

    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                Allows the user to enter the number of tries
//******************************************************************************
int tries(int limit=10)
{
    cin>>limit;
    return limit;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                 Generates the computer's random values
//******************************************************************************
void comGen (string com[][4], string compran[])
{   for (int i=0;i<4;i++)
    {
        int index=rand()%4;
        int row=rand()%2;
        compran[i]=com[row][index];
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                 Gets the four choices the user inputs
//******************************************************************************
void useGen(string choice[])
{
    cout<<endl<<"Please pick your colors you would want displayed going from"<<endl;
    cout<<"left to right."<<endl;
    //Output request the user to enter the 4 colors
    for (int i=0;i<4;i++)
    {
        cin>>choice[i];
        if (choice[i]==choice[0])
        {
            for (int p=0;p<choice[0].size();p++)
            {
                choice[0][p]=toupper(choice[0][p]);
            }
        }
        if (choice[i]==choice[1])
        {
            for (int p=0;p<choice[1].size();p++)
            {
                choice[1][p]=toupper(choice[1][p]);
            }
        }
        if (choice[i]==choice[2])
        {
            for (int p=0;p<choice[2].size();p++)
            {
                choice[2][p]=toupper(choice[2][p]);
            }
        }
        if (choice[i]==choice[3])
        {
            for (int p=0;p<choice[3].size();p++)
            {
                choice[3][p]=toupper(choice[3][p]);
            }
        }
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*              Results if the user has won the game                           */
/******************************************************************************/
void compare(string compran[],string choice[], float percent,int &n, int limit)
{   
    //Output of results
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<endl<<"You have won the game!"<<endl;
    percent=((10-n)*10);
    cout<<"It took you "<<n+1<<" tries to solve the game! Based on your number of tries, your";
    cout<<" percentage is "<<percent<<"% accuracy!"<<endl;
    cout<<endl<<"You have used up "<<n+1<<" tries, you have "<<limit-n+1<<" tries left."<<endl<<endl;
    n=limit;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                     Results if the user has not won                        */
/******************************************************************************/
char hints(string compran[],string choice[],bool hint2,char hint)
{
    cout<<"One or more colors is incorrect. Would you like a hint? Type y for yes."<<endl;
    cin>>hint;
    hint=toupper(hint);
                
    //Switch statement to determine if the user would like a hint
    switch (hint)
    {
        case 89:
        {
            //else if statements to determine which hint will be outputted
            if (!(compran[0]==choice[0])&&compran[1]==choice[1]&&compran[2]==choice[2]&&compran[3]==choice[3]){
                cout<<"You have three in the correct spot and one not."<<endl;
                cout<<"Your second, third and fourth choice are in the correct spot."<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&compran[3]==choice[3]){
                cout<<"You have three in the correct spot and one not."<<endl;
                cout<<"Your first, third and fourth choice are in the correct spot."<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"You have three in the correct spot and one not."<<endl;
                cout<<"Your first, second, and fourth choice are in the correct spot."<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"You have three in the correct spot and one not."<<endl;
                cout<<"Your first, second, and third choice are in the correct spot."<<endl;}
            else if(!(compran[0]==choice[0])&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&compran[3]==choice[3]){
                cout<<"You have two in the correct spot and two not."<<endl;
                cout<<"Your third and fourth choice are in the correct spot."<<endl;}
            else if(!(compran[0]==choice[0])&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"You have two in the correct spot and two not."<<endl;
                cout<<"Your second and fourth choice are in the correct spot."<<endl;}
            else if(!(compran[0]==choice[0])&&compran[1]==choice[1]&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"You have two in the correct spot and two not."<<endl;
                cout<<"Your second and third choice are in the correct spot."<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"You have two in the correct spot and two not."<<endl;
                cout<<"Your first and fourth choice are in the correct spot."<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"You have two in the correct spot and two not."<<endl;
                cout<<"Your first and third choice are in the correct spot."<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&!(compran[3]==choice[3])){
                cout<<"You have two in the correct spot and two not."<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&!(compran[2]==choice[2])&&!(compran[3]==choice[3])){
                cout<<"You have one in the correct spot."<<endl;
                cout<<"Your first choice is in the correct spot."<<endl;}
            else if(!(compran[0]==choice[0])&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&!(compran[3]==choice[3])){
                cout<<"You have one in the correct spot."<<endl;
                cout<<"Your second choice is in the correct spot."<<endl;}
            else if(!(compran[0]==choice[0])&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"You have one in the correct spot."<<endl;
                cout<<"Your third choice is in the correct spot."<<endl;}
            else if (!(compran[0]==choice[0])&&!(compran[1]==choice[1])&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"You have one in the correct spot."<<endl;
                cout<<"Your fourth choice is in the correct spot."<<endl;}
            else{
                cout<<"None of the colors are correct."<<endl;}
            break;
        }
        default:
        {
            cout<<"You have chosen not to take a hint. Please guess again till your number of tries is up."<<endl;
            hint2=false;
        }
    }
    return hint;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int determ(string compran[],string choice[])
{
    int i = 0;			
    int pos = -1;	
    bool found = false;		
    while (i <4 && !found)
    {
        if (compran[i] == choice[i])
        {
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}