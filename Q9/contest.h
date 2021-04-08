#ifndef CONTEST_H
#define CONTEST_H
#include<string>
#include<fstream>
#include<sstream>

struct Contest{
    std::string Name;
    std::string ID;
    int fish_counter;
};
class contest
{
    public:
        enum Error{INVALID_FILE};
        contest(const std::string &file);
        void first(){next();};
        void next();
        Contest current()const{return curr;};
        bool end() const {return _end;};


    private:
        std::ifstream file;
        Contest curr;
        bool _end;
};

#endif // CONTEST_H
