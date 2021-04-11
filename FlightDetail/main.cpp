#include <iostream>
#include "Enor1.h"
#include <string>

using namespace std;
/*Lufthansa has published statistical data in a sequential input file: date (string), flight number (string), passenger capacity (natural number), number of passengers (natural number). The file is ordered by date.

Was there a day where the total number of unoccupied seats exceeded 10.000?*/

void Detail(const string &str){
    Enor1 tt(str);
    for(tt.first();!tt.end();tt.next()){
        cout<<tt.current().UnoccupiedSeats<<endl;
    }
}

int main()
{
    cout << "Flight Detail" << endl;
    Detail("t1.txt");
    return 0;
}
