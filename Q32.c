//C program to copy one array to another array
//C program to copy one array to another array
#include<stdio.h>
int main()
{
int i,m,j;

printf("Enter the size of array:");
scanf("%d",&m);
int a[m];
int b[m];
printf("Enter the elements \n:");
for ( i = 0; i <m; i++)
{ printf("\na[%d]=",i);
  scanf("%d",&a[i]);
  b[i]=a[i];}
 printf("\nArray a[] tranfer to array b[]\n"); 
for(i=0;i<m;i++)
printf("\na[%d] = %d\n",i,b[i]);
    
}