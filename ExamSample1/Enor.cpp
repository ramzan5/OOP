#include "Enor.h"

Enor::Enor(const std::string &str)
{
    file.open(str);
    if(file.fail())throw Error::WrongFile;
}

void Enor::next()
{
    std::string line;
    std::getline(file,line,'\n');
    if(!(_end = file.fail())){
        std::istringstream ss(line);
        ss>>curr.nikName>>curr.shootingGall;
        std::string prize;
        curr.counter = 0;
        for(ss>>prize;!ss.fail();ss>>prize){
            curr.counter++;
        }
    }
}
