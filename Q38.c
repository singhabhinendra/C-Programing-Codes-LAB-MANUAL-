//C program to perform scalar matrix multiplication
//C program to perform scalar matrix multiplication

#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    int a[10][10],b[10][10],c[10][10],sum[10][10];
   
   
    printf("Enter the order of square matrix :");
    scanf("%d",&m);


    printf("Enter the %d elements of 1st square matrix :",m*m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the %d elements of 2nd square matrix :",m*m);

     for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

  for(i=0;i<m;i++)
    {
        
        for(j=0;j<m;j++)
        {     sum[i][j]=0;
            for(k=0;k<m;k++)
            {
               sum[i][j]+=a[i][k]*b[k][j];
            }
            
        }
    }
    printf("Multiplication of two scaler matrix \n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}