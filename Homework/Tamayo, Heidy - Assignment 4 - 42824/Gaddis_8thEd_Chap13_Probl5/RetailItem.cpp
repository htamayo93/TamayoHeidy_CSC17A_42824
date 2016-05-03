/* 
 * File:   RetailItem.cpp
 * Author: Heidy Tamayo
 * Created on May 2, 2016, 12:13 PM
 */

#include "RetailItem.h"

void RetailItem::setdescrip(string x)
{
    descrip=x;
}
string RetailItem::getdescrip()
{
    return descrip;
}
void RetailItem::setunit(int x)
{
    unit=x;
}
int RetailItem::getunit()
{
    return unit;
}
void RetailItem::setprice(float x)
{
    price=x;
}
float RetailItem::getprice()
{
    return price;
}
