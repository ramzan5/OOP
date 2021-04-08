#ifndef QUESTION3A_H
#define QUESTION3A_H
#include<string>
#include<fstream>
#include<sstream>
struct Contest{
    std::string Name;
    std::string ID;
    int Size;
    bool found;
};

class question3a
{
    public:
        enum Error{INVALIDFILE};
        question3a(const std::string &file);
        void first(){next();};
        void next();
        Contest current()const{return curr;};
        bool end()const {return _end;};

    private:
        std::fstream file;
        Contest curr;
        bool _end;
};

#endif // QUESTION3A_H
