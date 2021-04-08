#include "Enor1.h"

Enor1::Enor1(const std::string &str)
{
    file.open(str);
    if(file.fail())throw Error::Invalid_File;
}
void Enor1::next(){
    std::string line;
    std::getline(file,line,'\n');
    if(!(_end=file.fail())){
        std::istringstream ss(line);
        ss>>curr.Name>>curr.CompanyName;
        std::string service;
        int price;
        curr.Maxprice = 0;
        curr.found = false;
        for(ss>>service>>price;!ss.fail();ss>>service>>price){
            if(price>95){
                curr.Maxprice = price;
                curr.found = true;
            }

        }

    }

}

