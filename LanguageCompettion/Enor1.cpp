#include "Enor1.h"

void Enor1::next(){
    if(!(_end=tt.end())){
        curr.year = tt.current().year;
        curr.find = tt.current().find;
        for(;!tt.end()&&curr.year == tt.current().year;tt.next()){
            curr.find = curr.find && tt.current().find;
        }
    }


}
