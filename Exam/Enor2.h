#ifndef ENOR2_H
#define ENOR2_H
#include "Enor1.h"

struct Service{
    std::string Name;
    int cnt;
};

class Enor2
{
    public:
        Enor2(const std::string &file):tt(file){}
        void first(){tt.first();next();};
        void next();
        Service current()const{return curr;};
        bool end()const{return _end;};


    private:
        Enor1 tt;
        Service curr;
        bool _end;
};

#endif // ENOR2_H
