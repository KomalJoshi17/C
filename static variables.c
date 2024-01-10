#include<stdio.h>

int main(){
    static int x;
    printf("%d\n",x);
    return 0;
}

// uninitialised output will be 0
// static local initialised once and same value throughout
// static global have internal linkage
