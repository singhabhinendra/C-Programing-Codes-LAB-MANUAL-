//C program to find maximum between three numbers using conditional operator AND Ternary Operator
//C program to find maximum between three numbers using conditional operator AND Ternary Operator

#include <stdio.h>  
   
int main()  {  
    int a, b, c, max;  

    printf("Enter Three Number\n");  
    scanf("%d %d %d", &a, &b, &c);  
     
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
   printf("\nMaximum Number is = %d\n", max);  
   return 0;  
}