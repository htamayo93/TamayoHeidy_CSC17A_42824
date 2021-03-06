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
#include <ctime>    //Time

//User Libraries
#include "Results.h"//Class that does the comparison of the choices and shows results
#include "Message.h"//Class that shows the mastermind 
#include "changelimit.h"//Class that changes the limit if the number of turns has
                        //ended
#include "Validation.h"
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
void game();//Function that displays mastermind 
void Menu();//Function that displays if the user would like see an example
int getN();//Function that takes in the users input of the menu
void example();//Function that displays an example of an input and output
char * nameuse();//Function to ask the user for the name
Usepick tries();//The number of tries the user would want
char playA(char);//Function to ask the user if they would like play again

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(time(NULL));

    //Declare and initialize variable
    ifstream in;//File output     
    string str;//String that is being used to bring the file to the program    
    int inN;//The number that is inputted to determine if the user would like to
            //see an example
    bool reDsply=true;//Used for the switch function to default    
    char *name;//Ask for the users name    
    Usepick info;//Brings the information to the structure    
    Results pick;//Object to set and bring back from the class
    int numTry=10;//The number of tries the user gets before it is considered 
                  //they have lost.    
    string com[4];//Sets the four colors for the computer    
    string choice[4];//The 4 colors the user chooses
    int n=0;//The increments to indicate the turns allowed before the user loses
    float percent;//The intervals of the turns, the percentage of the accuracy 
    changelimit change;//Allows the user to change the limit of their tries
    char ans;//Answer the user inputs to determine if they would like to play again
    Validation valid;
    bool correct=true;

    //Do while loop to see if the user would like to play again
    do
    {
        //Function that displays the message
        game();
        cout<<endl<<endl;
        //Try catch function in order to display the instructions from the text
        try 
        {
          in.open("Instructions.txt",ios::in|ios::binary);//Opens the file   
        }
        catch (std::ios_base::failure& e) 
        {
          std::cerr << e.what() << '\n';
        }
        
        //Reads the file into the program 
        if(in.is_open())
        {
            while(getline(in,str))
            {
                cout<<str << endl;
            }
        }
        in.close();//Closes the file
        cout<<endl<<endl;
        Menu();//Menu asking the user if they would like to see an example
        inN=getN();//Input that user puts to know if they would like an example
        
        //Switch statement to determine if the program should show the example
        switch(inN)
        {
            case 1:  {example();break; }//Shows the example
            default: {reDsply=false;}
        }
        cout<<endl;
        
        name=nameuse();//Function for user to write their name

        cout<<"How many tries would like?"<<endl; 
        info=tries();//Asking the user how many tries they would like

        pick.choice();//Declares the color the user can use

        //If statement to warn the user the number of tries they have implemented
        if(info.limit<10){   
            cout<<endl<<endl<<"WARNING:you have inputted a smaller number then ";
            cout<<"the tries that"<<endl;
            cout<<"is allowed. If you would like to have to have 10 tries then"<<endl;
            cout<<"the number you inputted type 'c' otherwise type 'n' to skip this."<<endl;
            cin>>info.change;
            info.change=toupper(info.change);//Changes the letter choice to uppercase
 
            while(correct)
            {
                try{
                    valid.setval(info.change);
                    correct=false;
                }
                catch(Validation::Except)
                {
                    cout<<"You have an invalid character. Please try again."<<endl;
                    cin>>info.change;
                    info.change=toupper(info.change);//Changes the letter choice to uppercase 
                }
            }
            
            //If statement to change the number of tries if the user wishes to
            if(valid.getval()=='C'){
             info.limit=info.limit>numTry?info.limit:numTry;//Ternary operator
            }
        }
        
        cout<<info.limit<<"HERE"<<endl;
        pick.setlimit(info.limit);//Sets the limit to class
        pick.comGen();//Generates the random colors for the computer

        //Sets the colors the computer has generated to main
        com[0]=pick.getcomp1();
        com[1]=pick.getcomp2();
        com[2]=pick.getcomp3();
        com[3]=pick.getcomp4();

        //while loop to generate the number tries for the user
        while (n+1<=info.limit)
        {
            cout<<endl<<"Please pick your colors you would want displayed going"<<endl;
            cout<<"from left to right."<<endl;
            //Output request the user to enter the 4 colors
            for (int i=0;i<4;i++)
            {
                cin>>choice[i];
                //If statement to uppercase the users choices
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
                        choice[1][p]=toupper(choice[1][p]);}
                }

                if (choice[i]==choice[2])
                {
                    for (int p=0;p<choice[2].size();p++)
                    {
                        choice[2][p]=toupper(choice[2][p]);}
                }

                if (choice[i]==choice[3])
                {
                    for (int p=0;p<choice[3].size();p++)
                    {
                        choice[3][p]=toupper(choice[3][p]);}
                }
            }
            //Sets the color choices to the class
            pick.setpick1(choice[0]);
            pick.setpick2(choice[1]);
            pick.setpick3(choice[2]);
            pick.setpick4(choice[3]);

            pick.setn(n);//Sets the increment in the classes

            //Function to determine if the user has won or lost the game
            n=pick.wonLost(choice,com,info.limit,n,percent);

            //if statement to indicate the user has used up the ten turns they
            //to solve the same is over and is now considered they lost
            if (n==9)
            {   
                //Output of results after all tries have been used up
                cout<<"You have used all your tries and have lost the game."<<endl<<endl;
            }
            n++;//increments the turns
            
            //If statement to allow the user to have an extra turn if they run out
            if(n==info.limit)
            {
                cout<<"You have lost the game however you can increment your play"<<endl;
                cout<<"by 1 if you would like to keep playing. Type Y for yes or"<<endl;
                cout<<"any other character to not take a extra turn."<<endl;
                cin>>ans;
                ans=toupper(ans);
                
                correct=true;
                while(correct)
                {
                    try
                    {
                        valid.setval(ans);
                        correct=false;
                    }
                    catch(Validation::Except)
                    {
                        cout<<"You have an invalid character. Please try again."<<endl;
                        cin>>ans;
                        ans=toupper(ans);//Changes the letter choice to uppercase 
                    }
                }
                if(valid.getval()=='Y')
                {
                    //To determine if the limit should be changed
                    change.setlimit2(info.limit);
                    ++change;
                    pick.setlimit(change.getlimit2());
                    info.limit=change.getlimit2();
                }
            }
        }

        //Function that determine the results of the user
        pick.results(com,choice);

        //Function that determines if the user would like to play again
        info.answer=playA(info.answer);
        
        correct=true;
        while(correct)
        {
            try
            {
                valid.setval(info.answer);
                correct=false;
            }
            catch(Validation::Except)
            {
                cout<<"You have an invalid character. Please try again."<<endl;
                cin>>info.answer;
                info.answer=toupper(info.answer);//Changes the letter choice to uppercase 
            }
        }
        //If statement if the user decides to play again.
        if(valid.getval()=='Y'){
            cout<<"You have chosen '"<<info.answer<<"' as your answer therefore ";
            cout<<"the game will repeat."<<endl;
        }

        n=1;//Resets the increment of tries
        info.limit=0;
    }while(valid.getval()=='Y');
    
    delete []name;//Deletes the allocate memory of the user name
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                Gives the name of the game using a template
//******************************************************************************
void game()
{
    Message<string>word("#     #");                                                          
    Message<string>word1("##   ##   ##    ####  ##### ###### #####  #    # # #  "
    "  # #####");  
    Message<string>word2("# # # #  #  #  #        #   #      #    # ##  ## # ## "
    "  # #    #"); 
    Message<string>word3("#  #  # #    #  ####    #   #####  #    # # ## # # # #"
    "  # #    #"); 
    Message<string>word4("#     # ######      #   #   #      #####  #    # # #  "
    "# # #    #");
    Message<string>word5("#     # #    # #    #   #   #      #   #  #    # # #  "
    " ## #    #"); 
    Message<string>word6("#     # #    #  ####    #   ###### #    # #    # # #  "
    "  # #####");
    
    cout<<word.printMes()<<endl;
    cout<<word1.printMes()<<endl;
    cout<<word2.printMes()<<endl;
    cout<<word3.printMes()<<endl;
    cout<<word4.printMes()<<endl;
    cout<<word5.printMes()<<endl;
    cout<<word6.printMes()<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//    Menu Function to determine if the user would like to see an example
//*****************************************************************************/
void Menu()
{
    cout<<"Type 1 to see an example input and output."<<endl;
    cout<<"Type any other number to continue playing the game."<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                   Integer response to the Menu
//******************************************************************************
int getN()
{
    int inN;
    cin>>inN;
    return inN;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//              Gives an example to user of an input and an output
//******************************************************************************
void example()
{
    cout<<"EXAMPLE:"<<endl;
    cout<<"Computer's Colors: BLUE GREEN RED WHITE."<<endl;
    cout<<"User's Input: blue blue blue red "<<endl;
    cout<<"Output: XO"<<endl;
    cout<<"This would indicate that you have one color in the correct spot and"<<endl;
    cout<<"you used one color correctly but it wasn't in the correct spot."<<endl;
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