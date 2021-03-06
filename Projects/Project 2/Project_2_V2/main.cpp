/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 3:17 PM
 * Purpose: Playing the game Mastermind
 */
//******************************
//STOPPED WORKING T_T!!!!!!!!!!**********
//******************************
//System Libraries
#include <iostream> //I/O
#include <string>   //string 
#include <iomanip>  //Formatting 
#include <cstdlib>  //srand and rand function
#include <fstream>  //File I/O

//User Libraries
#include "Results.h"
using namespace std;

struct Usepick
{
    int limit;//The limit the user inputs
    char answer,change;//The response of whether the user would like to 
                             //play again,take a hint, or change their number of 
                             //tries 
};

//Global Constants

//Functional Prototypes
char * nameuse();//Function to ask the user for the name
Usepick tries();//The number of tries the user would want
char playA(char);//Function to ask the user if they would like play again

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Set the random number seed
    srand(time(NULL));

    //Declare and initialize variable
    int numTry=10;//The number of tries the user gets before it is considered 
                  //they have lost.
    int n=0;//The increments to indicate the turns allowed before the user loses
    float percent;//The intervals of the turns, the percentage of the accuracy 
    fstream in;//File output 
    Usepick info;//Brings the information to the structure
    string str;//String that is being used to bring the file to the program
    char *name;//Ask for the users name
    string choice[4];//The 4 colors the user chooses
    Results pick;
    string com[4];
     
//            in.open("Instructions.txt", ios::in|ios::binary);//Opens the file
//            while (getline(in,str)){
//            cout<<str;}//reads the file into the program
    //Do while loop to see if the user would like to play again
    do
    {
//        if(in){
//            getline(in,str);
//            while(in){
//                cout<<str<<endl;
//                getline(in,str);
//            }
//        }

    cout<<endl<<endl;
    name=nameuse();//Function for user to write their name

    cout<<"How many tries would like?"<<endl; 
    info=tries();//Asking the user how many tries they would like
    cerr<<"hello!\n";
    pick.choice();
    //If statement to warn the user the number of tries they have implemented
    if(info.limit<10)
    {   
        cout<<endl<<endl<<"WARNING:you have inputted a smaller number then ";
        cout<<"the tries that"<<endl;
        cout<<"is allowed. If you would like to have to have 10 tries then"<<endl;
        cout<<"the number you inputted type 'c' otherwise type anything else."<<endl;
        cin>>info.change;
        info.change=toupper(info.change);//Changes the letter choice to uppercase

        //If statement to change the number of tries if the user wishes to
        if(info.change=='C'){
         info.limit=info.limit>numTry?info.limit:numTry;//Ternary operator
        }
    }
        cerr<<"hello!\n";
        pick.setlimit(info.limit);
        cerr<<"hello!\n";
        pick.comGen();
        com[0]=pick.getcomp1();
        com[1]=pick.getcomp2();
        com[2]=pick.getcomp3();
        com[3]=pick.getcomp4();
        
        
        //while loop to generate the number tries for the user
        while (n+1<=info.limit){
        
        cout<<endl<<"Please pick your colors you would want displayed going from"<<endl;
        cout<<"left to right."<<endl;

        //Output request the user to enter the 4 colors
        for (int i=0;i<4;i++)
        {
            cin>>choice[i];
            //If statement to uppercase the users choices
            if (choice[i]==choice[0]){
                for (int p=0;p<choice[0].size();p++){
                    choice[0][p]=toupper(choice[0][p]);
                }
            }
            if (choice[i]==choice[1]){
                for (int p=0;p<choice[1].size();p++){
                    choice[1][p]=toupper(choice[1][p]);}
            }
            if (choice[i]==choice[2]){
                for (int p=0;p<choice[2].size();p++){
                    choice[2][p]=toupper(choice[2][p]);}
            }
            if (choice[i]==choice[3]){
                for (int p=0;p<choice[3].size();p++){
                    choice[3][p]=toupper(choice[3][p]);}
            }
        }
        pick.setpick1(choice[0]);
        pick.setpick2(choice[1]);
        pick.setpick3(choice[2]);
        pick.setpick4(choice[3]);
        
        pick.setn(n);
        //Function to determine if the user has won or lost the game
        n=pick.wonLost(choice,com,info.limit,n,percent);

        //if statement to indicate the user has used up the ten turns they
        //to solve the same is over and is now considered they lost
        if (n==9){   
            //Output of results after all tries have been used up
            cout<<"You have used all your tries and have lost the game."<<endl<<endl;}
        n++;  
        }
        
        //Function that determine the results of the user
        pick.results(com,choice);
        
        //Function that determines if the user would like to play again
        info.answer=playA(info.answer);
        
        //If statement if the user decides to play again.
        if(info.answer=='Y'){
            cout<<"You have chosen '"<<info.answer<<"' as your answer therefore ";
            cout<<"the game will repeat."<<endl;}
        
        n=1;//Resets the increment of tries
        info.limit=0;
    }while(info.answer=='Y');
    
    delete []name;//Deletes the allocate memory of the user name
    in.close();//Closes the file
    //Exit stage right
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//         Allows the user to enter the name to associate with the game
//******************************************************************************
char *nameuse()
{
    int SIZE=99;//Creates the size the user can enter
    char *name = new char[SIZE];//allocates memory for what the user inputs
    
    //Asks for the users name
    cout<<"Please enter the name you would like associated with the game played."<<endl;
    cin.ignore();
    cin.getline(name, SIZE);
    return name;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                Allows the user to enter the number of tries
//******************************************************************************
Usepick tries()
{
    Usepick info;
    cin>>info.limit;
    return info;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                Asks the user if they would like to play again
//******************************************************************************
char playA(char answer)
{
    cout<<endl<<"Would you like to play again?"<<endl;
    cin>>answer;
    cout<<endl;
    answer=toupper(answer);
    return answer;
}
