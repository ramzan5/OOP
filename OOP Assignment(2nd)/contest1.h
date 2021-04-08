#ifndef CONTEST1_H
#define CONTEST1_H
#include<string>
#include<fstream>
#include<sstream>
struct Champ {
    std::string Name;
    std::string id;
    int maxSize;

};
class contest1
{
    public:
        enum Error{ Not_Corrected};
        contest1 (const std::string &file);
        void first(){next();};
        void next();
        Champ current() const{return curr;};
        bool end() const {return _end;};
    private:
        std::ifstream file;
        Champ curr;
        bool _end;

};

#endif // CONTEST1_H
