/* 
 * File:   Results.h
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 2:40 PM
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef RESULTS_H
#define	RESULTS_H

class Results {
private:

public:
    Results();
    int wonLost(string [],string [],int,int,float);//Function to determine
                                                         //if the user has won or
                                                         //Lost
    int compare(float,int&,int);//Comparison of the computer 
                                                //generated and the users
    void hints(string [],string []);//hints the user may have if they 
                                          //choose to
    void results(string [],string []);//Displays the results of the game


};

#endif	/* RESULTS_H */

