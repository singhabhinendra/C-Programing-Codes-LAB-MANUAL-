//C program to print Armstrong numbers from 1 to n
//C program to print Armstrong numbers from 1 to n

#include<stdio.h>
int main()
{
 int a,n,r,s,x;  /*Armstrong numbers are those numbers who's sum of cube of digits are equal    itselfe.*/ 
 printf("Enter Number :");
 scanf("%d",&a);

 for(n=1;n<=a;n++){
     s=0;
     x=n;
     while(x!=0){

         r=x%10;
         s=s+r*r*r;
         x=x/10;
     }
     
     if(s==n)  
     printf("%d ",n);
 }
    return  0;

}