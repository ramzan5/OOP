#include <iostream>
#include<string>
#include"Enor1.h"
#include"Enor2.h"
using namespace std;

void Solutionfor3(const string &str){
    Enor1 tt(str);
    bool exists = false;
    for(tt.first();!tt.end();tt.next()){
        if(tt.current().Cnt_Planet>=4){
            cout<<tt.current().Starship<<endl;
            exists = true;
        }
    }
    if (!exists){
        cout << "There is no Starship in the file with the given conditions!" << endl;
    }
}
void Solutionfor5(const string &str){
    Enor2 _tt(str);
    bool exists = false;
    for(_tt.first();!_tt.end();_tt.next()){
            //cout << _tt.current().legions << " " << _tt.current().cal << " " << _tt.current().macar << endl;
            if(_tt.current().cal && _tt.current().macar){
                cout<<_tt.current().legions<<" has visted the both planets"<<endl;
                exists = true;
            }
    }
    if (!exists){
        cout << "There is no legions in the given conditions!" << endl;
    }
}


int main()
{
    string filename = "t2.txt";
    try{
        cout << "++++++++++++++++++++" << endl;
        cout << "First Task" << endl;
        Solutionfor3(filename);
    }catch(...){
        cout<<"file error\n";
    }
    try{
        cout << "++++++++++++++++++++" << endl;
        cout << "2nd Task" << endl;
        Solutionfor5(filename);
    }catch(...){
        cout<<"file error!!\n";
    }

    return 0;
}
