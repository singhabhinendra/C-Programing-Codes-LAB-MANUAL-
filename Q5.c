//C program to find power and square root of any number.
//C program to find power and square root of any number.
    
#include<stdio.h>
#include<math.h>
int main()
{    

    int n,a,root,power;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Enter the power :");
    scanf("%d",&a);
    
        power=pow(n,a);
    printf("Power of a number :%d\n",power);

          root=pow(n,0.5);
    printf("Square root of %d is %d",n,root);

    return 0;

}