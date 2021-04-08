#ifndef ENOR_H
#define ENOR_H
#include<fstream>
#include<string>
#include<sstream>

struct Compete{
    int year;
    std::string CompetitonName;
    bool find;
};


class Enor
{
    public:
        enum Error{Invalid_File};
        Enor(const std::string &file);
        void first(){next();};
        void next();
        Compete current()const{return curr;};
        bool end()const{return _end;};
    private:
        std::fstream file;
        Compete curr;
        bool _end;
};


#endif // ENOR_H
