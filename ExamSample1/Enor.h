#ifndef ENOR_H
#define ENOR_H
#include<string>
#include<fstream>
#include<sstream>
struct Contest{
    std::string nikName;
    std::string shootingGall;
    int counter;
};
class Enor
{
    public:
        enum Error{WrongFile};
        Enor(const std::string &file);
        void first(){next();};
        void next();
        Contest current()const{return curr;};
        bool end()const{return _end;};


    private:
        std::ifstream file;
        Contest curr;
        bool _end;
};

#endif // ENOR_H
