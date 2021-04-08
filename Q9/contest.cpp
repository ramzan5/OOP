#include "contest.h"

contest::contest(const std::string &str)
{
  file.open(str);
  if(file.fail()) throw Error::INVALID_FILE;
}

void contest::next()
{
    std::string line;
    std::getline(file,line,'\n');
    if(!(_end = file.fail())){
        std::istringstream ss(line);
        ss>>curr.Name>>curr.ID;
        curr.fish_counter = 0;
        std::string fish;
        int size;
        for(ss>>fish>>size;!ss.fail();ss>>fish>>size){
            if(fish == "catfish"){
                curr.fish_counter++;
            }
        }

    }
}
