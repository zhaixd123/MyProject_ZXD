#include <stdio.h>
#include <stdlib.h>


int main(void){

    #ifdef WIN32
    #error This programme cannot compile at Windows Platform
    #endif
   return 0;
}

