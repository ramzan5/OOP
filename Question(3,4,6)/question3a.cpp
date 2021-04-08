#include "question3a.h"

question3a::question3a(const std::string &str)
{
    file.open(str);
    if(file.fail())throw Error::INVALIDFILE;
}

void question3a::next()
{
    std::string line;
    std::getline(file,line,'\n');
    if(!(_end=file.fail())){
        std::istringstream ss(line);
        ss>>curr.Name>>curr.ID;
        std::string fish;
        int size;
        curr.found = false;
        for(ss>>fish>>size;!ss.fail();ss>>fish>>size){
            if(!curr.found && fish == "catfish"){
                curr.Size = size;
                curr.found = true;
            }
            else if(curr.found){
                curr.Size = curr.Size < size ? size:curr.Size;
            }
        }
    }
}
