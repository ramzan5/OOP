#include <iostream>
#include "contest.h"
#include<string>
using namespace std;

void Question9A(const string &str){
    contest tt(str);
    double sum,cnt =0;
    for(tt.first();!tt.end();tt.next()){
        //cout<<tt.current().Name<<" "<<tt.current().ID<<" "<<tt.current().fish_counter<<endl;
        sum = sum + tt.current().fish_counter;
        cnt++;
    }
    double avg = sum/cnt ;
    cout<<avg<<endl;
    if(avg>0){
        cout<<"The Average Number of Caught catfish are "<<avg<<endl;
    }
    else
        {
        cout<<"The Average Number of Caught catfish are 0"<<endl;
    }
}
void Question9B(const string &str){
    contest tt(str);
    tt.first();
    int max = tt.current().fish_counter;
    std::string Name = tt.current().Name;
    for(;!tt.end();tt.next()){
        if(max<tt.current().fish_counter){
            max = tt.current().fish_counter;
            Name = tt.current().Name;
        }
    }
    cout<<Name<<" has caught the Maximum Number of catfish which are "<<max<<endl;
}

int main()
{
    cout << "First Task" << endl;
    Question9A("t2.txt");
    Question9B("t1.txt");
    return 0;
}
