#include <iostream>
#include<string>
#include "Enor.h"
#include"Enor2.h"

using namespace std;

void first(const string &file){
    Enor tt(file);
        tt.first();
        StationInfo minvalue;
        minvalue.distance = tt.current().distance;
        for(;!tt.end();tt.next()){
            if(minvalue.distance<tt.current().distance && tt.current().isCloser){
                minvalue.distance = tt.current().distance;
                minvalue.BlackHole = tt.current().BlackHole;
                minvalue.Station = tt.current().Station;
                minvalue.weight = tt.current().weight;
            }
        }
        cout<<minvalue.weight<<" "<< minvalue.BlackHole<< " "<<minvalue.Station<<endl;
}
void pp(const string &file){
    Enor2 tt(file);
    double sum = 0;
    int cnt = 0;
    for(tt.first();!tt.end();tt.next()){
    cout<<tt.current().BlackHoleName<<" "<<tt.current().Weight<<" "<<tt.current().Cnt<<endl;

        sum = sum + tt.current().Weight;
        cnt++;
    }
    cout<<sum/cnt<<endl;

    //cout<<"The Average Weight of Black Holes that are closer then 2700 are "<<avg<<endl;
}
int main()
{

    first("input.txt");
    pp("input.txt");
    return 0;
}
