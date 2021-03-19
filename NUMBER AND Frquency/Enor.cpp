#include "Enor.h"


Enor::Enor(const std::string & ifile){
    ff.open(ifile);
    if(ff.fail()) throw WrongFILE;
}

void Enor::next(){
    _end = (abnorm == st);
    if(!_end){
        numCount.num = num;
        numCount.counter = 0;
        while(norm ==st &&num == numCount.num){
            numCount.counter++;
            read();
        }
    }

}



void Enor::read(){
    st = (ff>>num) ? norm:abnorm; //Checking the status of File
}
