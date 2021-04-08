#include "question5b.h"

void question5b::next(){
    if(!(_end=rr.end())){
            curr.id = rr.current().contestID;
            curr.atleast = true;
            for(;!rr.end() && curr.id==rr.current().contestID;rr.next()){
                    curr.atleast = rr.current().catfishCounter>=3 && curr.atleast;

            }
    }



}
