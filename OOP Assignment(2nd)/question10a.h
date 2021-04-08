#ifndef QUESTION10A_H
#define QUESTION10A_H
#include<string>
#include<sstream>
#include<fstream>

struct Contest10{
    std::string name;
    std::string id;
    int weight;
    bool found;
};

class question10a
{
    public:
        enum Error{WrongFile};
        question10a(const std::string &file);
        void first(){next();};
        void next();
        Contest10 current()const{return curr;};
        bool end()const{return _end;};

    private:
        std::ifstream file;
        Contest10 curr;
        bool _end;
};

#endif // QUESTION10A_H
