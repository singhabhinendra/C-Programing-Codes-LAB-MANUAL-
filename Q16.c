//C program to print all natural numbers AND sum of it from 1 to n
//C program to print all natural numbers AND sum of it from 1 to n

#include<stdio.h>
int main()
{   
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    { printf("%d\n",i);
      sum+=i;
    }

    printf("\nSum is :%d",sum);

    return 0;
}