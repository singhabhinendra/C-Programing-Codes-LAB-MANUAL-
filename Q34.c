//C program to delete an element in array at specified position.
//C program to delete an element in array at specified position.

#include<stdio.h>
int main()
{
int n,i,pos;

printf("Enter the size of array:");
scanf("%d",&n);
 int a[n];
printf("Enter the %d elements :",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Enter the position to delete element :");
scanf("%d",&pos);

if(pos>=n+1)
{printf("Deletion not possible ");}

for(i=pos-1;i<n-1;i++)
{a[i] = a[i+1];}

 printf("\n");

 printf("Final array after deletion :");
 for(i=0;i<n-1;i++)
 printf(" %d",a[i]);
return 0;
}