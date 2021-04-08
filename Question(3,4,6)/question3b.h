#ifndef QUESTION3B_H
#define QUESTION3B_H
#include<string>
#include<fstream>
#include<sstream>
struct ContestInfo{
    std::string _Name;
    std::string _ID;
    int _Size;
    bool _found;
};

class question3b
{
    public:
        enum Error{INVALIDFILE};
        question3b(const std::string &file);
        void first(){next();};
        void next();
        ContestInfo current()const{return curr;};
        bool end()const {return _end;};

    private:
        std::fstream file;
        ContestInfo curr;
        bool _end;
};



#endif // QUESTION3B_H
