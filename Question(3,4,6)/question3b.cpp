#include "question3b.h"

question3b::question3b(const std::string &str)
{
    file.open(str);
    if(file.fail())throw Error::INVALIDFILE;
}

void question3b::next()
{
    std::string line;
    std::getline(file,line,'\n');
    if(!(_end=file.fail())){
        std::istringstream ss(line);
        ss>>curr._Name>>curr._ID;
        std::string fish;
        int size;
        curr._found = false;
        for(ss>>fish>>size;!ss.fail();ss>>fish>>size){
            if(!curr._found && fish == "catfish"){
                curr._Size = size;
                curr._found = true;
            }
            else if(curr._found){
                curr._found = curr._Size>30 ? true : false;

            }
        }
    }
}
