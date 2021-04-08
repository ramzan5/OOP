#include "question5a.h"

question5a::question5a(const std::string &str)
{
    infile.open(str);
    if(infile.fail()) throw Error::InvalidFile;
}

void question5a::next(){
    std::string line;
    std::getline(infile,line,'\n');
    if(!(_end=infile.fail())){
        std::istringstream is(line);
        is>>curr.anglerName>>curr.contestID;
        curr.catfishCounter = 0;
        std::string fish;
        int size;
        for(is>>fish>>size;!is.fail();is>>fish>>size){
            if(fish=="catfish"){
                curr.catfishCounter++;
            }
        }
    }


}
