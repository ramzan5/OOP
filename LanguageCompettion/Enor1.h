#ifndef ENOR1_H
#define ENOR1_H
#include"Enor.h"

struct Comp{
    int year;
    bool find;
};


class Enor1
{
    public:
        Enor1(const std::string &file):tt(file){}
        void first(){tt.first();next();};
        void next();
        Comp current()const{return curr;};
        bool end()const{return _end;};

    private:
        Enor tt;
        Comp curr;
        bool _end;
};

#endif // ENOR1_H
