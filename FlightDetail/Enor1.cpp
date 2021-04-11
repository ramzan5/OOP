#include "Enor1.h"

Enor1:: Enor1(const std::string &ifile)
{
   file.open(ifile);
    if(file.fail()) throw Error::WrongFILE;
}


void Enor1::next(){
    _end = (abnorm == st);
    if(!_end){
        curr.UnoccupiedSeats = 0;
        std::string date = curr.date;
        while((st==norm) && (curr.date == date)){
            curr.UnoccupiedSeats = curr.UnoccupiedSeats + (curr.PessengerCapcity -curr.TotalPessenger);
            read();
        }
    }
}

void Enor1::read(){
    file>>curr.date>>curr.flightNo>>curr.PessengerCapcity>>curr.TotalPessenger;
    st = file.fail() ? abnorm:norm;

}
