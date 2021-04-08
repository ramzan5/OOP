#include "question3.h"

void question3::next(){
    if(!(_end=tt.end())){
            curr.id = tt.current()._ID;
            curr.finder = tt.current()._found;
            for(;!(tt.end())&& curr.id == tt.current()._ID;tt.next()){
               curr.finder = tt.current()._found || curr.finder;
                }
            }

    }
