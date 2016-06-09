/* 
 * File:   Message.h
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 8:48 PM
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef MESSAGE_H
#define MESSAGE_H

template <class T>//sets the template
class Message{
private:
    T mess;//The variable set mess from T
public:
    Message(T x){//Brings the value from main to the variable
        mess=x;
    }
    T printMes()const{//Function that prints the variable that is saved
        return mess;
    }
};

#endif /* MESSAGE_H */