//C program to print Fibonacci series up to n terms.
//C program to print Fibonacci series up to n terms.

#include<stdio.h>
int main()
{  
  int n,a=-1,b=1,c;
   printf("Enter Number :");
   scanf("%d",&n);
    
       for(int i=1;i<=n;i++){

          c=a+b;
          printf(" %d ",c);
          a=b;
          b=c;
      
       }  

    return 0;
}