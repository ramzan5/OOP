#ifndef ENOR_H
#define ENOR_H
#include<string>
#include<fstream>
#include<sstream>
struct StationInfo{
    std::string BlackHole;
    std::string Station;
    std::string date;
    int weight;
    int distance;
    bool isCloser;
};
class Enor
{
    public:
        enum Error{WrongFile};
        Enor(const std::string &ifile);
        void first(){next();};
        void next();
        StationInfo current()const{return _curr;};
        bool end()const{return _end;};

    private:
        std::ifstream file;
        StationInfo _curr;
        bool _end;
};

#endif // ENOR_H
