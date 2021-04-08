#ifndef ENOR2_H
#define ENOR2_H
#include "Enor.h"
struct Station{
    std::string BlackHoleName;
    int Weight;
    int Cnt;
    bool isClose;
};

class Enor2
{
    public:
        Enor2(const std::string &file):tt(file){}
        void first(){tt.first();next();};
        void next();
        Station current()const {return curr;};
        bool end()const{return _end;};

    private:
        Enor tt;
        Station curr;
        bool _end;
};

#endif // ENOR2_H
