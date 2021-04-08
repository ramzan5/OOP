#include <iostream>
#include "contest.h"
#include "contest1.h"
#include "question5a.h"
#include "question5b.h"
#include "question10a.h"
#include "question10b.h"
using namespace std;

/// Function for looking the first angler with the contest ID, who had at least one contest without catch

bool firstSearch(const string &file, bool &flag, ContestInfo &cont)
{
    ContestEnor t(file);
    flag = false;
    for(t.first();!(t.end());t.next()){

        if((t.current().counter) == 0)
        {
            cont = t.current();
            flag = true;
            break;

        }
    }

    return flag;
}
void fprint(const string file){
    contest1 ttt(file);
    for(ttt.first();!(ttt.end());ttt.next()){
        cout<<ttt.current().Name <<" "<<ttt.current().id<< " "<<ttt.current().maxSize<<endl;
    }

}
Champ secondSearch(const string &file)
{
    contest1 c(file);
    c.first();
    int MAXMACHLIE = c.current().maxSize;
    Champ cham;
    for(; !(c.end()); c.next()){
        if(MAXMACHLIE < c.current().maxSize){
            MAXMACHLIE = c.current().maxSize;
            cham = c.current();
        }
    }
    return cham;
}
void question5A(const string &file){
    question5a tt(file);
    Contest cc;
    for(tt.first();!tt.end();tt.next()){
        if(tt.current().catfishCounter>=3){
            cc.anglerName = tt.current().anglerName;
            cc.contestID = tt.current().contestID;
            break;
        }
    }
    cout<<cc.anglerName<<" with ContestID "<<cc.contestID<<" has Caught at least three catfish"<<endl;

}
void question5B(const string &file){
    question5b tt(file);
    int cnt =0;
    for(tt.first();!tt.end();tt.next()){
        if(tt.current().atleast ){
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
void question10(const string &str){

    question10a t(str);
    t.first();
    int min = t.current().weight;
    bool l = false;
    for(;!t.end();t.next()){
           if(t.current().found){
            if(min>t.current().weight){
                min = t.current().weight;
                l = true;
            }
           }

        }
    if(l){
        cout<<t.current().name<<" with the "<<t.current().id<<" has caught the catfish with minSize "<<min<<endl;
    }
    else{
        cout<<"No one caught any catfish in any contest"<<endl;
    }

}


void question10B(const string& file){
    question10b ss(file);
    bool all = false;
    for(ss.first();!ss.end();ss.next()){
        //cout<<ss.current().id<<" "<<ss.current().cnt<<" "<<ss.current().found<<endl;
        if(ss.current().found && ss.current().cnt>=2){
            all = true;
        }
    }
    if(all){
        cout<<"every angler caught catfish on at least two contests"<<endl;
    }
    else{
        cout<<"Sorry there is no one"<<endl;
    }

}
int main()
{
//    cout<< "Give me the Input file! "<<endl;
//    string file;
//    cin>>file;
//    //string maxContest;
//    ContestInfo f;
//   // bool flag ;
//
//    bool flag = firstSearch(file, flag, f);
//    if(flag)
//        {
//            cout << f.angler << " with contest ID " << f.contest_id << " has caught nothing " << endl;
//        }
//    else
//        {
//            cout << "There is no one in the file!" << endl;
//        }

    cout << "HELLO WORLD!" << endl;
    fprint("t3.txt");
    cout<<"-----------------"<<endl;
    bool flag;
    ContestInfo i;
    cout << firstSearch("t3.txt", flag,i);
    Champ m = secondSearch("t3.txt");
    cout << m.Name << "\t" << m.id <<"\t" << m.maxSize << endl;
    cout<<"-----------------------------"<<endl;
    question5A("t3.txt");
    question5B("t3.txt");
    question10("t2.txt");
    cout<<"=========================="<<endl;
    question10B("t3.txt");

    //cout<<ff.Name <<" "<<ff.id<< " has Caught the big cat fish"<<endl;
    return 0;
}
