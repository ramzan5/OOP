#ifndef QUESTION5A_H
#define QUESTION5A_H

#include<string>
#include<fstream>
#include<sstream>
struct Contest{
    std::string anglerName;
    std::string contestID;
    int catfishCounter;

};
class question5a
{
public:
    enum Error{InvalidFile};
    question5a(const std::string &file);
    void first(){next();};
    void next();
    Contest current()const{return curr;};
    bool end()const{return _end;};

private:
    std::ifstream infile;
    Contest curr;
    bool _end;

};

#endif // QUESTION5A_H
