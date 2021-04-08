#include "competition.h"

competition::competition(const std::string &str)
{
    file.open(str);
    if(file.fail()) throw Error::Invalid_File;
}
void competition::next(){
    std::string line;
    std::getline(file,line,'\n');
    if(!(_end=file.fail())){
        std::istringstream ss(line);
        ss>>curr.year>>curr.CompetitonName;
        std::string lang;
        int point;
        curr.find = false;
        for(ss>>lang>>point;!ss.fail();ss>>lang>>point){
            if(lang =="Fortran" && point>12){
                curr.find = true;
            }
        }
    }

}
