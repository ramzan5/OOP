#include "question10a.h"

question10a::question10a(const std::string &str)
{
    file.open(str);
    if(file.fail())throw Error::WrongFile;
}
void question10a::next(){
    std::string line;
    std::getline(file,line,'\n');
    if(!(_end=file.fail())){
        std::istringstream ss(line);
        ss>>curr.name>>curr.id;
        std::string fish;
        int size;
        curr.found = false;
        for(ss>>fish>>size;!ss.fail();ss>>fish>>size){

            if(!curr.found && fish == "catfish"){
                curr.found = true;
                curr.weight = size;
            }else if (curr.found && fish == "catfish"){
                curr.weight = curr.weight < size ? curr.weight : size;
            }
    }
}
}

