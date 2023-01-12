//C program to check whether a number is palindrome or not
//C program to check whether a number is palindrome or not
#include<stdio.h>  
int main()    
{    
int n,r,sum=0,a; 

printf("Enter the number:");    
scanf("%d",&n);    
a=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(a==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  

}   