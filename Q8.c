//C program to swap two numbers USING 3RD VARIABLE AND WITHOUT 3RD VARIABLE
//C program to swap two numbers USING 3RD VARIABLE AND WITHOUT 3RD VARIABLE
#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter the num1:");
    scanf("%d",&a);
    printf("Enter the num2:");
    scanf("%d",&b);
  
     c=a;
     a=b;
     b=c;
     printf("\nSwapping with three variable\n");
    printf("\nnum1 :%d",a);
    printf("\nnum2 :%d",b);
     

     //Swap WITHOUT 3RD VARIABLE
      printf("\nSwapping without third variable\n");
      a=a+b;
      b=a-b;
      a=a-b;
      printf("\nnum1 :%d",a);
      printf("\nnum2 :%d",b);
  return 0;
}