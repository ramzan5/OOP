#ifndef ENOR2_H
#define ENOR2_H
#include "Enor1.h"

struct VisitedBoth{
    std::string legions;
    bool cal, macar;
};
class Enor2
{
    public:
        Enor2(const std::string &file):ff(file){}
        void first(){ff.first();next();};
        void next();
        VisitedBoth current()const{return curr;};
        bool end()const{return _end;};

    private:
        Enor1 ff;
        VisitedBoth curr;
        bool _end;
};

#endif // ENOR2_H
