// expression of multiple types
// bool -> char -> short int -> int -> unsigned int -> long -> long long -> float -> double -> long double 

// #include<stdio.h>

// int main(){
//     int x=10;
//     float y=10.5;
//     float z=x+y;
//     printf("%f",z);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char a='B';
//     // A=65 B=66
//     double b=10.5;
//     double c=a+b;
//     printf("%g",c);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int x=15,y=2;
//     double z=x/y;
//     printf("%g",z);
//     return 0;
// }

// EXPLICIT
#include<stdio.h>

int main(){
    int x=15,y=2;
    double z=(double)x/y;
    printf("%g",z);
    return 0;
}