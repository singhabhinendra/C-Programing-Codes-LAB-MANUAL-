//C program to search element in array using Linear Search
//C program to search element in array using Linear Search
#include<stdio.h>
int main()
{
    int n,i,flag=0,pos,key;

printf("Enter size of the array:");
scanf("%d",&n);
int a[n];

printf("Enter the %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the number you want to search :");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
pos=i+1;
flag=1;
 break;
}
}

if(flag==1)
printf("Position of %d is %d",a[i],pos);
        
else
printf("Number is not found");
return 0;
}