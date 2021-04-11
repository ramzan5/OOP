#ifndef ENOR1_H
#define ENOR1_H
#include<string>
#include<fstream>

struct FlightDetail{
     std::string date,flightNo;
     int PessengerCapcity,TotalPessenger,UnoccupiedSeats;

};
//Enum for file status checkeing
enum Status{norm,abnorm};
class Enor1{

public:
    enum Error {WrongFILE};
    Enor1(const std::string& file);
    void first(){read();next();};
    void next();
    FlightDetail current()const{return curr;}
    bool end()const {return _end;}


private:
    std::ifstream file;
    FlightDetail curr;
    bool _end;
    Status st;
    void read();

};


#endif // ENOR1_H
