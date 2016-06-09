/*
 * File:   Validation.h
 * Author: Heidy Tamayo
 * Created on June 7, 2016, 3:42 PM
 */

#ifndef VALIDATION_H
#define VALIDATION_H

class Validation {
private:
    char val;//Variable used for when brought in from main it is validated
public:
    class Except{};//Blank class to test for validation
    void setval(char);//Sets the value from main and is tested for a correct input
    char getval();//Returns the value back to main once validated
    
};

#endif /* VALIDATION_H */