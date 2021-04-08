#include "Enor2.h"

void Enor2::next(){
    if(!(_end = tt.end())){
        curr.BlackHoleName = tt.current().BlackHole;
        curr.Weight = 0;
        curr.Cnt = 0;
        curr.isClose = false;
        for(;!(tt.end()) && curr.BlackHoleName == tt.current().BlackHole;tt.next()){
            if(tt.current().isCloser){
                curr.Weight = curr.Weight + tt.current().weight;
                curr.Cnt++;
            }
        }

    }

}
