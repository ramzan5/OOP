#include "Enor2.h"

//group iterator

void Enor2::next(){
    if(!(_end=ff.end())){
        curr.legions = ff.current().legion;
        curr.cal = ff.current().visitedCaliban; //false;
        curr.macar = ff.current().vistedMacragge; //false;
        for(; !ff.end() && curr.legions == ff.current().legion; ff.next()){
            if(ff.current().visitedCaliban){
                curr.cal = true;
            }
            if (ff.current().vistedMacragge){
                curr.macar = true;
            }
        }
    }
}
