//C program to check whether a matrix is Identity matrix
//C program to check whether a matrix is Identity matrix

#include<stdio.h>
int main()
{ 
  int m,n,i,j,count=0;

  printf("Enter the no of rows :");
  scanf("%d",&m);

   printf("Enter the no of columns :");
   scanf("%d",&n);

   int a[m][n];

    printf("Enter the no of elements :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            count++;
        }
        printf("\n");
    }
   

      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
         printf("\n");
    }

   if(count>(m*n/2))
   printf("Matrix is Sparse");

   else
   printf("Matrix is not Sparse Matrix ");

 return 0;
}
