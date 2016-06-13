/* 
 * File:   TeamLeader.h
 * Author: Heidy Tamayo
 * Created on June 1, 2016, 4:13 AM
 */

#include <iostream>
#include "ProductionWorker.h"
using namespace std;

#ifndef TEAMLEADER_H
#define TEAMLEADER_H

class TeamLeader:public ProductionWorker 
{
    public:
        TeamLeader();
        TeamLeader(string,int,int,int,float,int,int,int);
        void setbonus(int);
        int getbonus();
        void sethrR(int);
        int gethrR();
        void sethrT(int);
        int gethrT();
    private:
        int bonus;
        int reqTr;
        int actTr;
};

#endif /* TEAMLEADER_H */

