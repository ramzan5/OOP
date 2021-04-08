#ifndef COMPETITION_H
#define COMPETITION_H
#include<fstream>
#include<string>
#include<sstream>

struct Competition{
    int year;
    std::string CompetitonName;
    bool find;
};


class competition
{
    public:
        enum Error{Invalid_File};
        competition(const std::string &file);
        void first(){next();};
        void next();
        Competition current()const{return curr;};
        bool end()const{return _end;};

    private:
        std::fstream file;
        Competition curr;
        bool _end;
};

#endif // COMPETITION_H
