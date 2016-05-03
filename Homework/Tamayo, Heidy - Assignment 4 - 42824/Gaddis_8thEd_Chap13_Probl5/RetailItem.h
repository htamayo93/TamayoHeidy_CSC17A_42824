/* 
 * File:   RetailItem.h
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 12:13 PM
 */
#include <string>
#include <iostream>
using namespace std;

#ifndef RETAILITEM_H
#define	RETAILITEM_H

class RetailItem {
public:
    void setdescrip(string);
    string getdescrip();
    void setunit(int);
    int getunit();
    void setprice(float);
    float getprice();
private:
    string descrip;
    int unit;
    float price;
};

#endif	/* RETAILITEM_H */

