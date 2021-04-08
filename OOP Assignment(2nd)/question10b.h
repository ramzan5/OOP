#ifndef QUESTION10B_H
#define QUESTION10B_H
#include<string>
#include "question10a.h"

struct Comp{
    std::string id;
    int cnt;
    bool found;
};
class question10b
{
    public:
        question10b(const std::string &file):tt(file){}
        void first(){tt.first();next();};
        void next();
        Comp current()const{return curr;};
        bool end()const{return _end;};




    private:
        question10a tt;
        Comp curr;
        bool _end;
};

#endif // QUESTION10B_H
