//C program to print multiplication table of a number.
//C program to print multiplication table of a number.

#include<stdio.h>
int main()
{
    int n;

    printf("Enter number :");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d*%d = %d\n",n,i,n*i);
    }
return 0;
}
