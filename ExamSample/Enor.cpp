#include "Enor.h"


Enor::Enor(const std::string &str)
{
        file.open(str);
        if(file.fail()) throw Error{WrongFile};
}

void Enor::next(){
            std::string line;
            std::getline(file,line,'\n');
            _curr.isCloser = false;
            if(!(_end = file.fail())){
            std::istringstream is(line);
            is>>_curr.BlackHole>>_curr.Station;
            std::string date;
            for(is>>date>>_curr.weight>>_curr.distance;!(is.fail());is>>date>>_curr.weight>>_curr.distance){
                if(_curr.isCloser ||_curr.distance < 2700){
                    _curr.isCloser = true;

                }
            }
    }
}
