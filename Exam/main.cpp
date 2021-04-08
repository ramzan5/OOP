#include <iostream>
#include<string>
#include "Enor1.h"
#include "Enor2.h"
using namespace std;

void SolutionFor3(const string &file){
    Enor1 tt(file);
    for(tt.first();!tt.end();tt.next()){
            if(tt.current().found){
                cout<<tt.current().Name<<" "<<tt.current().CompanyName<<" "<<tt.current().Maxprice<<endl;
            }
    }
}
void SolutionFor5(const string &file){
    Enor2 tt(file);
    int cnt=0;
    for(tt.first();!tt.end();tt.next()){
        cout<<tt.current().Name<<" "<<tt.current().cnt<<endl;
        if(tt.current().cnt>=2){
            cnt++;
        }

    }
    cout<<cnt<<endl;

}
int main()
{
    cout << "++++++++++++++++++" << endl;
    cout << "First Task" << endl;
    SolutionFor3("test1.txt");
    cout << "++++++++++++++++++" << endl;
    SolutionFor5("test1.txt");
    cout << "++++++++++++++++++" << endl;
    return 0;
}
