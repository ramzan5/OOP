#include "question10b.h"

void question10b::next(){
    if(!(_end=tt.end())){
        curr.cnt = 0;
        curr.id = tt.current().id;
        curr.found = tt.current().found;
        for(;!(tt.end()) && curr.id == tt.current().id;tt.next()){
            if(curr.found){
                curr.cnt++;
            }
        }
    }

}
