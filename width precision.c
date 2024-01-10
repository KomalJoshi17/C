// WIDTH minimum characters
// #include<stdio.h>

// int main(){
//     int x=124;
//     printf("%d\n",x);
//     printf("%5d\n",x);
//     printf("%*d\n",7,x);
//     printf("%-5d\n",x);
//     printf("%05d\n",x);
//     printf("%+5d\n",x);
//     return 0;
// }

// PRECISION minimum characters in string
// #include<stdio.h>

// int main(){
//     char x[]="geeksforgeeks";
//     printf("%s\n",x);
//     printf("%5.3s\n",x);
//     printf("%-5.3s\n",x);
//     printf("%*.*s\n",5,3,x);
//     return 0;
// }

// PRECISION digits after decimal point in case of floating numbers
// #include<stdio.h>

// int main(){
//     double x=1.345;
//     printf("%f\n",x);
//     printf("%.2f\n",x);
//     printf("%5.2f\n",x);
//     printf("%*.*f\n",5,2,x);
//     printf("%0*.*f\n",5,2,x);
//     printf("%-5.2f\n",x);
//     return 0;
// }

// PRECISION
// int main(){
//     double x=1.345;
//     printf("%e\n",x);
//     printf("%.2e\n",x);
//     printf("%5.2e\n",x);
//     printf("%*.*e\n",5,2,x);
//     printf("%0*.*e\n",5,2,x);
//     printf("%-5.2e\n",x);
//     return 0;
// }

// PRECISION total digits in case of %g
// int main(){
//     double x=1.345;
//     printf("%g\n",x);
//     printf("%.2g\n",x);
//     printf("%5.2g\n",x);
//     printf("%*.*g\n",5,2,x);
//     printf("%0*.*g\n",5,2,x);
//     printf("%-5.2g\n",x);
//     return 0;
// }

// PRECISION almost same as width in case of integers
#include<stdio.h>

int main(){
    int x=123;
    printf("%.5d\n",x);
    printf("%.5d\n",-x);
    printf("%5d\n",x);
    printf("%05d\n",-x);
    return 0;
}