#ifndef ENOR1_H
#define ENOR1_H
#include<fstream>
#include<string>
#include<sstream>

struct Registeration{
    std::string Name;
    std::string CompanyName;
    int Maxprice;
    bool found;

};

class Enor1
{
    public:
        enum Error{Invalid_File};
        Enor1(const std::string &file);
        void first(){next();};
        void next();
        Registeration current()const{return curr;};
        bool end()const{return _end;};

    private:
        std::ifstream file;
        Registeration curr;
        bool _end;
};

#endif // ENOR1_H
