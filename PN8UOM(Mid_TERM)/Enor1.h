#ifndef ENOR1_H
#define ENOR1_H
#include<string>
#include<fstream>
#include<sstream>

struct Emperor{
    std::string legion;
    std::string Starship;
    int Cnt_Planet;
    bool visitedCaliban;
    bool vistedMacragge;

};

class Enor1
{
    public:
        enum Error{Invalid_File};
        Enor1(const std::string &file);
        void first(){next();};
        void next();
        Emperor current()const{return curr;};
        bool end()const{return _end;};

    private:
        std::fstream file;
        Emperor curr;
        bool _end;
};

#endif // ENOR1_H
