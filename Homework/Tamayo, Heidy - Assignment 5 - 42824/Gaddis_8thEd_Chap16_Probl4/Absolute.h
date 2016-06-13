/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Absolute.h
 * Author: heidy
 *
 * Created on June 13, 2016, 6:00 AM
 */

#include <iostream>
using namespace std;

#ifndef ABSOLUTE_H
#define ABSOLUTE_H

template<class T>
class Absolute 
{
    private:
        T whole;
    public:
        void setAbs(T x)
        {
            whole=x;
        }
        
        T getAbs()
        {
            return whole;
        }
        
        T findAbs(){
            if(whole<0)
            {
                return -whole;
            }
            else
            {
                getAbs();
            }
        }
};


#endif /* ABSOLUTE_H */

