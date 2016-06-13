/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: To use the weather reported from a text and report the amount of rainy,
 * sunny, and cloudy days of each month and the total. Also which had the most rain.
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const int month=3,day= 30;//Number of months and days
    char condit[month][day];// Creates the 3 X 30 array of weather condition
    int sunny=0,rainy=0,cloudy=0;//Will determining the amount of each for the weather conditions
    int sunTot=0,rainTot=0,clouTot=0;//Adds all the days of each condition
    int bigRain=0;//Determines when was the most rain occurred
    
    ifstream info;
    info.open("RainOrShine.txt");//Opens the file
    if (!info)
    {
        cout <<"An error occurred while opening the file, please try again."<<endl;
    }
    else
    {
	for (int i=0;i<month;i++)
	{
            for (int j= 0;j<day;j++)
            {
		info>>condit[i][j];//reads the information from the file
            }
	}
    }
    info.close();//Closes the file

    //Displays the report
    cout<<"Weather report for all three months"<<endl<<endl;

    //Calculates the sunny,rainy, and cloudy for june
    for (int j=0;j<day;j++)
    {
        switch (condit[0][j])
        {
            case 'S' : sunny++;break;
            case 'R' : rainy++;break;
            case 'C' : cloudy++;break;
        }
    }
    
    //Output of results
    cout<<"In the month of June:"<<endl;
    cout<<"The amount of rainy days was "<<rainy<<"."<<endl;
    cout<<"The amount of sunny days was "<<sunny<<"."<<endl;
    cout<<"The amount of cloudy days was "<<cloudy<<"."<<endl<<endl;
    sunTot=sunny;//Adding the amount of sunny days to the total
    rainTot=rainy;//Adding the amount of rainy days to the total
    clouTot=cloudy;//Adding the amount of the cloudy days to the total
    bigRain=rainy;//sets as the rainy month for now
    sunny=0,rainy=0,cloudy=0;//resets the values
    
    //Calculates the amount of sunny,rainy, and cloudy days for july
    for (int j=0;j<day;j++)
    {
        switch (condit[1][j])
        {
            case 'S' : sunny++;break;
            case 'R' : rainy++;break;
            case 'C' : cloudy++;break;
        }
    }
    
    //Output of results
    cout<<"In the month of July:"<<endl;
    cout<<"The amount of rainy days was "<<rainy<<"."<<endl;
    cout<<"The amount of sunny days was "<<sunny<<"."<<endl;
    cout<<"The amount of cloudy days was "<<cloudy<<"."<<endl<<endl;
    
    //If loop to determine which month had more rain
    if(bigRain<rainy)
    {
        bigRain=rainy;
    }
    sunTot=sunTot+sunny;//Adding the amount of sunny days to the total
    rainTot=rainTot+rainy;//Adding the amount of rainy days to the total
    clouTot=clouTot+cloudy;//Adding the amount of cloudy days to the total
    sunny=0,rainy=0,cloudy=0;//Resets the values
    
    //Calculates the amount of rainy, sunny, and cloudy weather for august
    for (int j=0;j<day;j++)
    {
        switch (condit[2][j])
        {
            case 'S' : sunny++;break;
            case 'R' : rainy++;break;
            case 'C' : cloudy++;break;
        }
    }
    
    //Output of results
    cout<<"In the month of August:"<<endl;
    cout<<"The amount of rainy days was "<<rainy<<"."<<endl;
    cout<<"The amount of sunny days was "<<sunny<<"."<<endl;
    cout<<"The amount of cloudy days was "<<cloudy<<"."<<endl<<endl;
    
    //If loop to determine which month had more rain
    if(bigRain<rainy)
    {
        bigRain=rainy;
    }
    sunTot=sunTot+sunny;//Adding the amount of sunny days to the total
    rainTot=rainTot+rainy;//Adding the amount of rainy days to the total
    clouTot=clouTot+cloudy;//Adding the amount of cloudy days to the total
    
    //Output of results
    cout <<"For the three months combined."<<endl;
    cout<<"The total amount of rainy days was "<<rainTot<<"."<<endl;
    cout<<"The total amount of sunny days was "<<sunTot <<"."<<endl;
    cout<<"The total amount of cloudy days was "<<clouTot<<"."<<endl;

    // Displays the month with the most rainy days
    cout<<endl<<"The month with the most rainy days was ";
        if (bigRain==9)
        {
            cout<<"June with "<<bigRain<<" rainy days."<<endl<<endl;
        }
        else if(bigRain==6)
        {
            cout<<"July with "<<bigRain<<" rainy days."<<endl<<endl;
        }
        else if (bigRain==10)
        {
            cout<<"August with "<<bigRain<<" rainy days."<<endl<<endl;
        }
	return 0;
}