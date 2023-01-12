//C program to find area of a triangle if base and height are give
//C program to find area of a triangle if base and height are give
#include<stdio.h>
int main()
{    
   int base,height,a;
    printf("Enter the base of triangle:");
    scanf("%d",&base);
    printf("Enter the height of triangle:");
    scanf("%d",&height);
        
        a=(base*height)/2;
    printf("Area of triangle:%d",a);

    return 0;
}
