//C program to find sum of all elements of array.
//C program to find sum of all elements of array.

#include<stdio.h>
int main()
{
int n,i,sum =0;
printf("Enter size of array:");
scanf("%d",&n);
int a[n];

printf("Enter the elements of array :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
sum+=a[i];
printf("\n");
printf("\nSum of elemnts in array:%d",sum);
return 0;
}