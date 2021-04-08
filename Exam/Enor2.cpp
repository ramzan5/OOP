#include "Enor2.h"

void Enor2::next(){
    if(!(_end = tt.end())){
        curr.Name = tt.current().Name;
        curr.cnt = 0;
        for(;!tt.end()&&curr.Name == tt.current().Name;tt.next()){
            if(tt.current().found){
                curr.cnt++;
            }
        }
    }

}

