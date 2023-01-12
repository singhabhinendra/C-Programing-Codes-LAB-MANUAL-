//C program to print all even numbers AND sum of it from 1 to n
//C program to print all even numbers AND sum of it from 1 to n

#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter the number :");
    scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      printf("%d ",i);
      sum+=i;
    }}

    printf("\nSum of even number till %d is:%d",n,sum);
}