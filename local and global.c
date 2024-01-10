// #include<stdio.h>
// unintialised output will be undefined
// int main(){
//     int x=10; 
//     // local variable
//     printf("%d\n",x);
//     return 0;
// }

// #include<stdio.h>
// int x=10;
// // global variable
// // unintialised output wiill be 0
// int main(){
//     printf("%d\n",x);
//     return 0;
// }

// extern
#include<stdio.h>
extern int x;
int main(){
    printf("%d\n",x);
    return 0;
}
int x=10;

// if local and global are same then local will be output
// if multiple then check sequence wise
