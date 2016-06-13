/* 
 * File:   main.cpp
 * Author: heidy
 * Created on March 8, 2016, 7:19 PM
 */

//System Libraries
#include <iostream>
#include <cstddef>
#include <iomanip>
using namespace std;

//User Libraries
struct MovieData{
    string title;
    string director;
    int year;
    int time;
};

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
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
   
    return 0;
}
