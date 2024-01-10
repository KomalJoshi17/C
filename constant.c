// #include <stdio.h> 
// int main() 
// { 
//     const int x = 10;
    
// 	x = x + 1;
	// // constant can not change the value
// 	printf("%d", x); 
	
// 	return 0; 
// } 

#include <stdio.h> 
// constant used where the value is fixed
const double PI = 3.14;
int main() 
{ 
    int r;
    printf("Enter the value of r: \n");
    
	scanf("%d", &r);
	
	printf("Area is %f", PI * r * r); 
	
	return 0; 
} 