
#ifndef CONTEST_H
#define CONTEST_H

#include<string>
#include<fstream>
#include<sstream>

//DataType of Contest(angler,contest_id,counter)
struct ContestInfo{
    std::string angler;
    std::string contest_id;
    int counter;
};
class ContestEnor{
    private:
        std::ifstream file;
        ContestInfo contest;
        bool _end;
    public:
        enum FileERROR{WrongFile};
        ContestEnor(const std::string &iFile)throw (FileERROR);
        void first(){next();}
        void next();
        ContestInfo current() const {return contest;};
        bool end()const {return _end;};

};


#endif // CONTEST_H
