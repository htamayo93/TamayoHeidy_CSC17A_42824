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

