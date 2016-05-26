/* 
 * File:   test.h
 * Author: rcc
 *
 * Created on May 26, 2016, 3:42 PM
 */

#ifndef TEST_H
#define	TEST_H
template <typename T,typename T2>
class test {
    private: 
        T blah;
        T2 te;
    public:
        test(){}
        void setblah(T a){blah = a;}
        T getblah(){return blah;}
        T2 gette();
        void sette(T2 a);
};

template <class T>
void test<T>::sette(T2 a){
    
}


#endif	/* TEST_H */

