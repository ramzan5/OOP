#include "contest1.h"

contest1::contest1(const std::string &str)
{
    file.open(str);
    if (file.fail()) throw Error{};
}

//name id fish size fish size fish size

void contest1::next(){
    std::string line;
    std::getline(file, line, '\n');
    if( ! (_end = file.fail())){
        std::istringstream ss(line);
        ss >> curr.Name >> curr.id;
        std::string fish;
        int size = 0;
        curr.maxSize = size;
        for(; !(ss.fail()); ss >> fish >> size){
            if((fish == "catfish") && size > curr.maxSize){
                curr.maxSize = size;
            }
        }
    }
}
