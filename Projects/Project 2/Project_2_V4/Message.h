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

template <class T>
class Message{
private:
    T mess;
public:
    Message(T x){
        mess=x;
    }
    T printMes()const{
        return mess;
    }
};

#endif /* MESSAGE_H */