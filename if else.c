// IF ELSE STATEMENT
// #include<stdio.h>

// int main(){
//     int age; 
//     scanf("%d",&age);
//     if(age>=18){
//         printf("CAN VOTE");
//     }else{
//         printf("CAN NOT VOTE");
//     }
//     return 0;
// }

// ODD EVEN NUMBER
// #include<stdio.h>

// int main(){
//     int number;
//     scanf("%d",&number);
//     if(number%2==0){
//         printf("Number is Even");
//     }else{
//         printf("Number is Odd");
//     }
//     return 0;
// }

// POSITIVE NEGATIVE NEUTRAL NUMBER
// #include<stdio.h>

// int main(){
//     int number;
//     printf("ENTER A NUMBER:\n");
//     scanf("%d",&number);
//     if(number<0){
//         printf("NUMBER IS NEGATIVE");
//     }else if(number>0){
//         printf("NUMBER IS POSITIVE");
//     }else{
//         printf("NEUTRAL");
//     }
//     return 0;
// }

// POSITIVE EVEN/ODD, NEGATIVE EVEN/ODD, NETURAL
// #include<stdio.h>

// int main(){
//     int number;
//     printf("ENTER A NUMBER:\n");
//     scanf("%d",&number);
//     if(number>0){
//         if(number%2==0){
//             printf("POSITIVE EVEN");
//         }else{
//             printf("POSITIVE ODD");
//         }
//     }else if(number<0){
//         if(number%2==0){
//             printf("NEGATIVE EVEN");
//         }else{
//             printf("NEGATIVE ODD");
//         }
//     }else{
//         printf("NEUTRAL");
//     }
//     return 0;
// }

// SWITCH CASES equivalent to if else ladder code
    // #include<stdio.h>

    // int main(){
    //     int x=0,y=0;
    //     printf("enter choice:\n");
    //     char ch;
    //     scanf("%c",&ch);
    //     switch (ch)
    //     {
    //     case 'L':x--;
    //         break;
    //     case 'R':x++;
    //         break;
    //     case 'U':y++;
    //         break;
    //     case 'D':y--;
    //         break;    
    //     default:
    //         printf("INVALID");
    //         break;
    //     }
    //     printf("%d %d",x,y);
    //     return 0;
    // }

// LARGEST OF THREE NUMBERS
// #include<stdio.h>

// int main(){
//     int num1,num2,num3;
//     printf("enter numbers:\n");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     if(num1>num2 && num1>num3){
//         printf("%d is largest",num1);
//     }else if(num2>num1 && num2>num3){
//         printf("%d is largest",num2);
//     }else{
//         printf("%d is largest",num3);
//     }
//     return 0;
// }

// LEAP YEAR
// #include<stdio.h>

// int main(){
//     int year;
//     printf("enter a year\n");
//     scanf("%d",&year);
//     if ((year%100!=0) && (year%4==0 || year%400==0)){
//         printf("LEAP YEAR");
//     }else{
//         printf("NOT A LEAP YEAR");
//     }
//     return 0;
// }

// SIMPLE CALCULATOR
#include<stdio.h>

int main(){
    int number,num1,num2;
    scanf("%d %d %d",&number,&num1,&num2);
    int res;
    if(number==1){
        res=num1+num2;
        printf("%d",res);
    } else if(number==2){
        res=num1-num2;
        printf("%d",res);
    }else if(number==3){
        res=num1*num2;
        printf("%d",res);
    }else{
        printf("INALID");
    }
    return 0;
}