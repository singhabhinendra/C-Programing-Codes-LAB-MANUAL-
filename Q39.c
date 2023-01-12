//C program to find sum of main diagonal elements of a matrix
//C program to find sum of main diagonal elements of a matrix


#include<stdio.h>
int main()
{
    int i,j,m,n,sum=0;
    //Number of rows and columns should be  same
    printf("Enter the rows :");
    scanf("%d",&m);
    
    printf("Enter the columns :");
    scanf("%d",&n);
    int a[m][n];
    if(m==n)
    {
        printf("Enter the elemnts in array :");
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nCreated array :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

         for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==j || j+i==m-1)
                {
                    sum+=a[i][j];
                }
            }
           
        }
        printf("sum of diagnal array : %d",sum);

}
return 0;
}

