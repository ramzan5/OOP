#include "Enor2.h"

void Enor2::next(){
    if(!(_end=tt.end())){
        curr.customerName = tt.current().nikName;
        curr.atleast = true;
        for(;!(tt.end()) && curr.customerName == tt.current().nikName;tt.next())
            curr.atleast = tt.current().counter >= 2 && curr.atleast;

    }

}
