#include <iostream>
#include"Enor.h"
using namespace std;


int main()
{
    cout << "Give me Input File! " << endl;
    string file;
    cin>>file;
    Enor t(file);
    for(t.first();!t.end();t.next()){
        cout<<t.current().num<< " "<<t.current().counter<<endl;
    }
    return 0;
}
