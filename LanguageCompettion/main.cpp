#include <iostream>
#include<string>
#include"competition.h"
#include"Enor.h"
#include"Enor1.h"

using namespace std;
void SolutionFor3(const string &file){
    competition tt(file);
    string Name;
    int Year;
    bool l;
    for(tt.first();!tt.end();tt.next()){
        //cout<<tt.current().year<<" "<<tt.current().CompetitonName<<" "<<tt.current().find<<endl;
        if(tt.current().find){
            Year = tt.current().year;
            Name = tt.current().CompetitonName;
            l = true;
        }
    }
    if(l){
        cout<<"In "<<Year<<" and "<<Name<<" there were the more then 10 solution"<<endl;
    }
    else{
        cout<<" There were not the more then 10 solution in any Year in Fortran"<<endl;
    }
    }

void SolutionFor5(const string &file){
    Enor1 tt(file);
    bool l;
    int year;
    for(tt.first();!tt.end();tt.next()){
        //cout<<tt.current().year<<" "<<tt.current().find<<endl;
        if(tt.current().find){
            l = true;
            year = tt.current().year;
        }
    }
    if(l){
        cout<<"In " <<year<<" at most 3 correct solutions were obtained in Fortran"<<endl;
    }
    else{
        cout<<"The is not any year when at most 3 correct solutions were obtained in Fortran"<<endl;
    }
}
int main()
{
    cout<<"+++++++++++++++++++++++"<<endl;
    cout << "First Task" << endl;
    SolutionFor3("t2.txt");
    cout<<"+++++++++++++++++++++++"<<endl;
    cout<< "2nd Solution"<<endl;
     SolutionFor5("t1.txt");
    cout<<"+++++++++++++++++++++++"<<endl;

    return 0;
}
