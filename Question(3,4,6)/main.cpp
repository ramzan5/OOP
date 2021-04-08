#include <iostream>
#include "question3a.h"
#include "question3b.h"
#include "question3.h"
#include<string>
using namespace std;

void Question3A(const string &file){
    question3a ff(file);
    ff.first();
    int max = ff.current().Size;
    for(;!ff.end();ff.next()){
        cout<<ff.current().Name<<" "<<ff.current().ID<<" "<<ff.current().found<<endl;
        if( max<ff.current().Size){
            max = ff.current().Size;
        }
    }

        cout<<ff.current().Name<<" "<<ff.current().ID<<" "<<max<<endl;

}
void Question3B(const string &str){
    question3b tt(str);
    for(tt.first();!tt.end();tt.next()){
        cout<<tt.current()._ID<<" "<<tt.current()._found<<endl;
    }
}
void Question3b(const string &str){
    question3 tt(str);
    for(tt.first();!tt.end();tt.next()){
            if(tt.current().finder){
               cout<<tt.current().id<<" "<<tt.current().finder<<endl;
            }

    }
}

int main()
{
    cout << "Q3 A part" << endl;
    Question3A("t1.txt");
    cout<<"Q2 B part"<<endl;
    Question3b ("t1.txt");

    return 0;
}
