//C program to calculate factorial of a number.
//C program to calculate factorial of a number.

#include<stdio.h>
int main()
{
    int fact=1,n;

    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
         fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);

    return 0;
}