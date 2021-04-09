#include "Enor1.h"


//line iterator

Enor1::Enor1(const std::string &str)
{
   file.open(str);
   if(file.fail()) throw Error::Invalid_File;
}

void Enor1::next(){
    std::string line;
    std::getline(file,line,'\n');
    if(!(_end=file.fail())){
        std::istringstream ss(line);
        ss>>curr.legion>>curr.Starship;
        std::string planet;
        curr.Cnt_Planet = 0;
        curr.visitedCaliban= false;
        curr.vistedMacragge = false;
        for(ss>>planet;!ss.fail();ss>>planet){
            curr.Cnt_Planet++;
            if(planet=="Caliban"){
                curr.visitedCaliban = true;
            }
            else if(planet =="Macragge" ){
                curr.vistedMacragge= true;
            }
        }

    }


}


