//C program to print all Strong Numbers between 1 to n
//C program to print all Strong Numbers between 1 to n

#include<stdio.h>  
int main()  
{  
    int fact=1,sum=0;  
    int n,r;  
    printf("Enter the 'n' number :");  
    scanf("%d",&n);  
    printf("\n Strong numbers are :");  
    for(int i=1;i<=n;i++)  
    {  
        int k=i;  
        while(k!=0)  
        {  
            r=k%10;  
            fact=factorial(r);  
             
          
            k=k/10;  
            sum=sum+fact;  
        }  
        if(sum==i){  
        printf("%d ",i);  
          
           }  
           sum=0;  
    }  
      
     
    return 0;  
}  
  
 int factorial(int f)  
    {  
        int mul=1;  
        for(int i=1; i<=f;i++)  
        {  
            mul=mul*i;  
        }  
        return mul;  
    } 