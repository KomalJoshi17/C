// stdin standard input scanf(),fgets(), getchar()
// stdout standard output printf(),puts(),fputs(),putchar()
// stderr standard error

// printf() gives output
// \n escapse sequence
// 1. string
// 2. formal+string
// %d int
// %c char
// %u unsigned int

//  scanf() reads input
// 1. format string

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter a:\n");
//     scanf("%d",&a);
//     printf("enter b:\n");
//     scanf("%d",&b);
//     printf("sum %d",a+b);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char name[100];
//     scanf("%s",&name);
//     printf("hi %s",name);
//     return 0;
// }

// fgets() reads input with spaces
// should be given with the limit thats why unsafe
#include<stdio.h>

int main(){
    char name[100];
    // reads 99 chars as limit is 100
    fgets(name,100,stdin);
    printf("hi %s",name);
    return 0;
}