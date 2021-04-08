#include "contest.h"


///Constructor taking input file
ContestEnor::ContestEnor(const std::string &iFile) throw (FileERROR)
{
    file.open(iFile);
    if(file.fail())throw WrongFile;
}

///
void ContestEnor::next(){
    std::string line;
    getline(file, line,'\n');
    if(!(_end = file.fail())){
        std::istringstream is(line);
        is>>contest.angler>>contest.contest_id;
        contest.counter = 0;
        std::string fish;
        int size;
        for(is>>fish>>size;!(is.fail()); is>>fish>>size)
        {
            contest.counter++;
        }
    }
}


//
