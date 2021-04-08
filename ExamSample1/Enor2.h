#ifndef ENOR2_H
#define ENOR2_H
#include<string>
#include "Enor.h"

struct Customer{
    std::string customerName;
    bool atleast;
};

class Enor2
{
    public:
        Enor2(const std::string &file):tt(file){}
        void first(){tt.first();next();};
        void next();
        Customer current()const{return curr;};
        bool end()const{return _end;};


    private:
        Enor tt;
        Customer curr;
        bool _end;

};

#endif // ENOR2_H
