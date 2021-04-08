#include <iostream>
#include "Enor.h"
#include "Enor2.h"
using namespace std;

void ff(const string &file){
    Enor tt(file);
    for(tt.first();!tt.end();tt.next()){
        cout<<tt.current().counter<<endl;
    }
}
double FunForAccepted(const string &file){
    Enor tt(file);
    double cnt = 0;
    double sum = 0;
    for(tt.first();!tt.end();tt.next()){
        sum = sum + tt.current().counter;
        cnt++;
    }
    return sum / cnt;
}
void ll(const string &str){
    Enor2 tt(str);
    for(tt.first();!tt.end();tt.next()){
        cout<<tt.current().atleast<<endl;

    }
}
void solutionForExcellent(const string &str){
Enor2 tt(str);
    for(tt.first();!tt.end();tt.next()){
            if(tt.current().atleast){
                cout<<"Yes There is Person Who has won atleast Two prize"<<endl;
            }
            break;
    }

}

int main()
{
    ff("t1.txt");
    cout << "Solution For Accepted" << endl;

    cout<<FunForAccepted("t1.txt")<<endl;

    cout<<"------------"<<endl;
    ll("t1.txt");
    solutionForExcellent("t1.txt");

    return 0;
}
