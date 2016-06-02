/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 3:17 PM
 * Purpose: Playing the game Mastermind
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
    string pp[4];//The 4 colors the user chooses
    int limit;//The limit the user inputs
    char answer,change;//The response of whether the user would like to 
                             //play again,take a hint, or change their number of 
                             //tries 
};

//Global Constants

//Functional Prototypes
char * nameuse();//Function to ask the user for the name
Usepick tries();//The number of tries the user would want
void comGen(string [][4],string []);//Function to generate the 4 random colors 
                                    //from the computer
void useGen(string[]);//Function to allow the user to enter their four colors
int wonLost(string [],string [],int,int,float);//Function to determine
                                                         //if the user has won or
                                                         //Lost
int compare(string [],string [],float,int&,int);//Comparison of the computer 
                                                //generated and the users
void hints(string [],string []);//hints the user may have if they 
                                          //choose to
void results(string [],string []);//Displays the results of the game
char playA(char);//Function to ask the user if they would like play again



//Execution Begins Here
int main(int argc, char** argv) {
    
    //Set the random number seed
    srand(time(NULL));

    //Declare and initialize variable  
    string com[2][4]={{"RED","BLUE","GREEN","BROWN"},
                     {"WHITE","BLACK","ORANGE","YELLOW"}};//Array that the 
                                                          //computer picks from
    string cp[4]; //The 4 colors the computer generates
    int numTry=10;//The number of tries the user gets before it is considered 
                  //they have lost.
    int n=0;//The increments to indicate the turns allowed before the user loses
    float percent;//The intervals of the turns, the percentage of the accuracy 
    fstream in;//File output 
    Usepick info;//Brings the information to the structure
    string str;//String that is being used to bring the file to the program
    char *name;//Ask for the users name
     
    //Do while loop to see if the user would like to play again
    do
    {
        in.open("Instructions.txt", ios::in|ios::binary);//Opens the file

        while (getline(in,str)){
            cout<<str;}//reads the file into the program
        
        in.close();//Closes the file
        cout<<endl<<endl;
        
        name=nameuse();//Function for user to write their name
        
        cout<<"How many tries would like?"<<endl; 
        info=tries();//Asking the user how many tries they would like
        
        //Color choices avaliable in for loop
        cout<<"The colors you can pick from are"<<endl;
        for(int r=0;r<2;r++){   
            for(int c=0;c<4;c++)
                cout<<com[r][c]<<" ";
        }
        
        //If statement to warn the user the number of tries they have implemented
        if(info.limit<10){   
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
        comGen(com,cp);//Determining colors by the computer
        
        //while loop to generate the number tries for the user
        while (n+1<=info.limit){
            useGen(info.pp);//The color the user wants to pick
            
            //Function to determine if the user has won or lost the game
            n=wonLost(info.pp,cp,info.limit,n,percent);
            
            //if statement to indicate the user has used up the ten turns they
            //to solve the same is over and is now considered they lost
            if (n==9){   
                //Output of results after all tries have been used up
                cout<<"You have used all your tries and have lost the game."<<endl<<endl;}
            n++;  
        }
        
        //Function that determine the results of the user
        results(cp,info.pp);
        
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
//                 Generates the computer's random values
//******************************************************************************
void comGen (string com[][4], string cp[])
{   
    cout<<endl; 
    for (int i=0;i<4;i++)
    {
        int index=rand()%4;//Generates a number 1-4 for the computer pick
        int row=rand()%2;//Generate a number 1-2 for the computer pick
        cp[i]=com[row][index];//Generates the computer pick
        cout<<cp[i]<<" ";//DELETENOW
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                 Gets the four choices the user inputs
//******************************************************************************
void useGen(string pp[])
{
    cout<<endl<<"Please pick your colors you would want displayed going from"<<endl;
    cout<<"left to right."<<endl;
    
    //Output request the user to enter the 4 colors
    for (int i=0;i<4;i++){
        cin>>pp[i];
        //If statement to uppercase the users choices
        if (pp[i]==pp[0]){
            for (int p=0;p<pp[0].size();p++){
                pp[0][p]=toupper(pp[0][p]);}
        }
        if (pp[i]==pp[1]){
            for (int p=0;p<pp[1].size();p++){
                pp[1][p]=toupper(pp[1][p]);}
        }
        if (pp[i]==pp[2]){
            for (int p=0;p<pp[2].size();p++){
                pp[2][p]=toupper(pp[2][p]);}
        }
        if (pp[i]==pp[3]){
            for (int p=0;p<pp[3].size();p++){
                pp[3][p]=toupper(pp[3][p]);}
        }
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Compares the user choices to the computer's to determine if they have won or lost
//******************************************************************************
int wonLost(string pp[],string cp [],int limit, int n, float percent)
{
    //if else statement to determine if the user has won or not
    if(cp[0]==pp[0]&&cp[1]==pp[1]&&cp[2]==pp[2]&&cp[3]==pp[3]){
    {
        //Gives the comparison of the user to the computer choice
        limit=compare(cp,pp,percent,n,limit);
        return n;
    }
    }
    else
    {
        //Gives hints if the user decides to have
        hints(cp,pp);
        cout<<endl<<"You have used up "<<n+1<<" tries, you have "<<10-(n+1)<<" ";
        cout<<"tries left before it is considered you have lost the game."<<endl;
        cout<<"You do however have "<<limit-(n+1)<<" tries left."<<endl;
        return n;
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*              Results if the user has won the game                           */
/******************************************************************************/
int compare(string cp[],string pp[], float percent,int &n, int limit)
{   
    //Output of results
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<endl<<"You have won the game!"<<endl;
    percent=((10-n)*10);
    cout<<"It took you "<<n+1<<" tries to solve the game! Based on your number ";
    cout<<"of tries, your";
    cout<<" percentage is "<<percent<<"% accuracy!"<<endl;
    cout<<endl<<"You have used up "<<n+1<<" tries, you have "<<limit-n+1<<" ";
    cout<<"tries left."<<endl<<endl;
    n=limit;
    return n;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                     Results if the user has not won                        */
/******************************************************************************/
void hints(string cp[],string pp[])
{
    bool match[4];
    int x=0;                        
    int o=0;
    cout<<endl<<"HINT: ";
    
    for(int i=0;i<4;i++)
    {
        if (pp[i]==cp[i])
        {
            x++;
            match[i]=true;
        }
    }
    
    if(x==1)
    {
        cout<<"X";
    }
    else if(x==2)
    {
        cout<<"XX";
    }
    else if(x==3)
    {
        cout<<"XXX";
    }
    else if(x==4)
    {
        cout<<"XXXX"<<endl;
    }

    for(int i=0;i<4;i++)
    {
        if(match[i]==false)
        {
            for(int j=0;j<4;j++)
            {
                if(j!=i && match[i]==false)
                {
                    if(pp[i]==cp[j])
                    {
                        match[j]=true;
                        o++;
                        break;
                    }
                }
            }
        }
    }
    
    if(o==1)
    {
        cout<<"O";
    }
    else if(o==2)
    {
        cout<<"OO";
    }
    else if(o==3)
    {
        cout<<"OOO";
    }
    else if(o==4)
    {
        cout<<"OOOO"<<endl;
    }
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                 Output the results for the user
//******************************************************************************
void results(string cp[],string pp[])
{
   //Output of results
    cout<<"The computer choices were            "<<cp[0]<<" "<<cp[1]<<" ";
    cout<<cp[2]<<" "<<cp[3]<<endl;
    cout<<"Your final results were              "<<pp[0]<<" "<<pp[1]<<" ";
    cout<<pp[2]<<" "<<pp[3]<<endl;
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
//ON THE SECOND TRY TRYING TO GUESS THE NAME WAS NOT ALLOWED TO BE ENTERED ALSO 
//THERE WAS A LIMIT COUNT ERROR, AFTER THE FIRST TRY OF THE SECOND ATTEMPT OF RUNNING
//THE PROGRAM TWO TRIES WERE COUNTED INSTEAD OF ONE TRY