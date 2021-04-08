#ifndef QUESTION3_H
#define QUESTION3_H
#include"question3b.h"

struct Cont{
    std::string id;
    bool finder;
};

class question3
{
    public:
        question3(const std::string &str):tt(str){}
        void first(){tt.first();next();};
        void next();
        Cont current()const {return curr;};
        bool end()const{return _end;};


    private:
        question3b tt;
        Cont curr;
        bool _end;
};

#endif // QUESTION3_H
