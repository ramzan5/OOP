#ifndef ENOR_H
#define ENOR_H
#include<string>
#include<fstream>

struct NumberCounter{
    int num;
    int counter;
};

enum Status{norm,abnorm};
class Enor{

public:
    enum Error {WrongFILE};
    Enor(const std::string& file);
    void first(){read();next();};
    void next();
    NumberCounter current(){return numCount;}
    bool end()const {return _end;}


private:
    std::ifstream ff;
    NumberCounter numCount;
    int num;
    bool _end;
    Status st;
    void read();

};
#endif // ENOR_H
