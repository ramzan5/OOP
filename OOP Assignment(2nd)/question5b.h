#ifndef QUESTION5B_H
#define QUESTION5B_H
#include<string>
#include "question5a.h"
struct ConstestInf {
    std::string id;
    bool atleast;
};

class question5b
{
    public:
        question5b(const std::string &file):rr(file){}
        void first(){rr.first();next();};
        void next();
        ConstestInf current()const{return curr;}
        bool end()const{return _end;};




    private:
        question5a rr;
        ConstestInf curr;
        bool _end;
};

#endif // QUESTION5B_H
