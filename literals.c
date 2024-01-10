// constant values in a program
// integer literals

// PREFIXES
// no prefix decimal
// 0x hexadecimal
// 0 octal
// 0b binary 

// #include<stdio.h>

// int main(){
//     int a=20;
//     int b=0x1A;
//     int c=016;
//     int d=0b11;
//     printf("%d %d %d %d",a ,b ,c ,d);
//     return 0;
// }

// SUFFIXES
// #include<stdio.h>

// int main(){
//     int a=124;
//     unsigned int =124u;
//     long int c=124l;
//     long long d=124ll;
//     return 0;
// }

// float literals
// allowed prefix: 0x
// allowed suffixes: 
// f --> float
// l --> long double

#include<stdio.h>

int main(){
    float a=10.5f;
    double b=10.515;
    long double c=10.515l;
    float d=2.1e4f;
    double e=200.1e-80;
    double f=0x1A.1p2;
    printf("%g %g %Lg %g %g %g",a,b,c,d,e,f);
    return 0;
}
