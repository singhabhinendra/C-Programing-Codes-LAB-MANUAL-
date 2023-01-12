//program to insert an element in array at specified position
//program to insert an element in array at specified position

#include<stdio.h>
int main(){
int pos,i,n,value;
printf("Enter the size of array:");
scanf("%d",&n);
int a[n];

printf("Enter %d elements :",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Enter the position to insert the element:");
scanf("%d",&pos);

printf("Enter element at new poition:");
scanf("%d",&value);

for(i=n-1;i>=pos-1;i--)
a[i+1]=a[i];
a[pos-1]= value;

printf("Final array after insertion value %d\n",value);
for(i=0;i<=n;i++)
printf("%d ",a[i]);

return 0;
}

