/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 3:17 PM
 */

/*
    **Memory allocation

    ***Functions with structures, used as input and output

    Pointers with arrays and arrays of structures, internally as well as externally.

    ***Use of character arrays as well as string objects.

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
int compare(string [],string [],float,int&,int);//Comparison of the computer generated and the users
char hints(string [],string [],bool,char);//hints the user may have if they choose to
int tries(int);//The number of tries the user would want
void results(string [],string []);
char playA(char);
int wonLost(string [],string [],bool,char,int,int,float);
char * nameuse();

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
    char *name;
     
    //Do while loop to see if the user would like to play again
    do
    {
       //Open the file
        in.open("Instructions.txt", ios::in|ios::binary);

        //reads the file
        while (getline(in,str)){cout<<str;}
        in.close();
        cout<<endl;
        name = nameuse();
        cout<<"How many tries would like?"<<endl; 
        info.limit=tries(info.limit);
        //Color choices avaliable
        cout<<"The colors you can pick from are"<<endl;
        for(int r=0;r<2;r++)
        {   
            for(int c=0;c<4;c++)
                cout<<com[r][c]<<" ";
        }
        
        if(info.limit<10)
        {   
            cout<<endl<<"WARNING:you have inputted a smaller number then the tries that"<<endl;
            cout<<"is allowed. If you would like to have to have 10 tries then"<<endl;
            cout<<"the number you inputted type 'c' otherwise type anything else."<<endl;
            cin>>info.change;
          
            info.change=toupper(info.change);
            if(info.change=='C'){
             info.limit=info.limit>numTry?info.limit:numTry;
            }
        }

        //Determining colors by the computer
        comGen(com,compran);
        
        //while loop to generate the number tries for the user
        while (n+1<=info.limit)
        {
            //The color the user wants to pick
            useGen(info.choice);
            
            //Function to determine if the user has won or lost the game
            n=wonLost(info.choice,compran,hint2,info.hint,info.limit,n,percent);
            
            //if statement to indicate the user has used up the ten turns they had
            if (n==9)
            {   //Output of results after all tries have been used up
                cout<<"You have used all your tries and have lost the game."<<endl<<endl;}
            n++;  
        }
        results(compran,info.choice);

        
        info.answer=playA(info.answer);
        if(info.answer=='Y')
        {
            cout<<"You have chosen '"<<info.answer<<"' as your answer therefore the game will repeat."<<endl;
        }
        
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
{   cout<<endl; 
    for (int i=0;i<4;i++)
    {
        int index=rand()%4;
        int row=rand()%2;
        compran[i]=com[row][index];
//        cout<<compran[i]<<" ";
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
int compare(string compran[],string choice[], float percent,int &n, int limit)
{   
    //Output of results
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<endl<<"You have won the game!"<<endl;
    percent=((10-n)*10);
    cout<<"It took you "<<n+1<<" tries to solve the game! Based on your number of tries, your";
    cout<<" percentage is "<<percent<<"% accuracy!"<<endl;
    cout<<endl<<"You have used up "<<n+1<<" tries, you have "<<limit-n+1<<" tries left."<<endl<<endl;
    n=limit;
    return n;
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
                cout<<"XXX"<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&compran[3]==choice[3]){
                cout<<"XXX"<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"XXX"<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"XXX"<<endl;}
            else if(!(compran[0]==choice[0])&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&compran[3]==choice[3]){
                cout<<"XX";
                if(compran[0]==choice[1] && compran[1]==choice[0]){
                    cout<<"00";}
                else if(compran[0]==choice[1] && !(compran[1]==choice[0])){
                    cout<<"0";}
                else if(!(compran[0]==choice[1]) && compran[1]==choice[0]){
                    cout<<"0";}
                cout<<endl;}
            else if(!(compran[0]==choice[0])&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"XX";
                if(compran[0]==choice[2] && compran[2]==choice[0]){
                    cout<<"00";}
                else if(compran[0]==choice[2] && !(compran[2]==choice[0])){
                    cout<<"0";}
                else if(!(compran[0]==choice[2]) && compran[2]==choice[0]){
                    cout<<"0";}
                cout<<endl;}
            else if(!(compran[0]==choice[0])&&compran[1]==choice[1]&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"XX";
                if(compran[0]==choice[3] && compran[3]==choice[0]){
                    cout<<"00";}
                else if(compran[0]==choice[3] && !(compran[3]==choice[0])){
                    cout<<"0";}
                else if(!(compran[0]==choice[3]) && compran[3]==choice[0]){
                    cout<<"0";}
                cout<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"XX";
                if(compran[1]==choice[2] && compran[2]==choice[1]){
                    cout<<"00";}
                else if(compran[1]==choice[2] && !(compran[2]==choice[1])){
                    cout<<"0";}
                else if(!(compran[1]==choice[2]) && compran[2]==choice[1]){
                    cout<<"0";}
                cout<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"XX";
                if(compran[1]==choice[4] && compran[4]==choice[1]){
                    cout<<"00";}
                else if(compran[1]==choice[4] && !(compran[4]==choice[1])){
                    cout<<"0";}
                else if(!(compran[1]==choice[4]) && compran[4]==choice[1]){
                    cout<<"0";}
                cout<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&!(compran[3]==choice[3])){
                cout<<"XX";
                if(compran[2]==choice[3] && compran[3]==choice[2]){
                    cout<<"00";}
                else if(compran[2]==choice[3] && !(compran[3]==choice[2])){
                    cout<<"0";}
                else if(!(compran[2]==choice[3]) && compran[3]==choice[2]){
                    cout<<"0";}
                cout<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&!(compran[2]==choice[2])&&!(compran[3]==choice[3]))
            {
                cout<<"X";
                if((compran[1]==choice[2]||compran[1]==choice[3])&&(compran[2]==choice[1]||compran[2]==choice[3])&&(compran[3]==choice[1]||compran[3]==choice[2]))
                {
                    cout<<"000";
                }
                else if((compran[1]==choice[2]||compran[1]==choice[3])&&(compran[2]==choice[1]||compran[2]==choice[3]))
                {
                    cout<<"00";
                }
                else if((compran[3]==choice[1]||compran[3]==choice[2])&&(compran[2]==choice[1]||compran[2]==choice[3]))
                {
                    cout<<"00";
                }
                else if(!(compran[0]==choice[1]) && compran[1]==choice[0])
                {
                    cout<<"0";
                }
                cout<<endl;
            }
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
//                 Output the results for the user
//******************************************************************************
void results(string compran[],string choice[])
{
   //Output of results
    cout<<"The computer choices were            "<<compran[0]<<" "<<compran[1]<<" "<<compran[2]<<" "<<compran[3]<<endl;
    cout<<"Your final results were              "<<choice[0]<<" "<<choice[1]<<" "<<choice[2]<<" "<<choice[3]<<endl;
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
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Compares the user choices to the computer's to determine if they have won or lost
//******************************************************************************
int wonLost(string choice[],string compran [],bool hint2,char hint,int limit, int n, float percent)
{
    //if else statement to determine if the user has won or not
    if(compran[0]==choice[0]&&compran[1]==choice[1]&&compran[2]==choice[2]&&compran[3]==choice[3]){
    {
        limit=compare(compran,choice,percent,n,limit);
        return n;
    }
    }
    else
    {
        hints(compran,choice,hint2,hint);
        cout<<endl<<"You have used up "<<n+1<<" tries, you have "<<10-(n+1)<<" tries left before it is considered you have lost the game."<<endl;
        cout<<"You do however have "<<limit-(n+1)<<" tries left."<<endl;
        return n;
    }
}

char *nameuse()
{
    int SIZE=99;
    char *name = new char[SIZE]; 
    cout<<"Please enter the name you would like associated with the game played."<<endl;
    cin.getline(name, SIZE);
    return name;
}